
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef void* sds ;
struct TYPE_14__ {scalar_t__ type; char* str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_15__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_16__ {char* ip; int port; char* name; int migrating_count; int importing_count; int* slots; scalar_t__ slots_count; void** importing; void** migrating; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_13__ {char* hostsocket; char* hostip; int hostport; scalar_t__ cluster_nodes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 TYPE_11__ VAR_1 ;
 TYPE_3__* FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,char*,int) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_9 (char*,int) ;
 TYPE_2__* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*) ;
 char* FUNC_12 (char*) ;
 int VAR_2 ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,char*) ;
 void* FUNC_16 (void**,int) ;

__attribute__((used)) static int FUNC_17() {
    int VAR_3 = 1;
    redisContext *VAR_4 = ((void*)0);
    redisReply *VAR_5 = ((void*)0);
    if (VAR_1.hostsocket == ((void*)0))
        VAR_4 = FUNC_9(VAR_1.hostip,VAR_1.hostport);
    else
        VAR_4 = FUNC_10(VAR_1.hostsocket);
    if (VAR_4->err) {
        FUNC_4(VAR_2,"Could not connect to Redis at ");
        if (VAR_1.hostsocket == ((void*)0)) {
            FUNC_4(VAR_2,"%s:%d: %s\n",VAR_1.hostip,VAR_1.hostport,
                    VAR_4->errstr);
        } else FUNC_4(VAR_2,"%s: %s\n",VAR_1.hostsocket,VAR_4->errstr);
        FUNC_3(1);
    }
    clusterNode *VAR_6 = FUNC_2((char *) VAR_1.hostip,
                                               VAR_1.hostport);
    if (!VAR_6) {VAR_3 = 0; goto cleanup;}
    VAR_5 = FUNC_8(VAR_4, "CLUSTER NODES");
    VAR_3 = (VAR_5 != ((void*)0));
    if (!VAR_3) goto cleanup;
    VAR_3 = (VAR_5->type != VAR_0);
    if (!VAR_3) {
        if (VAR_1.hostsocket == ((void*)0)) {
            FUNC_4(VAR_2, "Cluster node %s:%d replied with error:\n%s\n",
                    VAR_1.hostip, VAR_1.hostport, VAR_5->str);
        } else {
            FUNC_4(VAR_2, "Cluster node %s replied with error:\n%s\n",
                    VAR_1.hostsocket, VAR_5->str);
        }
        goto cleanup;
    }
    char *VAR_7 = VAR_5->str, *VAR_8, *VAR_9;
    while ((VAR_8 = FUNC_15(VAR_7, "\n")) != ((void*)0)) {
        *VAR_8 = '\0';
        VAR_9 = VAR_7;
        VAR_7 = VAR_8 + 1;
        char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
        int VAR_14 = 0;
        while ((VAR_8 = FUNC_13(VAR_9, ' ')) != ((void*)0)) {
            *VAR_8 = '\0';
            char *VAR_15 = VAR_9;
            VAR_9 = VAR_8 + 1;
            switch(VAR_14++){
            case 0: VAR_10 = VAR_15; break;
            case 1: VAR_11 = VAR_15; break;
            case 2: VAR_12 = VAR_15; break;
            case 3: VAR_13 = VAR_15; break;
            }
            if (VAR_14 == 8) break;
        }
        if (!VAR_12) {
            FUNC_4(VAR_2, "Invalid CLUSTER NODES reply: missing flags.\n");
            VAR_3 = 0;
            goto cleanup;
        }
        int VAR_16 = (FUNC_15(VAR_12, "myself") != ((void*)0));
        int VAR_17 = (FUNC_15(VAR_12, "slave") != ((void*)0) ||
                         (VAR_13 != ((void*)0) && VAR_13[0] != '-'));
        if (VAR_17) continue;
        if (VAR_11 == ((void*)0)) {
            FUNC_4(VAR_2, "Invalid CLUSTER NODES reply: missing addr.\n");
            VAR_3 = 0;
            goto cleanup;
        }
        clusterNode *VAR_18 = ((void*)0);
        char *VAR_19 = ((void*)0);
        int VAR_20 = 0;
        char *VAR_21 = FUNC_13(VAR_11, ':');
        if (VAR_21 != ((void*)0)) {
            *VAR_21 = '\0';
            VAR_19 = VAR_11;
            VAR_11 = VAR_21 + 1;

            if ((VAR_21 = FUNC_13(VAR_11, '@')) != ((void*)0)) *VAR_21 = '\0';
            VAR_20 = FUNC_1(VAR_11);
        }
        if (VAR_16) {
            VAR_18 = VAR_6;
            if (VAR_18->ip == ((void*)0) && VAR_19 != ((void*)0)) {
                VAR_18->ip = VAR_19;
                VAR_18->port = VAR_20;
            }
        } else {
            VAR_18 = FUNC_2(FUNC_12(VAR_19), VAR_20);
        }
        if (VAR_18 == ((void*)0)) {
            VAR_3 = 0;
            goto cleanup;
        }
        if (VAR_10 != ((void*)0)) VAR_18->name = FUNC_12(VAR_10);
        if (VAR_14 == 8) {
            int VAR_22 = FUNC_14(VAR_9);
            while (VAR_22 > 0) {
                VAR_8 = FUNC_13(VAR_9, ' ');
                if (VAR_8 == ((void*)0)) VAR_8 = VAR_9 + VAR_22;
                VAR_22 -= (VAR_8 - VAR_9);

                char *VAR_23 = VAR_9;
                *VAR_8 = '\0';
                if (VAR_22) {
                    VAR_9 = VAR_8 + 1;
                    VAR_22--;
                } else VAR_9 = VAR_8;
                char *VAR_24 = ((void*)0);
                if (VAR_23[0] == '[') {
                    VAR_23++;
                    if ((VAR_8 = FUNC_15(VAR_23, "->-"))) {
                        *VAR_8 = '\0';
                        VAR_8 += 3;
                        char *VAR_25 = FUNC_13(VAR_8, ']');
                        if (VAR_25) *VAR_25 = '\0';
                        sds VAR_26 = FUNC_12(VAR_23);
                        sds VAR_27 = FUNC_12(VAR_8);
                        VAR_18->migrating_count += 2;
                        VAR_18->migrating =
                            FUNC_16(VAR_18->migrating,
                                (VAR_18->migrating_count * sizeof(sds)));
                        VAR_18->migrating[VAR_18->migrating_count - 2] =
                            VAR_26;
                        VAR_18->migrating[VAR_18->migrating_count - 1] =
                            VAR_27;
                    } else if ((VAR_8 = FUNC_15(VAR_23, "-<-"))) {
                        *VAR_8 = '\0';
                        VAR_8 += 3;
                        char *VAR_28 = FUNC_13(VAR_8, ']');
                        if (VAR_28) *VAR_28 = '\0';
                        sds VAR_29 = FUNC_12(VAR_23);
                        sds VAR_30 = FUNC_12(VAR_8);
                        VAR_18->importing_count += 2;
                        VAR_18->importing = FUNC_16(VAR_18->importing,
                            (VAR_18->importing_count * sizeof(sds)));
                        VAR_18->importing[VAR_18->importing_count - 2] =
                            VAR_29;
                        VAR_18->importing[VAR_18->importing_count - 1] =
                            VAR_30;
                    }
                } else if ((VAR_24 = FUNC_13(VAR_23, '-')) != ((void*)0)) {
                    VAR_8 = VAR_24;
                    int VAR_31, VAR_32;
                    *VAR_8 = '\0';
                    VAR_31 = FUNC_1(VAR_23);
                    VAR_32 = FUNC_1(VAR_8 + 1);
                    while (VAR_31 <= VAR_32) {
                        int VAR_33 = VAR_31++;
                        VAR_18->slots[VAR_18->slots_count++] = VAR_33;
                    }
                } else if (VAR_8 > VAR_23) {
                    int VAR_34 = FUNC_1(VAR_23);
                    VAR_18->slots[VAR_18->slots_count++] = VAR_34;
                }
            }
        }
        if (VAR_18->slots_count == 0) {
            FUNC_7("WARNING: master node %s:%d has no slots, skipping...\n",
                   VAR_18->ip, VAR_18->port);
            continue;
        }
        if (!FUNC_0(VAR_18)) {
            VAR_3 = 0;
            goto cleanup;
        }
    }
cleanup:
    if (VAR_4) FUNC_11(VAR_4);
    if (!VAR_3) {
        if (VAR_1.cluster_nodes) FUNC_5();
    }
    if (VAR_5) FUNC_6(VAR_5);
    return VAR_3;
}

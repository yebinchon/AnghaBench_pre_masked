
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef char* sds ;
struct TYPE_12__ {void* port; int name; void* configEpoch; void* pong_received; void* ping_sent; struct TYPE_12__* slaveof; int flags; void* fail_time; void* cport; int ip; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_13__ {TYPE_1__* cluster; } ;
struct TYPE_11__ {scalar_t__ currentEpoch; TYPE_2__* myself; TYPE_2__** importing_slots_from; TYPE_2__** migrating_slots_to; void* lastVoteEpoch; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (char*,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,int,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,struct stat*) ;
 int FUNC_13 (int ,char*,scalar_t__) ;
 void* FUNC_14 () ;
 TYPE_2__* VAR_16 ;
 int FUNC_15 (char**,int) ;
 char** FUNC_16 (char*,int*) ;
 TYPE_3__ VAR_17 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 char* FUNC_21 (char*,char) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (char*) ;
 char* FUNC_24 (char*,char) ;
 void* FUNC_25 (char*,int *,int) ;
 int FUNC_26 (char*) ;
 char* FUNC_27 (int) ;

int FUNC_28(char *VAR_18) {
    FILE *VAR_19 = FUNC_11(VAR_18,"r");
    struct stat VAR_20;
    char *VAR_21;
    int VAR_22, VAR_23;

    if (VAR_19 == ((void*)0)) {
        if (VAR_15 == VAR_12) {
            return VAR_10;
        } else {
            FUNC_18(VAR_14,
                "Loading the cluster node config from %s: %s",
                VAR_18, FUNC_22(VAR_15));
            FUNC_7(1);
        }
    }



    if (FUNC_12(FUNC_10(VAR_19),&VAR_20) != -1 && VAR_20.st_size == 0) {
        FUNC_8(VAR_19);
        return VAR_10;
    }
    VAR_22 = 1024+VAR_9*128;
    VAR_21 = FUNC_27(VAR_22);
    while(FUNC_9(VAR_21,VAR_22,VAR_19) != ((void*)0)) {
        int VAR_24;
        sds *VAR_25;
        clusterNode *VAR_26, *VAR_27;
        char *VAR_28, *VAR_29;




        if (VAR_21[0] == '\n' || VAR_21[0] == '\0') continue;


        VAR_25 = FUNC_16(VAR_21,&VAR_24);
        if (VAR_25 == ((void*)0)) goto fmterr;



        if (FUNC_20(VAR_25[0],"vars") == 0) {
            if (!(VAR_24 % 2)) goto fmterr;
            for (VAR_23 = 1; VAR_23 < VAR_24; VAR_23 += 2) {
                if (FUNC_20(VAR_25[VAR_23],"currentEpoch") == 0) {
                    VAR_17.cluster->currentEpoch =
                            FUNC_25(VAR_25[VAR_23+1],((void*)0),10);
                } else if (FUNC_20(VAR_25[VAR_23],"lastVoteEpoch") == 0) {
                    VAR_17.cluster->lastVoteEpoch =
                            FUNC_25(VAR_25[VAR_23+1],((void*)0),10);
                } else {
                    FUNC_18(VAR_14,
                        "Skipping unknown cluster config variable '%s'",
                        VAR_25[VAR_23]);
                }
            }
            FUNC_15(VAR_25,VAR_24);
            continue;
        }


        if (VAR_24 < 8) goto fmterr;


        VAR_26 = FUNC_4(VAR_25[0]);
        if (!VAR_26) {
            VAR_26 = FUNC_6(VAR_25[0],0);
            FUNC_1(VAR_26);
        }

        if ((VAR_28 = FUNC_24(VAR_25[1],':')) == ((void*)0)) goto fmterr;
        *VAR_28 = '\0';
        FUNC_13(VAR_26->ip,VAR_25[1],FUNC_23(VAR_25[1])+1);
        char *VAR_30 = VAR_28+1;
        char *VAR_31 = FUNC_21(VAR_30,'@');
        if (VAR_31) {
            *VAR_31 = '\0';
            VAR_31++;
        }
        VAR_26->port = FUNC_0(VAR_30);



        VAR_26->cport = VAR_31 ? FUNC_0(VAR_31) : VAR_26->port + VAR_8;


        VAR_28 = VAR_29 = VAR_25[2];
        while(VAR_28) {
            VAR_28 = FUNC_21(VAR_29,',');
            if (VAR_28) *VAR_28 = '\0';
            if (!FUNC_20(VAR_29,"myself")) {
                FUNC_17(VAR_17.cluster->myself == ((void*)0));
                VAR_16 = VAR_17.cluster->myself = VAR_26;
                VAR_26->flags |= VAR_3;
            } else if (!FUNC_20(VAR_29,"master")) {
                VAR_26->flags |= VAR_2;
            } else if (!FUNC_20(VAR_29,"slave")) {
                VAR_26->flags |= VAR_7;
            } else if (!FUNC_20(VAR_29,"fail?")) {
                VAR_26->flags |= VAR_6;
            } else if (!FUNC_20(VAR_29,"fail")) {
                VAR_26->flags |= VAR_0;
                VAR_26->fail_time = FUNC_14();
            } else if (!FUNC_20(VAR_29,"handshake")) {
                VAR_26->flags |= VAR_1;
            } else if (!FUNC_20(VAR_29,"noaddr")) {
                VAR_26->flags |= VAR_4;
            } else if (!FUNC_20(VAR_29,"nofailover")) {
                VAR_26->flags |= VAR_5;
            } else if (!FUNC_20(VAR_29,"noflags")) {

            } else {
                FUNC_19("Unknown flag in redis cluster config file");
            }
            if (VAR_28) VAR_29 = VAR_28+1;
        }



        if (VAR_25[3][0] != '-') {
            VAR_27 = FUNC_4(VAR_25[3]);
            if (!VAR_27) {
                VAR_27 = FUNC_6(VAR_25[3],0);
                FUNC_1(VAR_27);
            }
            VAR_26->slaveof = VAR_27;
            FUNC_5(VAR_27,VAR_26);
        }


        if (FUNC_0(VAR_25[4])) VAR_26->ping_sent = FUNC_14();
        if (FUNC_0(VAR_25[5])) VAR_26->pong_received = FUNC_14();


        VAR_26->configEpoch = FUNC_25(VAR_25[6],((void*)0),10);


        for (VAR_23 = 8; VAR_23 < VAR_24; VAR_23++) {
            int VAR_32, VAR_33;

            if (VAR_25[VAR_23][0] == '[') {

                int VAR_34;
                char VAR_35;
                clusterNode *VAR_36;

                VAR_28 = FUNC_21(VAR_25[VAR_23],'-');
                FUNC_17(VAR_28 != ((void*)0));
                *VAR_28 = '\0';
                VAR_35 = VAR_28[1];
                VAR_34 = FUNC_0(VAR_25[VAR_23]+1);
                if (VAR_34 < 0 || VAR_34 >= VAR_9) goto fmterr;
                VAR_28 += 3;
                VAR_36 = FUNC_4(VAR_28);
                if (!VAR_36) {
                    VAR_36 = FUNC_6(VAR_28,0);
                    FUNC_1(VAR_36);
                }
                if (VAR_35 == '>') {
                    VAR_17.cluster->migrating_slots_to[VAR_34] = VAR_36;
                } else {
                    VAR_17.cluster->importing_slots_from[VAR_34] = VAR_36;
                }
                continue;
            } else if ((VAR_28 = FUNC_21(VAR_25[VAR_23],'-')) != ((void*)0)) {
                *VAR_28 = '\0';
                VAR_32 = FUNC_0(VAR_25[VAR_23]);
                VAR_33 = FUNC_0(VAR_28+1);
            } else {
                VAR_32 = VAR_33 = FUNC_0(VAR_25[VAR_23]);
            }
            if (VAR_32 < 0 || VAR_32 >= VAR_9) goto fmterr;
            if (VAR_33 < 0 || VAR_33 >= VAR_9) goto fmterr;
            while(VAR_32 <= VAR_33) FUNC_2(VAR_26, VAR_32++);
        }

        FUNC_15(VAR_25,VAR_24);
    }

    if (VAR_17.cluster->myself == ((void*)0)) goto fmterr;

    FUNC_26(VAR_21);
    FUNC_8(VAR_19);

    FUNC_18(VAR_13,"Node configuration loaded, I'm %.40s", VAR_16->name);




    if (FUNC_3() > VAR_17.cluster->currentEpoch) {
        VAR_17.cluster->currentEpoch = FUNC_3();
    }
    return VAR_11;

fmterr:
    FUNC_18(VAR_14,
        "Unrecoverable error: corrupted cluster config file.");
    FUNC_26(VAR_21);
    if (VAR_19) FUNC_8(VAR_19);
    FUNC_7(1);
}

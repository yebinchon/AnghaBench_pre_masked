
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* str; } ;
typedef TYPE_1__ redisReply ;
typedef int list ;
typedef int clusterManagerNode ;
struct TYPE_9__ {int handshaking; scalar_t__ connected; void* node_addr; void* node_name; } ;
typedef TYPE_2__ clusterManagerLink ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int * FUNC_4 () ;
 void* FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,char*) ;
 TYPE_2__* FUNC_8 (int) ;

__attribute__((used)) static list *FUNC_9(clusterManagerNode *VAR_0) {
    list *VAR_1 = ((void*)0);
    redisReply *VAR_2 = FUNC_0(VAR_0, "CLUSTER NODES");
    if (!FUNC_1(VAR_0, VAR_2, ((void*)0))) goto cleanup;
    VAR_1 = FUNC_4();
    char *VAR_3 = VAR_2->str, *VAR_4, *VAR_5;
    while ((VAR_4 = FUNC_7(VAR_3, "\n")) != ((void*)0)) {
        int VAR_6 = 0;
        *VAR_4 = '\0';
        VAR_5 = VAR_3;
        VAR_3 = VAR_4 + 1;
        char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
        while ((VAR_4 = FUNC_6(VAR_5, ' ')) != ((void*)0)) {
            *VAR_4 = '\0';
            char *VAR_11 = VAR_5;
            VAR_5 = VAR_4 + 1;
            if (VAR_6 == 0) VAR_7 = VAR_11;
            else if (VAR_6 == 1) VAR_8 = VAR_11;
            else if (VAR_6 == 2) VAR_9 = VAR_11;
            else if (VAR_6 == 7) VAR_10 = VAR_11;
            else if (VAR_6 == 8) break;
            VAR_6++;
        }
        if (VAR_6 == 7) VAR_10 = VAR_5;
        if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) ||
            VAR_10 == ((void*)0)) continue;
        if (FUNC_7(VAR_9, "myself") != ((void*)0)) continue;
        int VAR_12 = ((FUNC_7(VAR_9, "disconnected") != ((void*)0)) ||
                            (FUNC_7(VAR_10, "disconnected")));
        int VAR_13 = (FUNC_7(VAR_9, "handshake") != ((void*)0));
        if (VAR_12 || VAR_13) {
            clusterManagerLink *VAR_14 = FUNC_8(sizeof(*VAR_14));
            VAR_14->node_name = FUNC_5(VAR_7);
            VAR_14->node_addr = FUNC_5(VAR_8);
            VAR_14->connected = 0;
            VAR_14->handshaking = VAR_13;
            FUNC_3(VAR_1, VAR_14);
        }
    }
cleanup:
    if (VAR_2 != ((void*)0)) FUNC_2(VAR_2);
    return VAR_1;
}

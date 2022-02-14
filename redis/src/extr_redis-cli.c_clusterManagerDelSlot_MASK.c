
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ redisReply ;
typedef int clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,char**) ;
 int * FUNC_3 (int *,int,char**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(clusterManagerNode *VAR_1, int VAR_2,
                                 int VAR_3)
{
    redisReply *VAR_4 = FUNC_0(VAR_1,
        "CLUSTER DELSLOTS %d", VAR_2);
    char *VAR_5 = ((void*)0);
    int VAR_6 = FUNC_2(VAR_1, VAR_4, &VAR_5);
    if (!VAR_6 && VAR_4 && VAR_4->type == VAR_0 &&
        VAR_3)
    {
        char *VAR_7 = ((void*)0);
        clusterManagerNode *VAR_8 =
            FUNC_3(VAR_1, VAR_2, &VAR_7);
        if (!VAR_8) {
            if (VAR_7 == ((void*)0)) VAR_6 = 1;
            else {
                FUNC_1(VAR_1, VAR_7);
                FUNC_5(VAR_7);
            }
        }
    }
    if (!VAR_6 && VAR_5 != ((void*)0)) {
        FUNC_1(VAR_1, VAR_5);
        FUNC_5(VAR_5);
    }
    if (VAR_4) FUNC_4(VAR_4);
    return VAR_6;
}

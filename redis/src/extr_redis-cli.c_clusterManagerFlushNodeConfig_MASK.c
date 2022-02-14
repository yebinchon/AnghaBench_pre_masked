
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int len; int str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_9__ {scalar_t__ dirty; int * replicate; } ;
typedef TYPE_2__ clusterManagerNode ;


 TYPE_1__* FUNC_0 (TYPE_2__*,char*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,char**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(clusterManagerNode *VAR_1, char **VAR_2) {
    if (!VAR_1->dirty) return 0;
    redisReply *VAR_3 = ((void*)0);
    int VAR_4 = 0, VAR_5 = 1;
    if (VAR_2 != ((void*)0)) *VAR_2 = ((void*)0);
    if (VAR_1->replicate != ((void*)0)) {
        VAR_3 = FUNC_0(VAR_1, "CLUSTER REPLICATE %s",
                                        VAR_1->replicate);
        if (VAR_3 == ((void*)0) || (VAR_4 = (VAR_3->type == VAR_0))) {
            if (VAR_4 && VAR_2 != ((void*)0)) {
                *VAR_2 = FUNC_4((VAR_3->len + 1) * sizeof(char));
                FUNC_3(*VAR_2, VAR_3->str);
            }
            VAR_5 = 0;




            goto cleanup;
        }
    } else {
        int VAR_6 = FUNC_1(VAR_1, VAR_2);
        if (!VAR_6 || *VAR_2 != ((void*)0)) VAR_5 = 0;
    }
    VAR_1->dirty = 0;
cleanup:
    if (VAR_3 != ((void*)0)) FUNC_2(VAR_3);
    return VAR_5;
}

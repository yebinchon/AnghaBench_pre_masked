
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long* list; int length; } ;
typedef TYPE_1__ fsl_t ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,long long) ;
 int FUNC_4 (int *,int *,int ,int ,TYPE_1__**,int ) ;

int FUNC_5(RedisModuleCtx *VAR_3, RedisModuleString **VAR_4, int VAR_5) {
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    RedisModuleString *VAR_6 = FUNC_2(VAR_3);
    long long VAR_7 = (long long)FUNC_1(VAR_3);

    fsl_t *VAR_8;
    if (!FUNC_4(VAR_3, VAR_6, VAR_2, 0, &VAR_8, 0))
        return VAR_0;

    if (!VAR_8 || VAR_8->list[VAR_8->length-1] <= VAR_7)
        return VAR_0;

    FUNC_3(VAR_3, VAR_8->list[--VAR_8->length]);
    return VAR_1;
}

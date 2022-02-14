
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long* list; int length; } ;
typedef TYPE_1__ fsl_t ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,long long,int **,int,void*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,long long) ;
 scalar_t__ FUNC_3 (int *,long long*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int ,int ,TYPE_1__**,int) ;

int FUNC_6(RedisModuleCtx *VAR_5, RedisModuleString **VAR_6, int VAR_7) {
    if (VAR_7 != 4)
        return FUNC_4(VAR_5);

    long long VAR_8;
    if (FUNC_3(VAR_6[2],&VAR_8) != VAR_0)
        return FUNC_1(VAR_5,"ERR invalid integer");

    long long VAR_9;
    if (FUNC_3(VAR_6[3],&VAR_9) != VAR_0 || VAR_9 < 0)
        return FUNC_1(VAR_5,"ERR invalid timeout");

    fsl_t *VAR_10;
    if (!FUNC_5(VAR_5, VAR_6[1], VAR_1, 0, &VAR_10, 1))
        return VAR_0;

    if (!VAR_10 || VAR_10->list[VAR_10->length-1] <= VAR_8) {

        FUNC_0(VAR_5, VAR_3, VAR_4,
                                      VAR_2, VAR_9, &VAR_6[1], 1, (void*)VAR_8);
    } else {
        FUNC_2(VAR_5, VAR_10->list[--VAR_10->length]);
    }

    return VAR_0;
}

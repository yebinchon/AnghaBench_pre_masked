
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * list; } ;
typedef TYPE_1__ fsl_t ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *,long long,int **,int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,long long*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int *,int ,int ,TYPE_1__**,int) ;

int FUNC_7(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6) {
    if (VAR_6 != 3)
        return FUNC_5(VAR_4);

    long long VAR_7;
    if (FUNC_4(VAR_5[2],&VAR_7) != VAR_0 || VAR_7 < 0)
        return FUNC_2(VAR_4,"ERR invalid timeout");

    fsl_t *VAR_8;
    if (!FUNC_6(VAR_4, VAR_5[1], VAR_1, 0, &VAR_8, 1))
        return VAR_0;

    if (!VAR_8 || VAR_8->length < 2) {

        FUNC_0(VAR_4, VAR_2, VAR_3,
                                      ((void*)0), VAR_7, &VAR_5[1], 1, ((void*)0));
    } else {
        FUNC_1(VAR_4, 2);
        FUNC_3(VAR_4, VAR_8->list[--VAR_8->length]);
        FUNC_3(VAR_4, VAR_8->list[--VAR_8->length]);
    }

    return VAR_0;
}

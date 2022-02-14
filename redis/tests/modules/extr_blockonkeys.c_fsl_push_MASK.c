
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; long long* list; } ;
typedef TYPE_1__ fsl_t ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,long long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int,TYPE_1__**,int) ;

int FUNC_6(RedisModuleCtx *VAR_3, RedisModuleString **VAR_4, int VAR_5) {
    if (VAR_5 != 3)
        return FUNC_4(VAR_3);

    long long VAR_6;
    if (FUNC_3(VAR_4[2],&VAR_6) != VAR_1)
        return FUNC_0(VAR_3,"ERR invalid integer");

    fsl_t *VAR_7;
    if (!FUNC_5(VAR_3, VAR_4[1], VAR_2, 1, &VAR_7, 1))
        return VAR_1;

    if (VAR_7->length == VAR_0)
        return FUNC_0(VAR_3,"ERR list is full");

    if (VAR_7->length != 0 && VAR_7->list[VAR_7->length-1] >= VAR_6)
        return FUNC_0(VAR_3,"ERR new element has to be greater than the head element");

    VAR_7->list[VAR_7->length++] = VAR_6;

    if (VAR_7->length >= 2)
        FUNC_2(VAR_3, VAR_4[1]);

    return FUNC_1(VAR_3, "OK");
}

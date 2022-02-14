
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long length; int * list; } ;
typedef TYPE_1__ fsl_t ;
typedef int RedisModuleIO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,long long) ;

void FUNC_2(RedisModuleIO *VAR_0, void *VAR_1) {
    fsl_t *VAR_2 = VAR_1;
    FUNC_1(VAR_0,VAR_2->length);
    for (long long VAR_3 = 0; VAR_3 < VAR_2->length; VAR_3++)
        FUNC_0(VAR_0, VAR_2->list[VAR_3]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long length; int * list; } ;
typedef TYPE_1__ fsl_t ;
typedef int RedisModuleString ;
typedef int RedisModuleIO ;


 int FUNC_0 (int *,char*,char*,int *,int ) ;

void FUNC_1(RedisModuleIO *VAR_0, RedisModuleString *VAR_1, void *VAR_2) {
    fsl_t *VAR_3 = VAR_2;
    for (long long VAR_4 = 0; VAR_4 < VAR_3->length; VAR_4++)
        FUNC_0(VAR_0, "FSL.PUSH","sl", VAR_1, VAR_3->list[VAR_4]);
}

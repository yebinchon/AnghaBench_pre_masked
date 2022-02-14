
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;
typedef int RedisModuleDict ;


 void* FUNC_0 (int *,int ,int ,int*) ;
 int FUNC_1 (int ) ;

void *FUNC_2(RedisModuleDict *VAR_0, RedisModuleString *VAR_1, int *VAR_2) {
    return FUNC_0(VAR_0,VAR_1->ptr,FUNC_1(VAR_1->ptr),VAR_2);
}

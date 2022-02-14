
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rax; } ;
typedef TYPE_1__ RedisModuleDict ;


 void* FUNC_0 (int ,void*,size_t) ;
 void* VAR_0 ;

void *FUNC_1(RedisModuleDict *VAR_1, void *VAR_2, size_t VAR_3, int *VAR_4) {
    void *VAR_5 = FUNC_0(VAR_1->rax,VAR_2,VAR_3);
    if (VAR_4) *VAR_4 = (VAR_5 == VAR_0);
    return (VAR_5 == VAR_0) ? ((void*)0) : VAR_5;
}

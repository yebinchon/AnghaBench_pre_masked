
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rax; } ;
struct TYPE_6__ {int ri; TYPE_2__* dict; } ;
typedef TYPE_1__ RedisModuleDictIter ;
typedef TYPE_2__ RedisModuleDict ;


 int FUNC_0 (int *,char const*,void*,size_t) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int) ;

RedisModuleDictIter *FUNC_3(RedisModuleDict *VAR_0, const char *VAR_1, void *VAR_2, size_t VAR_3) {
    RedisModuleDictIter *VAR_4 = FUNC_2(sizeof(*VAR_4));
    VAR_4->dict = VAR_0;
    FUNC_1(&VAR_4->ri,VAR_0->rax);
    FUNC_0(&VAR_4->ri,VAR_1,VAR_2,VAR_3);
    return VAR_4;
}

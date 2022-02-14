
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ri; } ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ RedisModuleString ;
typedef TYPE_2__ RedisModuleDictIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(RedisModuleDictIter *VAR_2, const char *VAR_3, RedisModuleString *VAR_4) {
    if (FUNC_1(&VAR_2->ri)) return VAR_0;
    int VAR_5 = FUNC_0(&VAR_2->ri,VAR_3,VAR_4->ptr,FUNC_2(VAR_4->ptr));
    return VAR_5 ? VAR_1 : VAR_0;
}

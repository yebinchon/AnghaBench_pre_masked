
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ri; } ;
typedef TYPE_1__ RedisModuleDictIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,void*,size_t) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(RedisModuleDictIter *VAR_2, const char *VAR_3, void *VAR_4, size_t VAR_5) {
    if (FUNC_1(&VAR_2->ri)) return VAR_0;
    int VAR_6 = FUNC_0(&VAR_2->ri,VAR_3,VAR_4,VAR_5);
    return VAR_6 ? VAR_1 : VAR_0;
}

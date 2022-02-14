
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t key_len; void* key; void* data; } ;
struct TYPE_4__ {TYPE_2__ ri; } ;
typedef TYPE_1__ RedisModuleDictIter ;


 int FUNC_0 (TYPE_2__*) ;

void *FUNC_1(RedisModuleDictIter *VAR_0, size_t *VAR_1, void **VAR_2) {
    if (!FUNC_0(&VAR_0->ri)) return ((void*)0);
    if (VAR_1) *VAR_1 = VAR_0->ri.key_len;
    if (VAR_2) *VAR_2 = VAR_0->ri.data;
    return VAR_0->ri.key;
}

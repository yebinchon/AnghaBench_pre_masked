
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mark; } ;
typedef TYPE_1__ heap_pool_t ;


 scalar_t__ VAR_0 ;

heap_pool_t *FUNC_0(heap_pool_t *VAR_1)
{
    if(VAR_1->mark)
        return ((void*)0);

    VAR_1->mark = VAR_0;
    return VAR_1;
}

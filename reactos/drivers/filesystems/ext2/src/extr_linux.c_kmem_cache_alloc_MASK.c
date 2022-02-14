
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int acount; int count; int la; } ;
typedef TYPE_1__ kmem_cache_t ;
typedef void* PVOID ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void* FUNC_2(kmem_cache_t *VAR_0, int VAR_1)
{
    PVOID VAR_2 = ((void*)0);
    VAR_2 = FUNC_0(&(VAR_0->la));
    if (VAR_2) {
        FUNC_1(&VAR_0->count);
        FUNC_1(&VAR_0->acount);
    }
    return VAR_2;
}

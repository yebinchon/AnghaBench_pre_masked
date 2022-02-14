
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ ngx_slab_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (TYPE_1__*,size_t) ;

void *
FUNC_3(ngx_slab_pool_t *VAR_0, size_t VAR_1)
{
    void *VAR_2;

    FUNC_0(&VAR_0->mutex);

    VAR_2 = FUNC_2(VAR_0, VAR_1);

    FUNC_1(&VAR_0->mutex);

    return VAR_2;
}

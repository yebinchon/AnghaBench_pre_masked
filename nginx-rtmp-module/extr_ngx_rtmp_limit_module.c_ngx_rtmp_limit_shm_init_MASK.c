
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ngx_slab_pool_t ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__* data; TYPE_1__ shm; } ;
typedef TYPE_2__ ngx_shm_zone_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_shm_zone_t *VAR_2, void *VAR_3)
{
    ngx_slab_pool_t *VAR_4;
    uint32_t *VAR_5;

    if (VAR_3) {
        VAR_2->data = VAR_3;
        return VAR_1;
    }

    VAR_4 = (ngx_slab_pool_t *) VAR_2->shm.addr;

    VAR_5 = FUNC_0(VAR_4, 4);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = 0;

    VAR_2->data = VAR_5;

    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int min_shift; int lock; int mutex; struct TYPE_14__* addr; struct TYPE_14__* end; } ;
typedef TYPE_1__ ngx_slab_pool_t ;
struct TYPE_18__ {scalar_t__ len; } ;
struct TYPE_19__ {int size; TYPE_5__ name; TYPE_1__* addr; scalar_t__ exists; } ;
struct TYPE_15__ {TYPE_7__ shm; } ;
typedef TYPE_2__ ngx_shm_zone_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {scalar_t__ len; } ;
struct TYPE_16__ {TYPE_4__ lock_file; int pool; int log; } ;
typedef TYPE_3__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_5__*,TYPE_1__*,TYPE_1__*) ;
 int * FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*,TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_cycle_t *VAR_3, ngx_shm_zone_t *VAR_4)
{
    u_char *VAR_5;
    ngx_slab_pool_t *VAR_6;

    VAR_6 = (ngx_slab_pool_t *) VAR_4->shm.addr;

    if (VAR_4->shm.exists) {

        if (VAR_6 == VAR_6->addr) {
            return VAR_2;
        }
        FUNC_0(VAR_1, VAR_3->log, 0,
                      "shared zone \"%V\" has no equal addresses: %p vs %p",
                      &VAR_4->shm.name, VAR_6->addr, VAR_6);
        return VAR_0;
    }

    VAR_6->end = VAR_4->shm.addr + VAR_4->shm.size;
    VAR_6->min_shift = 3;
    VAR_6->addr = VAR_4->shm.addr;







    VAR_5 = FUNC_1(VAR_3->pool,
                       VAR_3->lock_file.len + VAR_4->shm.name.len + 1);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    (void) FUNC_5(VAR_5, "%V%V%Z", &VAR_3->lock_file, &VAR_4->shm.name);



    if (FUNC_3(&VAR_6->mutex, &VAR_6->lock, VAR_5) != VAR_2) {
        return VAR_0;
    }

    FUNC_4(VAR_6);

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_9__ {int mutex; } ;
typedef TYPE_3__ ngx_slab_pool_t ;
struct TYPE_8__ {int name; scalar_t__ addr; } ;
struct TYPE_10__ {TYPE_2__ shm; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
typedef int ngx_pid_t ;
struct TYPE_11__ {size_t nelts; TYPE_4__* elts; struct TYPE_11__* next; } ;
typedef TYPE_5__ ngx_list_part_t ;
struct TYPE_7__ {int part; } ;
struct TYPE_12__ {int log; TYPE_1__ shared_memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(ngx_pid_t VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_shm_zone_t *VAR_6;
    ngx_list_part_t *VAR_7;
    ngx_slab_pool_t *VAR_8;






    if (VAR_2) {
        (void) FUNC_1(&VAR_1, VAR_4);
    }






    VAR_7 = (ngx_list_part_t *) &VAR_3->shared_memory.part;
    VAR_6 = VAR_7->elts;

    for (VAR_5 = 0; ; VAR_5++) {

        if (VAR_5 >= VAR_7->nelts) {
            if (VAR_7->next == ((void*)0)) {
                break;
            }
            VAR_7 = VAR_7->next;
            VAR_6 = VAR_7->elts;
            VAR_5 = 0;
        }

        VAR_8 = (ngx_slab_pool_t *) VAR_6[VAR_5].shm.addr;

        if (FUNC_1(&VAR_8->mutex, VAR_4)) {
            FUNC_0(VAR_0, VAR_3->log, 0,
                          "shared memory zone \"%V\" was locked by %P",
                          &VAR_6[VAR_5].shm.name, VAR_4);
        }
    }
}

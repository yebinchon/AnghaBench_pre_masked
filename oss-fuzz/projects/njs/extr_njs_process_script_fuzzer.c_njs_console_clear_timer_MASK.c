
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int mem_pool; } ;
typedef TYPE_2__ njs_vm_t ;
typedef int njs_vm_event_t ;
struct TYPE_13__ {int length; int * start; } ;
struct TYPE_15__ {int pool; int * proto; TYPE_1__ key; int key_hash; } ;
typedef TYPE_3__ njs_lvlhsh_query_t ;
typedef scalar_t__ njs_int_t ;
typedef TYPE_4__* njs_host_event_t ;
typedef TYPE_5__* njs_external_ptr_t ;
struct TYPE_18__ {int * prev; } ;
struct TYPE_16__ {TYPE_8__ link; int vm_event; } ;
typedef TYPE_4__ njs_ev_t ;
struct TYPE_17__ {int events; TYPE_2__* vm; } ;
typedef TYPE_5__ njs_console_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(njs_external_ptr_t VAR_2, njs_host_event_t VAR_3)
{
    njs_vm_t *VAR_4;
    njs_ev_t *VAR_5;
    njs_int_t VAR_6;
    njs_console_t *VAR_7;
    njs_lvlhsh_query_t VAR_8;

    VAR_5 = VAR_3;
    VAR_7 = VAR_2;
    VAR_4 = VAR_7->vm;

    VAR_8.key.start = (u_char *) &VAR_5->vm_event;
    VAR_8.key.length = sizeof(njs_vm_event_t);
    VAR_8.key_hash = FUNC_0(VAR_8.key.start, VAR_8.key.length);

    VAR_8.proto = &VAR_1;
    VAR_8.pool = VAR_4->mem_pool;

    if (VAR_5->link.prev != ((void*)0)) {
        FUNC_3(&VAR_5->link);
    }

    VAR_6 = FUNC_1(&VAR_7->events, &VAR_8);
    if (VAR_6 != VAR_0) {
        FUNC_4("njs_lvlhsh_delete() failed\n");
    }

    FUNC_2(VAR_4->mem_pool, VAR_5);
}

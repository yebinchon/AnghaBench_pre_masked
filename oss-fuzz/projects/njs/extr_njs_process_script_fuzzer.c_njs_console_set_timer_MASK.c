
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_char ;
struct TYPE_11__ {int mem_pool; } ;
typedef TYPE_2__ njs_vm_t ;
typedef int njs_vm_event_t ;
struct TYPE_10__ {int length; int * start; } ;
struct TYPE_12__ {int pool; int * proto; TYPE_5__* value; scalar_t__ replace; TYPE_1__ key; int key_hash; } ;
typedef TYPE_3__ njs_lvlhsh_query_t ;
typedef scalar_t__ njs_int_t ;
typedef int * njs_host_event_t ;
typedef TYPE_4__* njs_external_ptr_t ;
struct TYPE_14__ {int link; int vm_event; } ;
typedef TYPE_5__ njs_ev_t ;
struct TYPE_13__ {int posted_events; int events; TYPE_2__* vm; } ;
typedef TYPE_4__ njs_console_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static njs_host_event_t
FUNC_6(njs_external_ptr_t VAR_2, uint64_t VAR_3,
    njs_vm_event_t VAR_4)
{
    njs_ev_t *VAR_5;
    njs_vm_t *VAR_6;
    njs_int_t VAR_7;
    njs_console_t *VAR_8;
    njs_lvlhsh_query_t VAR_9;

    if (VAR_3 != 0) {
        FUNC_5("njs_console_set_timer(): async timers unsupported\n");
        return ((void*)0);
    }

    VAR_8 = VAR_2;
    VAR_6 = VAR_8->vm;

    VAR_5 = FUNC_2(VAR_6->mem_pool, sizeof(njs_ev_t));
    if (FUNC_4(VAR_5 == ((void*)0))) {
        return ((void*)0);
    }

    VAR_5->vm_event = VAR_4;

    VAR_9.key.start = (u_char *) &VAR_5->vm_event;
    VAR_9.key.length = sizeof(njs_vm_event_t);
    VAR_9.key_hash = FUNC_0(VAR_9.key.start, VAR_9.key.length);

    VAR_9.replace = 0;
    VAR_9.value = VAR_5;
    VAR_9.proto = &VAR_1;
    VAR_9.pool = VAR_6->mem_pool;

    VAR_7 = FUNC_1(&VAR_8->events, &VAR_9);
    if (FUNC_4(VAR_7 != VAR_0)) {
        return ((void*)0);
    }

    FUNC_3(&VAR_8->posted_events, &VAR_5->link);

    return (njs_host_event_t) VAR_5;
}

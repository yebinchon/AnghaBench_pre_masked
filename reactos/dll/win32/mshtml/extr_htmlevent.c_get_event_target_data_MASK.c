
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int event_target_t ;
struct TYPE_9__ {TYPE_2__* data; } ;
struct TYPE_8__ {int * ptr; TYPE_4__ dispex; } ;
struct TYPE_7__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {int ** (* get_event_target_ptr ) (TYPE_4__*) ;} ;
typedef TYPE_3__ EventTarget ;
typedef int BOOL ;


 int * FUNC_0 (int) ;
 int ** FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static inline event_target_t *FUNC_2(EventTarget *VAR_0, BOOL VAR_1)
{
    event_target_t **VAR_2;

    VAR_2 = VAR_0->dispex.data->vtbl && VAR_0->dispex.data->vtbl->get_event_target_ptr
        ? VAR_0->dispex.data->vtbl->get_event_target_ptr(&VAR_0->dispex)
        : &VAR_0->ptr;
    if(*VAR_2 || !VAR_1)
        return *VAR_2;

    return *VAR_2 = FUNC_0(sizeof(event_target_t));
}

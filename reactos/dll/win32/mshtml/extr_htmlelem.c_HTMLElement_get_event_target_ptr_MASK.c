
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int event_target_t ;
struct TYPE_7__ {int * ptr; } ;
struct TYPE_9__ {TYPE_2__ event_target; TYPE_1__* vtbl; } ;
struct TYPE_8__ {TYPE_4__ node; } ;
struct TYPE_6__ {int ** (* get_event_target_ptr ) (TYPE_4__*) ;} ;
typedef TYPE_3__ HTMLElement ;
typedef int DispatchEx ;


 TYPE_3__* FUNC_0 (int *) ;
 int ** FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static event_target_t **FUNC_2(DispatchEx *VAR_0)
{
    HTMLElement *VAR_1 = FUNC_0(VAR_0);
    return VAR_1->node.vtbl->get_event_target_ptr
        ? VAR_1->node.vtbl->get_event_target_ptr(&VAR_1->node)
        : &VAR_1->node.event_target.ptr;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int event_target_t ;
struct TYPE_5__ {TYPE_1__* doc; } ;
struct TYPE_4__ {int * body_event_target; } ;
typedef TYPE_2__ HTMLInnerWindow ;
typedef int DispatchEx ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static event_target_t **FUNC_1(DispatchEx *VAR_0)
{
    HTMLInnerWindow *VAR_1 = FUNC_0(VAR_0);
    return &VAR_1->doc->body_event_target;
}

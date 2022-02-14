
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* data; } ;
struct TYPE_14__ {TYPE_5__* doc; } ;
struct TYPE_11__ {TYPE_7__ dispex; } ;
struct TYPE_12__ {TYPE_3__ event_target; } ;
struct TYPE_13__ {TYPE_4__ node; } ;
struct TYPE_10__ {TYPE_1__* vtbl; } ;
struct TYPE_9__ {int (* bind_event ) (TYPE_7__*,int) ;} ;
typedef TYPE_6__ HTMLInnerWindow ;
typedef int DispatchEx ;


 TYPE_6__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static void FUNC_2(DispatchEx *VAR_0, int VAR_1)
{
    HTMLInnerWindow *VAR_2 = FUNC_0(VAR_0);
    VAR_2->doc->node.event_target.dispex.data->vtbl->bind_event(&VAR_2->doc->node.event_target.dispex, VAR_1);
}

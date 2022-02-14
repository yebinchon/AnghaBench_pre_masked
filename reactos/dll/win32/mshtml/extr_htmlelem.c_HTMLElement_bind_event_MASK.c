
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* data; } ;
struct TYPE_15__ {TYPE_5__* doc; } ;
struct TYPE_16__ {TYPE_6__ node; } ;
struct TYPE_12__ {TYPE_8__ dispex; } ;
struct TYPE_13__ {TYPE_3__ event_target; } ;
struct TYPE_14__ {TYPE_4__ node; } ;
struct TYPE_11__ {TYPE_1__* vtbl; } ;
struct TYPE_10__ {int (* bind_event ) (TYPE_8__*,int) ;} ;
typedef TYPE_7__ HTMLElement ;
typedef int DispatchEx ;


 TYPE_7__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_8__*,int) ;

__attribute__((used)) static void FUNC_2(DispatchEx *VAR_0, int VAR_1)
{
    HTMLElement *VAR_2 = FUNC_0(VAR_0);
    VAR_2->node.doc->node.event_target.dispex.data->vtbl->bind_event(&VAR_2->node.doc->node.event_target.dispex, VAR_1);
}

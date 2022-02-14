
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ptr; } ;
struct TYPE_7__ {TYPE_2__ event_target; TYPE_1__* doc; scalar_t__ nsnode; } ;
struct TYPE_5__ {int basedoc; TYPE_3__ node; } ;
typedef TYPE_3__ HTMLDOMNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(HTMLDOMNode *VAR_0)
{
    if(VAR_0->nsnode)
        FUNC_1(VAR_0->nsnode);
    if(VAR_0->doc && &VAR_0->doc->node != VAR_0)
        FUNC_0(&VAR_0->doc->basedoc);
    if(VAR_0->event_target.ptr)
        FUNC_2(VAR_0->event_target.ptr);
}

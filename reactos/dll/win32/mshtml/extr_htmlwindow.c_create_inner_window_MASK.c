
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int IHTMLWindow2_iface; TYPE_3__* inner_window; int * outer_window; } ;
struct TYPE_6__ {int dispex; } ;
struct TYPE_8__ {int * mon; int task_magic; TYPE_2__ base; TYPE_1__ event_target; int script_queue; int bindings; int script_hosts; } ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int HTMLOuterWindow ;
typedef TYPE_3__ HTMLInnerWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLOuterWindow *VAR_3, IMoniker *VAR_4, HTMLInnerWindow **VAR_5)
{
    HTMLInnerWindow *VAR_6;

    VAR_6 = FUNC_1(sizeof(HTMLInnerWindow));
    if(!VAR_6)
        return VAR_0;

    FUNC_4(&VAR_6->script_hosts);
    FUNC_4(&VAR_6->bindings);
    FUNC_4(&VAR_6->script_queue);

    VAR_6->base.outer_window = VAR_3;
    VAR_6->base.inner_window = VAR_6;

    FUNC_3(&VAR_6->event_target.dispex, (IUnknown*)&VAR_6->base.IHTMLWindow2_iface, &VAR_1);

    VAR_6->task_magic = FUNC_2();

    if(VAR_4) {
        FUNC_0(VAR_4);
        VAR_6->mon = VAR_4;
    }

    *VAR_5 = VAR_6;
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int VARIANT ;
struct TYPE_8__ {TYPE_2__* content_window; } ;
struct TYPE_9__ {TYPE_3__ framebase; } ;
struct TYPE_6__ {int IDispatchEx_iface; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
typedef int LCID ;
typedef int IServiceProvider ;
typedef TYPE_4__ HTMLFrameElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;
typedef int DISPID ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ,int *,int *,int *,int *) ;
 TYPE_4__* FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDOMNode *VAR_1, DISPID VAR_2, LCID VAR_3,
        WORD VAR_4, DISPPARAMS *VAR_5, VARIANT *VAR_6, EXCEPINFO *VAR_7, IServiceProvider *VAR_8)
{
    HTMLFrameElement *VAR_9 = FUNC_2(VAR_1);

    if(!VAR_9->framebase.content_window) {
        FUNC_0("no content window to invoke on\n");
        return VAR_0;
    }

    return FUNC_1(&VAR_9->framebase.content_window->base.IDispatchEx_iface, VAR_2, VAR_3,
            VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}

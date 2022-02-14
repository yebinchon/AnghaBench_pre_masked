
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int IBindStatusCallback_iface; } ;
struct TYPE_13__ {TYPE_2__ bsc; } ;
typedef TYPE_3__ nsChannelBSC ;
struct TYPE_11__ {int IHTMLWindow2_iface; int * outer_window; } ;
struct TYPE_15__ {TYPE_1__ base; TYPE_3__* bscallback; } ;
struct TYPE_14__ {TYPE_5__* pending_window; int mon; } ;
typedef TYPE_4__ HTMLOuterWindow ;
typedef TYPE_5__ HTMLInnerWindow ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_5__**) ;

HRESULT FUNC_5(HTMLOuterWindow *VAR_1, nsChannelBSC *VAR_2)
{
    HTMLInnerWindow *VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_4(VAR_1, VAR_1->mon , &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    if(VAR_2) {
        FUNC_1(&VAR_2->bsc.IBindStatusCallback_iface);
        VAR_3->bscallback = VAR_2;
    }

    if(VAR_1->pending_window) {
        FUNC_3(VAR_1->pending_window);
        VAR_1->pending_window->base.outer_window = ((void*)0);
        FUNC_2(&VAR_1->pending_window->base.IHTMLWindow2_iface);
    }

    VAR_1->pending_window = VAR_3;
    return VAR_0;
}

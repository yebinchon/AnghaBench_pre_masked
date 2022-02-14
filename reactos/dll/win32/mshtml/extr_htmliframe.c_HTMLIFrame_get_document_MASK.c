
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


struct TYPE_14__ {TYPE_5__* content_window; } ;
struct TYPE_15__ {TYPE_6__ framebase; } ;
struct TYPE_12__ {TYPE_3__* inner_window; } ;
struct TYPE_13__ {TYPE_4__ base; } ;
struct TYPE_11__ {TYPE_2__* doc; } ;
struct TYPE_9__ {int IHTMLDocument2_iface; } ;
struct TYPE_10__ {TYPE_1__ basedoc; } ;
typedef int IDispatch ;
typedef TYPE_7__ HTMLIFrame ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_7__* FUNC_1 (int *) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDOMNode *VAR_1, IDispatch **VAR_2)
{
    HTMLIFrame *VAR_3 = FUNC_1(VAR_1);

    if(!VAR_3->framebase.content_window || !VAR_3->framebase.content_window->base.inner_window->doc) {
        *VAR_2 = ((void*)0);
        return VAR_0;
    }

    *VAR_2 = (IDispatch*)&VAR_3->framebase.content_window->base.inner_window->doc->basedoc.IHTMLDocument2_iface;
    FUNC_0(*VAR_2);
    return VAR_0;
}

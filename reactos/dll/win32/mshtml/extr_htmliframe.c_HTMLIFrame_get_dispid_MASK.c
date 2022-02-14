
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* content_window; } ;
struct TYPE_9__ {TYPE_3__ framebase; } ;
struct TYPE_6__ {int inner_window; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
typedef TYPE_4__ HTMLIFrame ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDOMNode *VAR_1, BSTR VAR_2,
        DWORD VAR_3, DISPID *VAR_4)
{
    HTMLIFrame *VAR_5 = FUNC_0(VAR_1);

    if(!VAR_5->framebase.content_window)
        return VAR_0;

    return FUNC_1(VAR_5->framebase.content_window->base.inner_window, VAR_2, VAR_3, VAR_4);
}

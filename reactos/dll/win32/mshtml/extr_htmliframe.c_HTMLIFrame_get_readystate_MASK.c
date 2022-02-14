
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IHTMLFrameBase2_iface; } ;
struct TYPE_5__ {TYPE_1__ framebase; } ;
typedef TYPE_2__ HTMLIFrame ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDOMNode *VAR_0, BSTR *VAR_1)
{
    HTMLIFrame *VAR_2 = FUNC_1(VAR_0);

    return FUNC_0(&VAR_2->framebase.IHTMLFrameBase2_iface, VAR_1);
}

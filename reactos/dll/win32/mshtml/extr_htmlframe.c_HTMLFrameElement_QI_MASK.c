
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int framebase; int IHTMLFrameElement3_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ HTMLFrameElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_1__*,void**) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_2, REFIID VAR_3, void **VAR_4)
{
    HTMLFrameElement *VAR_5 = FUNC_4(VAR_2);

    if(FUNC_2(&VAR_0, VAR_3)) {
        FUNC_3("(%p)->(IID_IHTMLFrameElement3 %p)\n", VAR_5, VAR_4);
        *VAR_4 = &VAR_5->IHTMLFrameElement3_iface;
    }else {
        return FUNC_0(&VAR_5->framebase, VAR_3, VAR_4);
    }

    FUNC_1((IUnknown*)*VAR_4);
    return VAR_1;
}

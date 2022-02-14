
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsIDOMCSSStyleDeclaration ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_1__ IHTMLStyle_iface; int dispex; int * elem; int * nsstyle; } ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLStyle ;
typedef int HTMLElement ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int **) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

HRESULT FUNC_8(HTMLElement *VAR_4, HTMLStyle **VAR_5)
{
    nsIDOMCSSStyleDeclaration *VAR_6;
    HTMLStyle *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_3(VAR_4, &VAR_6);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_7 = FUNC_4(sizeof(HTMLStyle));
    if(!VAR_7) {
        FUNC_7(VAR_6);
        return VAR_0;
    }

    VAR_7->IHTMLStyle_iface.lpVtbl = &VAR_1;
    VAR_7->ref = 1;
    VAR_7->nsstyle = VAR_6;
    VAR_7->elem = VAR_4;
    FUNC_1(VAR_7);
    FUNC_2(VAR_7);

    FUNC_6(VAR_6);

    FUNC_5(&VAR_7->dispex, (IUnknown*)&VAR_7->IHTMLStyle_iface, &VAR_2);

    *VAR_5 = VAR_7;
    return VAR_3;
}

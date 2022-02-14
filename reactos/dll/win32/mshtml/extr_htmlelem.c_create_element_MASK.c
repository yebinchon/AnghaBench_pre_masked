
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef int WCHAR ;
struct TYPE_6__ {TYPE_2__* doc; } ;
struct TYPE_7__ {TYPE_1__ node; int nsdoc; } ;
typedef int HTMLElement ;
typedef TYPE_2__ HTMLDocumentNode ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int **) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int const*,int **) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(HTMLDocumentNode *VAR_1, const WCHAR *VAR_2, HTMLElement **VAR_3)
{
    nsIDOMHTMLElement *VAR_4;
    HRESULT VAR_5;


    if(!VAR_1->nsdoc)
        VAR_1 = VAR_1->node.doc;

    VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_1(VAR_1, (nsIDOMNode*)VAR_4, VAR_0, VAR_3);
    FUNC_3(VAR_4);
    return VAR_5;
}

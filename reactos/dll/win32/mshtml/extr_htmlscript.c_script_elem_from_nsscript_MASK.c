
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLScriptElement ;
struct TYPE_4__ {int * vtbl; } ;
typedef int HTMLScriptElement ;
typedef int HTMLDocumentNode ;
typedef TYPE_1__ HTMLDOMNode ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ,TYPE_1__**) ;
 int * FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;

HRESULT FUNC_6(HTMLDocumentNode *VAR_5, nsIDOMHTMLScriptElement *VAR_6, HTMLScriptElement **VAR_7)
{
    nsIDOMNode *VAR_8;
    HTMLDOMNode *VAR_9;
    nsresult VAR_10;
    HRESULT VAR_11;

    VAR_10 = FUNC_4(VAR_6, &VAR_1, (void**)&VAR_8);
    FUNC_1(VAR_10 == VAR_2);

    VAR_11 = FUNC_2(VAR_5, VAR_8, VAR_4, &VAR_9);
    FUNC_5(VAR_8);
    if(FUNC_0(VAR_11))
        return VAR_11;

    FUNC_1(VAR_9->vtbl == &VAR_0);
    *VAR_7 = FUNC_3(VAR_9);
    return VAR_3;
}

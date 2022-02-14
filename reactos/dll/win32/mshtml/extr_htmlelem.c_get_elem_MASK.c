
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsIDOMNode ;
typedef int nsIDOMElement ;
typedef int HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int **) ;
 int * FUNC_2 (int *) ;

HRESULT FUNC_3(HTMLDocumentNode *VAR_2, nsIDOMElement *VAR_3, HTMLElement **VAR_4)
{
    HTMLDOMNode *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_2, (nsIDOMNode*)VAR_3, VAR_1, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    *VAR_4 = FUNC_2(VAR_5);
    return VAR_0;
}

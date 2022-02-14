
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IUnknown ;
typedef int IHTMLDOMNode ;
typedef int IHTMLDOMChildrenCollection ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static IHTMLDOMNode *FUNC_4(unsigned VAR_1, IHTMLDOMChildrenCollection *VAR_2, LONG VAR_3)
{
    IHTMLDOMNode *VAR_4 = ((void*)0);
    IDispatch *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);
    FUNC_3(VAR_6 == VAR_0, "item failed: %08x\n", VAR_6);

    VAR_4 = FUNC_2(VAR_1, (IUnknown*)VAR_5);
    FUNC_0(VAR_5);

    return VAR_4;
}

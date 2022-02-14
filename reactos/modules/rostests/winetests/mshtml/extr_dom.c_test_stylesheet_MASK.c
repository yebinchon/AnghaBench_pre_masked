
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IHTMLStyleSheetRulesCollection ;
typedef int IHTMLStyleSheet ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int *,int *,char*) ;
 int FUNC_9 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_10(IDispatch *VAR_7)
{
    IHTMLStyleSheetRulesCollection *VAR_8 = ((void*)0);
    IHTMLStyleSheet *VAR_9;
    HRESULT VAR_10;
    BSTR VAR_11;

    FUNC_8((IUnknown*)VAR_7, &VAR_0, &VAR_3, "[object]");

    VAR_10 = FUNC_0(VAR_7, &VAR_3, (void**)&VAR_9);
    FUNC_6(VAR_10 == VAR_5, "Could not get IHTMLStyleSheet: %08x\n", VAR_10);

    VAR_10 = FUNC_4(VAR_9, &VAR_8);
    FUNC_6(VAR_10 == VAR_5, "get_rules failed: %08x\n", VAR_10);
    FUNC_6(VAR_8 != ((void*)0), "col == NULL\n");

    FUNC_8((IUnknown*)VAR_8, &VAR_1, &VAR_4, "[object]");
    FUNC_1(VAR_8);

    VAR_11 = (void*)0xdeadbeef;
    VAR_10 = FUNC_3(VAR_9, &VAR_11);
    FUNC_6(VAR_10 == VAR_5, "get_href failed: %08x\n", VAR_10);
    FUNC_6(VAR_11 == ((void*)0), "got href != NULL\n");
    FUNC_5(VAR_11);

    FUNC_9(VAR_9, ".body {", VAR_2);
    FUNC_7(VAR_9, ".div { margin-right: 1px; }\n.body { margin-right: 2px; }", VAR_6);
    FUNC_9(VAR_9, ".div {", VAR_6);
    FUNC_7(VAR_9, "", VAR_2);
    FUNC_9(VAR_9, ((void*)0), VAR_2);
    FUNC_7(VAR_9, ".div { margin-right: 1px; }", VAR_2);
    FUNC_9(VAR_9, ".div {", VAR_2);

    FUNC_2(VAR_9);
}

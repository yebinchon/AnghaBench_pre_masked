
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IHTMLXMLHttpRequestFactory ;
typedef int IHTMLWindow5 ;
typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,void**) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (char*) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_15(IHTMLDocument2 *VAR_5)
{
    IHTMLWindow2 *VAR_6;
    IHTMLWindow5 *VAR_7;
    VARIANT VAR_8;
    IHTMLXMLHttpRequestFactory *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_2(VAR_5, &VAR_6);
    FUNC_13(VAR_10 == VAR_2, "get_parentWindow failed: %08x\n", VAR_10);
    FUNC_13(VAR_6 != ((void*)0), "window == NULL\n");

    VAR_10 = FUNC_3(VAR_6, &VAR_0, (void**)&VAR_7);
    FUNC_4(VAR_6);
    if(FUNC_0(VAR_10)) {
        FUNC_14("IHTMLWindow5 not supported\n");
        return;
    }

    FUNC_12(&VAR_8);
    VAR_10 = FUNC_6(VAR_7, &VAR_8);
    FUNC_5(VAR_7);
    FUNC_13(VAR_10 == VAR_2, "get_XMLHttpRequest failed: %08x\n", VAR_10);
    FUNC_13(FUNC_10(&VAR_8) == VAR_3, "V_VT(&var) is %08x, expected VT_DISPATCH\n", FUNC_10(&VAR_8));

    VAR_10 = FUNC_1(FUNC_9(&VAR_8), &VAR_1, (void**)&VAR_9);
    FUNC_11(&VAR_8);
    FUNC_13(VAR_10 == VAR_2, "QueryInterface(IID_IHTMLXMLHttpRequestFactory) failed: %08x\n", VAR_10);
    FUNC_13(VAR_9 != ((void*)0), "factory == NULL\n");

    VAR_10 = FUNC_8(VAR_9, &VAR_4);
    FUNC_7(VAR_9);
    FUNC_13(VAR_10 == VAR_2, "create failed: %08x\n", VAR_10);
    FUNC_13(VAR_4 != ((void*)0), "xhr == NULL\n");
}

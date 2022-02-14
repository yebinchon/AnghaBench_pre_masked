
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IUnknown ;
typedef int IHTMLXMLHttpRequestFactory ;
typedef int IHTMLXMLHttpRequest ;
typedef int IHTMLWindow5 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_11(IHTMLWindow5 *VAR_4)
{
    HRESULT VAR_5;
    VARIANT VAR_6;
    IHTMLXMLHttpRequestFactory *VAR_7;
    IHTMLXMLHttpRequest *VAR_8;

    VAR_5 = FUNC_1(VAR_4, &VAR_6);
    FUNC_9(VAR_5 == VAR_2, "get_XMLHttpRequest failed: %08x\n", VAR_5);
    FUNC_9(FUNC_6(&VAR_6) == VAR_3, "expect VT_DISPATCH, got %s\n", FUNC_8(&VAR_6));

    VAR_7 = ((void*)0);
    VAR_5 = FUNC_0(FUNC_5(&VAR_6), &VAR_1, (void**)&VAR_7);
    FUNC_9(VAR_5 == VAR_2, "QueryInterface(&IID_IHTMLXMLHttpRequestFactory) failed: %08x\n", VAR_5);
    FUNC_9(VAR_7 != ((void*)0), "factory == NULL\n");

    VAR_8 = ((void*)0);
    VAR_5 = FUNC_3(VAR_7, &VAR_8);
    FUNC_9(VAR_5 == VAR_2, "create failed: %08x\n", VAR_5);
    FUNC_9(VAR_8 != ((void*)0), "xml == NULL\n");
    FUNC_10((IUnknown*)VAR_8, &VAR_0, "[object]");

    FUNC_4(VAR_8);
    FUNC_2(VAR_7);
    FUNC_7(&VAR_6);
}

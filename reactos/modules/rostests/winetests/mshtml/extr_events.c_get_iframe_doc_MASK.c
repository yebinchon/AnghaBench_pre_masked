
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLWindow2 ;
typedef int IHTMLIFrameElement ;
typedef int IHTMLFrameBase2 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static IHTMLDocument2* FUNC_6(IHTMLIFrameElement *VAR_2)
{
    HRESULT VAR_3;
    IHTMLFrameBase2 *VAR_4;
    IHTMLDocument2 *VAR_5 = ((void*)0);

    VAR_3 = FUNC_2(VAR_2, &VAR_0, (void**)&VAR_4);
    FUNC_5(VAR_3 == VAR_1, "QueryInterface(IID_IHTMLFrameBase2) failed: %08x\n", VAR_3);
    if(VAR_3 == VAR_1) {
        IHTMLWindow2 *VAR_6;

        VAR_3 = FUNC_1(VAR_4, &VAR_6);
        FUNC_5(VAR_3 == VAR_1, "get_contentWindow failed: %08x\n", VAR_3);
        FUNC_5(VAR_6 != ((void*)0), "window == NULL\n");
        if(VAR_6) {
            VAR_3 = FUNC_4(VAR_6, &VAR_5);
            FUNC_5(VAR_3 == VAR_1, "get_document failed: %08x\n", VAR_3);
            FUNC_5(VAR_5 != ((void*)0), "result == NULL\n");
            FUNC_3(VAR_6);
        }
    }
    if(VAR_4) FUNC_0(VAR_4);

    return VAR_5;
}

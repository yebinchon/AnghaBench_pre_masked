
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(IHTMLDocument2 *VAR_3, BOOL VAR_4)
{
    IDispatch *VAR_5;
    IHTMLWindow2 *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_3, &VAR_6);
    FUNC_5(VAR_7 == VAR_2, "get_parentWindow failed: %08x\n", VAR_7);

    if(VAR_4)
        FUNC_4(VAR_0);
    VAR_5 = (void*)0xdeadbeef;
    VAR_7 = FUNC_3(VAR_6, &VAR_5);
    if(VAR_4) {
        FUNC_5(VAR_7 == VAR_1 || VAR_7 == VAR_2, "get_external failed: %08x\n", VAR_7);
        FUNC_0(VAR_0);
        FUNC_5(VAR_5 != ((void*)0), "external == NULL\n");
    }else {
        FUNC_5(VAR_7 == VAR_2, "get_external failed: %08x\n", VAR_7);
        FUNC_5(VAR_5 == ((void*)0), "external != NULL\n");
    }

    FUNC_2(VAR_6);
}

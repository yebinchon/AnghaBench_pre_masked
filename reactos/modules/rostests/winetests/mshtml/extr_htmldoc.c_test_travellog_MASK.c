
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int ITravelLogClient ;
typedef int IHTMLWindow2 ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_6)
{
    ITravelLogClient *VAR_7;
    IHTMLWindow2 *VAR_8, *VAR_9;
    IUnknown *VAR_10;
    HRESULT VAR_11;

    VAR_8 = ((void*)0);
    VAR_11 = FUNC_0(VAR_6, &VAR_8);
    FUNC_6(VAR_11 == VAR_3, "get_parentWindow failed: %08x\n", VAR_11);
    FUNC_6(VAR_8 != ((void*)0), "window = NULL\n");

    VAR_11 = FUNC_3(VAR_8, &VAR_9);
    FUNC_2(VAR_8);
    FUNC_6(VAR_11 == VAR_3, "get_top failed: %08x\n", VAR_11);

    VAR_11 = FUNC_1(VAR_9, &VAR_2, (void**)&VAR_7);
    FUNC_2(VAR_9);
    if(VAR_11 == VAR_1) {
        FUNC_7("ITravelLogClient not supported\n");
        VAR_5 = VAR_4;
        return;
    }
    FUNC_6(VAR_11 == VAR_3, "Could not get ITraveLogClient iface: %08x\n", VAR_11);

    VAR_10 = (void*)0xdeadbeef;
    VAR_11 = FUNC_4(VAR_7, 0, &VAR_10);
    FUNC_6(VAR_11 == VAR_0, "FindWindowByIndex failed: %08x\n", VAR_11);
    FUNC_6(!VAR_10, "unk != NULL\n");

    FUNC_5(VAR_7);
}

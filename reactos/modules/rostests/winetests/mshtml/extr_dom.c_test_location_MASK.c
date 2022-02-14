
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IUnknown ;
typedef int IHTMLWindow2 ;
typedef int IHTMLLocation ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,int *,int *,char*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(IHTMLDocument2 *VAR_5)
{
    IHTMLLocation *VAR_6, *VAR_7;
    IHTMLWindow2 *VAR_8;
    BSTR VAR_9;
    ULONG VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(VAR_5, &VAR_6);
    FUNC_7(VAR_11 == VAR_3, "get_location failed: %08x\n", VAR_11);

    VAR_11 = FUNC_0(VAR_5, &VAR_7);
    FUNC_7(VAR_11 == VAR_3, "get_location failed: %08x\n", VAR_11);

    FUNC_7(VAR_6 == VAR_7, "location != location2\n");
    FUNC_2(VAR_7);

    VAR_11 = FUNC_1(VAR_5, &VAR_8);
    FUNC_7(VAR_11 == VAR_3, "get_parentWindow failed: %08x\n", VAR_11);

    VAR_11 = FUNC_5(VAR_8, &VAR_7);
    FUNC_7(VAR_11 == VAR_3, "get_location failed: %08x\n", VAR_11);
    FUNC_7(VAR_6 == VAR_7, "location != location2\n");
    FUNC_2(VAR_7);

    FUNC_10((IUnknown*)VAR_6, VAR_4);
    FUNC_9((IUnknown*)VAR_6, &VAR_0, &VAR_2, "about:blank");

    VAR_11 = FUNC_4(VAR_6, &VAR_9);
    FUNC_7(VAR_11 == VAR_3, "get_pathname failed: %08x\n", VAR_11);
    FUNC_7(!FUNC_8(VAR_9, "blank"), "unexpected pathname %s\n", FUNC_11(VAR_9));
    FUNC_6(VAR_9);

    VAR_11 = FUNC_3(VAR_6, ((void*)0));
    FUNC_7(VAR_11 == VAR_1, "get_href passed: %08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_6, &VAR_9);
    FUNC_7(VAR_11 == VAR_3, "get_href failed: %08x\n", VAR_11);
    FUNC_7(!FUNC_8(VAR_9, "about:blank"), "unexpected href %s\n", FUNC_11(VAR_9));
    FUNC_6(VAR_9);

    VAR_10 = FUNC_2(VAR_6);
    FUNC_7(!VAR_10, "location chould be destroyed here\n");
}

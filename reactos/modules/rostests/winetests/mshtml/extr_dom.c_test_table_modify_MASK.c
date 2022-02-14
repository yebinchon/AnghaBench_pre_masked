
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IHTMLTableRow ;
typedef int IHTMLTable ;
typedef int IDispatch ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(IHTMLTable *VAR_2)
{
    IDispatch *VAR_3;
    IHTMLTableRow *VAR_4;
    HRESULT VAR_5;
    LONG VAR_6;

    FUNC_7(VAR_2, 2);

    VAR_5 = FUNC_5(VAR_2, 0, &VAR_3);
    FUNC_6(VAR_5 == VAR_1, "insertRow failed: %08x\n", VAR_5);
    FUNC_6(VAR_3 != ((void*)0), "disp == NULL\n");
    FUNC_7(VAR_2, 3);
    if (VAR_5 != VAR_1 || VAR_3 == ((void*)0))
        return;

    VAR_5 = FUNC_0(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_1(VAR_3);

    FUNC_6(VAR_5 == VAR_1, "QueryInterface failed: %08x\n", VAR_5);
    FUNC_6(VAR_4 != ((void*)0), "row == NULL\n");

    VAR_6 = 0xdeadbeef;
    VAR_5 = FUNC_3(VAR_4, &VAR_6);
    FUNC_6(VAR_5 == VAR_1, "get_rowIndex failed: %08x\n", VAR_5);
    FUNC_6(VAR_6 == 0, "index = %d, expected 0\n", VAR_6);

    FUNC_2(VAR_4);

    VAR_5 = FUNC_4(VAR_2, 0);
    FUNC_6(VAR_5 == VAR_1, "deleteRow failed: %08x\n", VAR_5);
    FUNC_7(VAR_2, 2);
}

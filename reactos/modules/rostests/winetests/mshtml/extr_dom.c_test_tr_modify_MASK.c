
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLTableRow ;
typedef int IHTMLTableCell ;
typedef int IHTMLElement ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,int *,int,char*) ;

__attribute__((used)) static void FUNC_8(IHTMLElement *VAR_2, IHTMLTableRow *VAR_3)
{
    HRESULT VAR_4;
    IDispatch *VAR_5;
    IHTMLTableCell *VAR_6;

    VAR_4 = FUNC_3(VAR_3, 0);
    FUNC_6(VAR_4 == VAR_1, "deleteCell failed: %08x\n", VAR_4);
    FUNC_7(VAR_2, VAR_3, 1, "td2");

    VAR_4 = FUNC_4(VAR_3, 0, &VAR_5);
    FUNC_6(VAR_4 == VAR_1, "insertCell failed: %08x\n", VAR_4);
    FUNC_6(VAR_5 != ((void*)0), "disp == NULL\n");
    VAR_4 = FUNC_0(VAR_5, &VAR_0, (void **)&VAR_6);
    FUNC_6(VAR_4 == VAR_1, "Could not get IID_IHTMLTableCell interface: %08x\n", VAR_4);
    FUNC_6(VAR_6 != ((void*)0), "cell == NULL\n");
    if (FUNC_5(VAR_4))
        FUNC_2(VAR_6);
    FUNC_7(VAR_2, VAR_3, 2, "td2");
    FUNC_1(VAR_5);
}

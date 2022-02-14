
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLTxtRange ;
typedef int IHTMLSelectionObject ;
typedef int IHTMLDocument2 ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(IHTMLDocument2 *VAR_2)
{
    IHTMLSelectionObject *VAR_3;
    IHTMLTxtRange *VAR_4;
    IDispatch *VAR_5;
    BSTR VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_2(VAR_2, &VAR_3);
    FUNC_8(VAR_7 == VAR_1, "get_selection failed: %08x\n", VAR_7);

    VAR_7 = FUNC_5(VAR_3, &VAR_6);
    FUNC_8(VAR_7 == VAR_1, "get_type failed: %08x\n", VAR_7);
    FUNC_8(!FUNC_9(VAR_6, "None"), "type = %s\n", FUNC_11(VAR_6));
    FUNC_7(VAR_6);

    VAR_7 = FUNC_4(VAR_3, &VAR_5);
    FUNC_3(VAR_3);
    FUNC_8(VAR_7 == VAR_1, "createRange failed: %08x\n", VAR_7);

    VAR_7 = FUNC_0(VAR_5, &VAR_0, (void**)&VAR_4);
    FUNC_1(VAR_5);
    FUNC_8(VAR_7 == VAR_1, "Could not get IHTMLTxtRange interface: %08x\n", VAR_7);

    FUNC_10(VAR_4, ((void*)0));
    FUNC_6(VAR_4);
}

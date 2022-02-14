
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDispatch ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,int *,int **) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_11 () ;
 int FUNC_12 (int,char*,...) ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static HRESULT FUNC_13(DWORD VAR_9, BSTR VAR_10)
{
    IActiveScriptParse *VAR_11;
    IActiveScript *VAR_12;
    HRESULT VAR_13;

    VAR_12 = FUNC_11();
    if(!VAR_12)
        return VAR_6;

    VAR_13 = FUNC_6(VAR_12, &VAR_2, (void**)&VAR_11);
    FUNC_12(VAR_13 == VAR_6, "Could not get IActiveScriptParse: %08x\n", VAR_13);
    if (FUNC_0(VAR_13))
    {
        FUNC_7(VAR_12);
        return VAR_13;
    }

    VAR_13 = FUNC_1(VAR_11);
    FUNC_12(VAR_13 == VAR_6, "InitNew failed: %08x\n", VAR_13);

    VAR_13 = FUNC_8(VAR_12, &VAR_0);
    FUNC_12(VAR_13 == VAR_6, "SetScriptSite failed: %08x\n", VAR_13);

    VAR_13 = FUNC_4(VAR_12, VAR_8,
            VAR_4|VAR_3|VAR_9);
    FUNC_12(VAR_13 == VAR_6, "AddNamedItem failed: %08x\n", VAR_13);

    VAR_13 = FUNC_9(VAR_12, VAR_5);
    FUNC_12(VAR_13 == VAR_6, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_13);

    VAR_13 = FUNC_5(VAR_12, ((void*)0), &VAR_7);
    FUNC_12(VAR_13 == VAR_6, "GetScriptDispatch failed: %08x\n", VAR_13);
    FUNC_12(VAR_7 != ((void*)0), "script_disp == NULL\n");
    FUNC_12(VAR_7 != (IDispatch*)&VAR_1, "script_disp == Global\n");

    VAR_13 = FUNC_2(VAR_11, VAR_10, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));

    FUNC_10(VAR_7);
    FUNC_7(VAR_12);
    FUNC_3(VAR_11);

    return VAR_13;
}

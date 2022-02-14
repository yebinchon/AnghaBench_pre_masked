
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int IDispatch ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int const*,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int **) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static HRESULT FUNC_10(DWORD VAR_4, BSTR VAR_5, const WCHAR *VAR_6)
{
    IActiveScriptParse *VAR_7;
    IActiveScript *VAR_8;
    IDispatch *VAR_9;
    LONG VAR_10;
    HRESULT VAR_11;

    VAR_8 = FUNC_8(VAR_4);
    if(!VAR_8)
        return VAR_2;

    VAR_11 = FUNC_5(VAR_8, &VAR_1, (void**)&VAR_7);
    FUNC_9(VAR_11 == VAR_2, "Could not get IActiveScriptParse: %08x\n", VAR_11);
    if (FUNC_0(VAR_11))
    {
        FUNC_6(VAR_8);
        return VAR_11;
    }

    VAR_11 = FUNC_4(VAR_8, ((void*)0), &VAR_9);
    FUNC_9(VAR_11 == VAR_2, "GetScriptDispatch failed: %08x\n", VAR_11);
    FUNC_9(VAR_9 != ((void*)0), "script_disp == NULL\n");
    FUNC_9(VAR_9 != (IDispatch*)&VAR_0, "script_disp == Global\n");

    VAR_3 = 0;

    VAR_11 = FUNC_1(VAR_7, VAR_5, ((void*)0), ((void*)0), VAR_6, 0, 0, 0, ((void*)0), ((void*)0));

    FUNC_3(VAR_8);

    FUNC_7(VAR_9);
    FUNC_6(VAR_8);

    VAR_10 = FUNC_2(VAR_7);
    FUNC_9(!VAR_10, "ref=%d\n", VAR_10);
    return VAR_11;
}

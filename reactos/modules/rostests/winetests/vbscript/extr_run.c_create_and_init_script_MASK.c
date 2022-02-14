
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_6 () ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static IActiveScript *FUNC_8(DWORD VAR_7)
{
    IActiveScriptParse *VAR_8;
    IActiveScript *VAR_9;
    HRESULT VAR_10;

    VAR_9 = FUNC_6();
    if(!VAR_9)
        return ((void*)0);

    VAR_10 = FUNC_3(VAR_9, &VAR_1, (void**)&VAR_8);
    FUNC_7(VAR_10 == VAR_5, "Could not get IActiveScriptParse: %08x\n", VAR_10);

    VAR_10 = FUNC_0(VAR_8);
    FUNC_7(VAR_10 == VAR_5, "InitNew failed: %08x\n", VAR_10);

    FUNC_1(VAR_8);

    VAR_10 = FUNC_4(VAR_9, &VAR_0);
    FUNC_7(VAR_10 == VAR_5, "SetScriptSite failed: %08x\n", VAR_10);

    VAR_10 = FUNC_2(VAR_9, VAR_6,
            VAR_3|VAR_2|VAR_7);
    FUNC_7(VAR_10 == VAR_5, "AddNamedItem failed: %08x\n", VAR_10);

    VAR_10 = FUNC_5(VAR_9, VAR_4);
    FUNC_7(VAR_10 == VAR_5, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_10);

    return VAR_9;
}

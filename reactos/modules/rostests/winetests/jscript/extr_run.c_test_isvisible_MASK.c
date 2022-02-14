
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_7 ;
 int * FUNC_11 () ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_13(BOOL VAR_9)
{
    IActiveScriptParse *VAR_10;
    IActiveScript *VAR_11;
    HRESULT VAR_12;

    static const WCHAR VAR_13[] =
        {'v','a','r',' ','v',' ','=',' ','t','e','s','t','V','a','l',';',0};

    VAR_11 = FUNC_11();
    if(!VAR_11)
        return;

    VAR_12 = FUNC_6(VAR_11, &VAR_2, (void**)&VAR_10);
    FUNC_12(VAR_12 == VAR_7, "Could not get IActiveScriptParse: %08x\n", VAR_12);
    if (FUNC_1(VAR_12))
    {
        FUNC_7(VAR_11);
        return;
    }

    VAR_12 = FUNC_2(VAR_10);
    FUNC_12(VAR_12 == VAR_7, "InitNew failed: %08x\n", VAR_12);

    VAR_12 = FUNC_8(VAR_11, &VAR_0);
    FUNC_12(VAR_12 == VAR_7, "SetScriptSite failed: %08x\n", VAR_12);

    if(VAR_9)
        FUNC_10(VAR_1);
    VAR_12 = FUNC_5(VAR_11, VAR_8,
            VAR_5|VAR_4|
            (VAR_9 ? VAR_3 : 0));
    FUNC_12(VAR_12 == VAR_7, "AddNamedItem failed: %08x\n", VAR_12);
    if(VAR_9)
        FUNC_0(VAR_1);

    VAR_12 = FUNC_9(VAR_11, VAR_6);
    FUNC_12(VAR_12 == VAR_7, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_12);

    if(!VAR_9)
        FUNC_10(VAR_1);
    VAR_12 = FUNC_3(VAR_10, VAR_13, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_12(VAR_12 == VAR_7, "ParseScriptText failed: %08x\n", VAR_12);
    if(!VAR_9)
        FUNC_0(VAR_1);

    VAR_12 = FUNC_3(VAR_10, VAR_13, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_12(VAR_12 == VAR_7, "ParseScriptText failed: %08x\n", VAR_12);

    FUNC_7(VAR_11);
    FUNC_4(VAR_10);
}

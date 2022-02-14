
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int,char*,scalar_t__) ;
 int * VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_14(void)
{
    IActiveScriptParse *VAR_11;
    IActiveScript *VAR_12;
    BSTR VAR_13;
    HRESULT VAR_14;

    VAR_9 = VAR_12 = FUNC_12();
    if(!VAR_12)
        return;

    VAR_14 = FUNC_5(VAR_12, &VAR_1, (void**)&VAR_11);
    FUNC_13(VAR_14 == VAR_6, "Could not get IActiveScriptParse: %08x\n", VAR_14);

    VAR_14 = FUNC_1(VAR_11);
    FUNC_13(VAR_14 == VAR_6, "InitNew failed: %08x\n", VAR_14);

    VAR_14 = FUNC_7(VAR_12, &VAR_0);
    FUNC_13(VAR_14 == VAR_6, "SetScriptSite failed: %08x\n", VAR_14);

    VAR_14 = FUNC_4(VAR_12, VAR_10, VAR_4|VAR_3|VAR_2);
    FUNC_13(VAR_14 == VAR_6, "AddNamedItem failed: %08x\n", VAR_14);

    VAR_13 = FUNC_11("ok(getScriptState() === 5, \"getScriptState = \" + getScriptState());\n"
                 "reportSuccess();");
    VAR_14 = FUNC_2(VAR_11, VAR_13, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_13(VAR_14 == VAR_6, "ParseScriptText failed: %08x\n", VAR_14);
    FUNC_10(VAR_13);

    FUNC_9(VAR_7);
    FUNC_9(VAR_8);
    VAR_14 = FUNC_8(VAR_12, VAR_5);
    FUNC_13(VAR_14 == VAR_6, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_14);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);

    FUNC_6(VAR_12);
    FUNC_3(VAR_11);
    VAR_9 = ((void*)0);
}

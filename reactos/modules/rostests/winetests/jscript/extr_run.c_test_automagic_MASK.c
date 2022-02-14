
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int,char*,scalar_t__) ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_14(void)
{
    IActiveScriptParse *VAR_12;
    IActiveScript *VAR_13;
    BSTR VAR_14;
    HRESULT VAR_15;

    VAR_10 = VAR_13 = FUNC_12();
    if(!VAR_13)
        return;

    VAR_15 = FUNC_5(VAR_13, &VAR_2, (void**)&VAR_12);
    FUNC_13(VAR_15 == VAR_7, "Could not get IActiveScriptParse: %08x\n", VAR_15);

    VAR_15 = FUNC_1(VAR_12);
    FUNC_13(VAR_15 == VAR_7, "InitNew failed: %08x\n", VAR_15);

    VAR_15 = FUNC_7(VAR_13, &VAR_0);
    FUNC_13(VAR_15 == VAR_7, "SetScriptSite failed: %08x\n", VAR_15);

    VAR_15 = FUNC_4(VAR_13, VAR_11, VAR_5|VAR_4|VAR_3);
    FUNC_13(VAR_15 == VAR_7, "AddNamedItem failed: %08x\n", VAR_15);

    VAR_14 = FUNC_11("function bindEventHandler::eventName() {}\n"
                 "reportSuccess();");
    VAR_15 = FUNC_2(VAR_12, VAR_14, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_13(VAR_15 == VAR_7, "ParseScriptText failed: %08x\n", VAR_15);
    FUNC_10(VAR_14);

    FUNC_9(VAR_1);
    FUNC_9(VAR_8);
    FUNC_9(VAR_9);
    VAR_15 = FUNC_8(VAR_13, VAR_6);
    FUNC_13(VAR_15 == VAR_7, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_15);
    FUNC_0(VAR_1);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);

    FUNC_6(VAR_13);
    FUNC_3(VAR_12);
    VAR_10 = ((void*)0);
}

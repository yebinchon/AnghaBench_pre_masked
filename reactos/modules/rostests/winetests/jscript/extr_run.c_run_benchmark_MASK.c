
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ) ;
 int * FUNC_11 () ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (int,char*,char const*,...) ;
 int VAR_6 ;
 int FUNC_14 (char*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_15(const char *VAR_7)
{
    IActiveScriptParse *VAR_8;
    IActiveScript *VAR_9;
    ULONG VAR_10, VAR_11;
    BSTR VAR_12;
    HRESULT VAR_13;

    VAR_9 = FUNC_11();
    if(!VAR_9)
        return;

    VAR_13 = FUNC_6(VAR_9, &VAR_1, (void**)&VAR_8);
    FUNC_13(VAR_13 == VAR_5, "Could not get IActiveScriptParse: %08x\n", VAR_13);
    if (FUNC_0(VAR_13)) {
        FUNC_7(VAR_9);
        return;
    }

    VAR_13 = FUNC_2(VAR_8);
    FUNC_13(VAR_13 == VAR_5, "InitNew failed: %08x\n", VAR_13);

    VAR_13 = FUNC_8(VAR_9, &VAR_0);
    FUNC_13(VAR_13 == VAR_5, "SetScriptSite failed: %08x\n", VAR_13);

    VAR_13 = FUNC_5(VAR_9, VAR_6,
            VAR_3|VAR_2);
    FUNC_13(VAR_13 == VAR_5, "AddNamedItem failed: %08x\n", VAR_13);

    VAR_13 = FUNC_9(VAR_9, VAR_4);
    FUNC_13(VAR_13 == VAR_5, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_13);

    VAR_12 = FUNC_12(VAR_7);

    VAR_10 = FUNC_1();
    VAR_13 = FUNC_3(VAR_8, VAR_12, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    VAR_11 = FUNC_1();
    FUNC_13(VAR_13 == VAR_5, "%s: ParseScriptText failed: %08x\n", VAR_7, VAR_13);

    FUNC_14("%s ran in %u ms\n", VAR_7, VAR_11-VAR_10);

    FUNC_7(VAR_9);
    FUNC_4(VAR_8);
    FUNC_10(VAR_12);
}

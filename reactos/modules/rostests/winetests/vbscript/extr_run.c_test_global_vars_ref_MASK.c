
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int * FUNC_12 () ;
 int FUNC_13 (int,char*,...) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_14(BOOL VAR_10)
{
    IActiveScriptParse *VAR_11;
    IActiveScript *VAR_12;
    BSTR VAR_13;
    LONG VAR_14;
    HRESULT VAR_15;

    VAR_12 = FUNC_12();
    if(!VAR_12)
        return VAR_7;

    VAR_15 = FUNC_6(VAR_12, &VAR_1, (void**)&VAR_11);
    FUNC_13(VAR_15 == VAR_7, "Could not get IActiveScriptParse: %08x\n", VAR_15);
    if (FUNC_0(VAR_15))
    {
        FUNC_7(VAR_12);
        return VAR_15;
    }

    VAR_15 = FUNC_1(VAR_11);
    FUNC_13(VAR_15 == VAR_7, "InitNew failed: %08x\n", VAR_15);

    VAR_15 = FUNC_8(VAR_12, &VAR_0);
    FUNC_13(VAR_15 == VAR_7, "SetScriptSite failed: %08x\n", VAR_15);

    VAR_15 = FUNC_4(VAR_12, VAR_9, VAR_4|VAR_3|VAR_2);
    FUNC_13(VAR_15 == VAR_7, "AddNamedItem failed: %08x\n", VAR_15);

    VAR_15 = FUNC_9(VAR_12, VAR_5);
    FUNC_13(VAR_15 == VAR_7, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_15);

    VAR_8 = 0;

    VAR_13 = FUNC_11("Dim x\nset x = RefObj\n");
    VAR_15 = FUNC_2(VAR_11, VAR_13, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_10(VAR_13);

    FUNC_13(VAR_8, "refobj_ref = 0\n");

    if(VAR_10) {
        VAR_15 = FUNC_5(VAR_12);
        FUNC_13(VAR_15 == VAR_7, "Close failed: %08x\n", VAR_15);
    }else {
        VAR_15 = FUNC_9(VAR_12, VAR_6);
        FUNC_13(VAR_15 == VAR_7, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_15);
    }

    FUNC_13(!VAR_8, "refobj_ref = %d\n", VAR_8);

    FUNC_7(VAR_12);

    VAR_14 = FUNC_3(VAR_11);
    FUNC_13(!VAR_14, "ref=%d\n", VAR_14);
    return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*) ;
 int * FUNC_13 () ;
 int FUNC_14 (int,char*,scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static HRESULT FUNC_15(const char *VAR_11, VARIANT *VAR_12, IActiveScript **VAR_13)
{
    IActiveScriptParse *VAR_14;
    IActiveScript *VAR_15;
    BSTR VAR_16;
    HRESULT VAR_17;

    VAR_15 = FUNC_13();
    if(!VAR_15)
        return VAR_1;

    VAR_17 = FUNC_6(VAR_15, &VAR_3, (void**)&VAR_14);
    FUNC_14(VAR_17 == VAR_9, "Could not get IActiveScriptParse: %08x\n", VAR_17);

    VAR_17 = FUNC_1(VAR_14);
    FUNC_14(VAR_17 == VAR_9, "InitNew failed: %08x\n", VAR_17);

    VAR_17 = FUNC_8(VAR_15, &VAR_0);
    FUNC_14(VAR_17 == VAR_9, "SetScriptSite failed: %08x\n", VAR_17);

    FUNC_10(VAR_2);
    VAR_17 = FUNC_4(VAR_15, VAR_10,
            VAR_6|VAR_5|VAR_4);
    FUNC_14(VAR_17 == VAR_9, "AddNamedItem failed: %08x\n", VAR_17);
    FUNC_0(VAR_2);

    VAR_17 = FUNC_9(VAR_15, VAR_7);
    FUNC_14(VAR_17 == VAR_9, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_17);

    VAR_16 = FUNC_12(VAR_11);
    VAR_17 = FUNC_2(VAR_14, VAR_16, ((void*)0), ((void*)0), ((void*)0), 0, 0, VAR_8, VAR_12, ((void*)0));
    FUNC_11(VAR_16);

    FUNC_3(VAR_14);

    if(VAR_13) {
        *VAR_13 = VAR_15;
    }else {
        FUNC_5(VAR_15);
        FUNC_7(VAR_15);
    }
    return VAR_17;
}

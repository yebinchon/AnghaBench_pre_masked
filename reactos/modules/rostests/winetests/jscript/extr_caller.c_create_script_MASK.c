
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int VAR_11 ;

__attribute__((used)) static IActiveScriptParse *FUNC_9(void)
{
    IActiveScriptParse *VAR_12;
    IActiveScript *VAR_13;
    HRESULT VAR_14;

    VAR_14 = FUNC_0(&VAR_3, ((void*)0), VAR_2|VAR_1,
            &VAR_4, (void**)&VAR_13);
    if(FUNC_1(VAR_14))
        return ((void*)0);

    VAR_14 = FUNC_4(VAR_13, &VAR_5, (void**)&VAR_12);
    FUNC_8(VAR_14 == VAR_10, "Could not get IActiveScriptParse: %08x\n", VAR_14);

    VAR_14 = FUNC_2(VAR_12);
    FUNC_8(VAR_14 == VAR_10, "InitNew failed: %08x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_13, &VAR_0);
    FUNC_8(VAR_14 == VAR_10, "SetScriptSite failed: %08x\n", VAR_14);

    VAR_14 = FUNC_3(VAR_13, VAR_11,
            VAR_8|VAR_7|VAR_6);
    FUNC_8(VAR_14 == VAR_10, "AddNamedItem failed: %08x\n", VAR_14);

    VAR_14 = FUNC_7(VAR_13, VAR_9);
    FUNC_8(VAR_14 == VAR_10, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_14);

    FUNC_5(VAR_13);

    return VAR_12;
}

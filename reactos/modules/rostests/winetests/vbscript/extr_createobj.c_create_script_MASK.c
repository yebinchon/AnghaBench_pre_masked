
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int VAR_22 ;

__attribute__((used)) static IActiveScriptParse *FUNC_10(BOOL VAR_23)
{
    IActiveScriptParse *VAR_24;
    IActiveScript *VAR_25;
    HRESULT VAR_26;

    VAR_11 = VAR_19;
    VAR_7 = VAR_19;
    VAR_8 = VAR_21;
    VAR_4 = VAR_19;
    VAR_12 = VAR_19;
    VAR_14 = sizeof(DWORD);
    VAR_13 = VAR_21;
    VAR_9 = VAR_19;
    VAR_10 = VAR_19;
    VAR_20 = VAR_19;

    VAR_26 = FUNC_0(&VAR_3, ((void*)0), VAR_2|VAR_1,
            &VAR_5, (void**)&VAR_25);
    FUNC_8(VAR_26 == VAR_19, "CoCreateInstance failed: %08x\n", VAR_26);
    if(FUNC_1(VAR_26))
        return ((void*)0);

    FUNC_9((IUnknown*)VAR_25, VAR_23);

    VAR_26 = FUNC_4(VAR_25, &VAR_6, (void**)&VAR_24);
    FUNC_8(VAR_26 == VAR_19, "Could not get IActiveScriptParse: %08x\n", VAR_26);

    VAR_26 = FUNC_2(VAR_24);
    FUNC_8(VAR_26 == VAR_19, "InitNew failed: %08x\n", VAR_26);

    VAR_26 = FUNC_6(VAR_25, &VAR_0);
    FUNC_8(VAR_26 == VAR_19, "SetScriptSite failed: %08x\n", VAR_26);

    VAR_26 = FUNC_3(VAR_25, VAR_22,
            VAR_17|VAR_16|VAR_15);
    FUNC_8(VAR_26 == VAR_19, "AddNamedItem failed: %08x\n", VAR_26);

    VAR_26 = FUNC_7(VAR_25, VAR_18);
    FUNC_8(VAR_26 == VAR_19, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_26);

    FUNC_5(VAR_25);

    return VAR_24;
}

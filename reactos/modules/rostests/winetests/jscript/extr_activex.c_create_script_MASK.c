
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
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
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
 int VAR_21 ;
 void* VAR_22 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ) ;
 int VAR_23 ;

__attribute__((used)) static IActiveScriptParse *FUNC_11(BOOL VAR_24, BOOL VAR_25)
{
    IActiveScriptParse *VAR_26;
    IActiveScript *VAR_27;
    HRESULT VAR_28;

    VAR_11 = VAR_19;
    VAR_8 = VAR_19;
    VAR_9 = VAR_22;
    VAR_5 = VAR_19;
    VAR_12 = VAR_19;
    VAR_14 = sizeof(DWORD);
    VAR_13 = VAR_22;
    VAR_10 = VAR_19;
    VAR_20 = VAR_19;
    VAR_1 = VAR_21;

    VAR_28 = FUNC_0(&VAR_4, ((void*)0), VAR_3|VAR_2,
            &VAR_6, (void**)&VAR_27);
    if(!VAR_24)
        FUNC_8(VAR_28 == VAR_19, "CoCreateInstance failed: %08x\n", VAR_28);
    if(FUNC_1(VAR_28))
        return ((void*)0);

    if(!VAR_24)
        FUNC_10((IUnknown*)VAR_27, VAR_25);

    VAR_28 = FUNC_4(VAR_27, &VAR_7, (void**)&VAR_26);
    FUNC_8(VAR_28 == VAR_19, "Could not get IActiveScriptParse: %08x\n", VAR_28);

    VAR_28 = FUNC_2(VAR_26);
    FUNC_8(VAR_28 == VAR_19, "InitNew failed: %08x\n", VAR_28);

    VAR_28 = FUNC_6(VAR_27, &VAR_0);
    FUNC_8(VAR_28 == VAR_19, "SetScriptSite failed: %08x\n", VAR_28);

    VAR_28 = FUNC_3(VAR_27, VAR_23,
            VAR_17|VAR_16|VAR_15);
    FUNC_8(VAR_28 == VAR_19, "AddNamedItem failed: %08x\n", VAR_28);

    VAR_28 = FUNC_7(VAR_27, VAR_18);
    FUNC_8(VAR_28 == VAR_19, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_28);

    FUNC_5(VAR_27);

    if(!VAR_24) {
        FUNC_9(VAR_26,
                "function testException(func, type, number) {\n"
                "    try {\n"
                "        func();\n"
                "    }catch(e) {\n"
                "        ok(e.name === type, 'e.name = ' + e.name + ', expected ' + type)\n"
                "        ok(e.number === number, 'e.number = ' + e.number + ', expected ' + number);\n"
                "        return;\n"
                "    }\n"
                "    ok(false, 'exception expected');\n"
                "}");
    }

    return VAR_26;
}

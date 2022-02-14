
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,char const*,int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int,char*,int) ;
 char const* VAR_6 ;

__attribute__((used)) static void FUNC_10(void)
{
    IActiveScriptParse *VAR_7;
    IActiveScript *VAR_8;
    BSTR VAR_9;
    HRESULT VAR_10;

    static const WCHAR VAR_11[] = {'x',0};
    static const WCHAR VAR_12[] = {'y',0};

    VAR_3 = 1;
    VAR_8 = FUNC_8(0);
    if(!VAR_8)
        return;

    VAR_10 = FUNC_3(VAR_8, &VAR_1, (void**)&VAR_7);
    FUNC_9(VAR_10 == VAR_2, "Could not get IActiveScriptParse: %08x\n", VAR_10);


    VAR_9 = FUNC_6("Call reportSuccess()\n");
    VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_12, ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_9(VAR_10 == VAR_0, "ParseScriptText failed: %08x\n", VAR_10);
    FUNC_5(VAR_9);

    VAR_9 = FUNC_6("class Cl\n"
                 "    Public Sub ClMethod\n"
                 "        Call reportSuccess()\n"
                 "    End Sub\n"
                 "End Class\n"
                 "Dim x\n"
                 "set x = new Cl\n");
    VAR_10 = FUNC_1(VAR_7, VAR_9, ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_9(VAR_10 == VAR_2, "ParseScriptText failed: %08x\n", VAR_10);
    FUNC_5(VAR_9);


    VAR_9 = FUNC_6("Call reportSuccess()\n");
    VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_11, ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_9(VAR_10 == VAR_0, "ParseScriptText failed: %08x\n", VAR_10);
    FUNC_5(VAR_9);

    FUNC_4(VAR_4);
    FUNC_4(VAR_5);
    VAR_9 = FUNC_6("Call reportSuccess()\n");
    VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_6, ((void*)0), ((void*)0), 0, 0, 0, ((void*)0), ((void*)0));
    FUNC_9(VAR_10 == VAR_2, "ParseScriptText failed: %08x\n", VAR_10);
    FUNC_5(VAR_9);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    FUNC_2(VAR_7);
    FUNC_7(VAR_8);
    FUNC_9(VAR_3 == 1, "global_ref = %u\n", VAR_3);
}

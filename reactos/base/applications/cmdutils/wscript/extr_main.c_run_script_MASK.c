
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int *,int *,int,int,int,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6(const WCHAR *VAR_3, IActiveScript *VAR_4, IActiveScriptParse *VAR_5)
{
    BSTR VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_5(VAR_3);
    if(!VAR_6) {
        FUNC_4("Could not get script text\n");
        return;
    }

    VAR_7 = FUNC_1(VAR_5, VAR_6, ((void*)0), ((void*)0), ((void*)0), 1, 1,
            VAR_2|VAR_0, ((void*)0), ((void*)0));
    FUNC_3(VAR_6);
    if(FUNC_0(VAR_7)) {
        FUNC_4("ParseScriptText failed: %08x\n", VAR_7);
        return;
    }

    VAR_7 = FUNC_2(VAR_4, VAR_1);
    if(FUNC_0(VAR_7))
        FUNC_4("SetScriptState failed: %08x\n", VAR_7);
}

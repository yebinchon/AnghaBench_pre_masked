
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IActiveScriptParse ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int ,int ,int ,int ,int *,int *) ;
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
 scalar_t__ VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 () ;
 int FUNC_12 (int,char*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static HRESULT FUNC_13(BSTR VAR_9)
{
    IActiveScriptParse *VAR_10;
    IActiveScript *VAR_11;
    HRESULT VAR_12;
    BSTR VAR_13 = FUNC_10("</SCRIPT>");

    VAR_11 = FUNC_11();
    if(!VAR_11)
        return VAR_1;

    VAR_12 = FUNC_5(VAR_11, &VAR_2, (void**)&VAR_10);
    FUNC_12(VAR_12 == VAR_7, "Could not get IActiveScriptParse: %08x\n", VAR_12);
    if (FUNC_0(VAR_12))
    {
        FUNC_6(VAR_11);
        return VAR_1;
    }

    VAR_12 = FUNC_1(VAR_10);
    FUNC_12(VAR_12 == VAR_7, "InitNew failed: %08x\n", VAR_12);

    VAR_12 = FUNC_7(VAR_11, &VAR_0);
    FUNC_12(VAR_12 == VAR_7, "SetScriptSite failed: %08x\n", VAR_12);

    VAR_12 = FUNC_4(VAR_11, VAR_8,
            VAR_5|VAR_4|VAR_3);
    FUNC_12(VAR_12 == VAR_7, "AddNamedItem failed: %08x\n", VAR_12);

    VAR_12 = FUNC_8(VAR_11, VAR_6);
    FUNC_12(VAR_12 == VAR_7, "SetScriptState(SCRIPTSTATE_STARTED) failed: %08x\n", VAR_12);

    VAR_12 = FUNC_2(VAR_10, VAR_9, ((void*)0), ((void*)0), VAR_13, 0, 0, 0, ((void*)0), ((void*)0));

    FUNC_6(VAR_11);
    FUNC_3(VAR_10);
    FUNC_9(VAR_13);

    return VAR_12;
}

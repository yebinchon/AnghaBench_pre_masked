
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int IActiveScriptParseProcedure2 ;
typedef int IActiveScriptParse ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ,int *,int *,int *,int *,int *,int ,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static IDispatchEx *FUNC_8(IActiveScriptParse *VAR_3, const char *VAR_4)
{
    IActiveScriptParseProcedure2 *VAR_5;
    IDispatchEx *VAR_6;
    IDispatch *VAR_7;
    BSTR VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_2(VAR_3, &VAR_0, (void**)&VAR_5);
    FUNC_7(VAR_9 == VAR_2, "Could not get IActiveScriptParseProcedure2: %08x\n", VAR_9);

    VAR_8 = FUNC_6(VAR_4);
    VAR_9 = FUNC_0(VAR_5, VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0, 0, &VAR_7);
    FUNC_5(VAR_8);
    FUNC_1(VAR_5);
    FUNC_7(VAR_9 == VAR_2, "ParseProcedureText failed: %08x\n", VAR_9);
    FUNC_7(VAR_7 != ((void*)0), "disp == NULL\n");

    VAR_9 = FUNC_3(VAR_7, &VAR_1, (void**)&VAR_6);
    FUNC_4(VAR_7);
    FUNC_7(VAR_9 == VAR_2, "Could not get IDispatchEx iface: %08x\n", VAR_9);

    return VAR_6;
}

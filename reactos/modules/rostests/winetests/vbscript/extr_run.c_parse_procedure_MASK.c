
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int IActiveScriptParseProcedure2 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int ,int *,int ,int *,int *,char const*,int ,int ,int,int **) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int VAR_5 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static IDispatchEx *FUNC_6(IActiveScriptParseProcedure2 *VAR_6, const char *VAR_7)
{
    IDispatchEx *VAR_8;
    IDispatch *VAR_9;
    BSTR VAR_10;
    HRESULT VAR_11;

    static const WCHAR VAR_12[] = {'\"',0};

    VAR_10 = FUNC_4(VAR_7);
    VAR_11 = FUNC_0(VAR_6, VAR_10, ((void*)0), VAR_5, ((void*)0), ((void*)0), VAR_12, 0, 0,
            VAR_1|VAR_3|VAR_2, &VAR_9);
    FUNC_3(VAR_10);
    FUNC_5(VAR_11 == VAR_4, "ParseProcedureText failed: %08x\n", VAR_11);
    FUNC_5(VAR_9 != ((void*)0), "disp = NULL\n");

    VAR_11 = FUNC_1(VAR_9, &VAR_0, (void**)&VAR_8);
    FUNC_2(VAR_9);
    FUNC_5(VAR_11 == VAR_4, "Could not get IDispatchEx iface: %08x\n", VAR_11);

    return VAR_8;
}

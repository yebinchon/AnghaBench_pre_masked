
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDispatchEx ;
typedef int IDispatch ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int **) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static IDispatchEx *FUNC_5(IActiveScript *VAR_2)
{
    IDispatchEx *VAR_3;
    IDispatch *VAR_4;
    HRESULT VAR_5;

    VAR_4 = (void*)0xdeadbeef;
    VAR_5 = FUNC_1(VAR_2, ((void*)0), &VAR_4);
    FUNC_4(VAR_5 == VAR_1, "GetScriptDispatch failed: %08x\n", VAR_5);
    if(FUNC_0(VAR_5))
        return ((void*)0);

    VAR_5 = FUNC_2(VAR_4, &VAR_0, (void**)&VAR_3);
    FUNC_3(VAR_4);
    FUNC_4(VAR_5 == VAR_1, "Could not get IDispatchEx iface: %08x\n", VAR_5);
    return VAR_3;
}

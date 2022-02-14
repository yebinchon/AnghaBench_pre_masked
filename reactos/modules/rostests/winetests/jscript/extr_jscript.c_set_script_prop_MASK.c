
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IActiveScriptProperty ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_5(IActiveScript *VAR_2, DWORD VAR_3, VARIANT *VAR_4)
{
    IActiveScriptProperty *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_3(VAR_2, &VAR_0,
            (void**)&VAR_5);
    FUNC_4(VAR_6 == VAR_1, "Could not get IActiveScriptProperty: %08x\n", VAR_6);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_2(VAR_5, VAR_3, ((void*)0), VAR_4);
    FUNC_1(VAR_5);
    return VAR_6;
}

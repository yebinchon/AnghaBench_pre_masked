
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IObjectSafety ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IUnknown *VAR_3, DWORD VAR_4, DWORD VAR_5)
{
    IObjectSafety *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_2(VAR_3, &VAR_1, (void**)&VAR_6);
    FUNC_3(VAR_7 == VAR_2, "Could not get IObjectSafety iface: %08x\n", VAR_7);

    VAR_7 = FUNC_1(VAR_6, &VAR_0, VAR_4, VAR_4&VAR_5);
    FUNC_3(VAR_7 == VAR_2, "SetInterfaceSafetyOptions failed: %08x\n", VAR_7);

    FUNC_0(VAR_6);
}

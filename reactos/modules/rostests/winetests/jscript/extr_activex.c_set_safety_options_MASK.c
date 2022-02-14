
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IObjectSafety ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,int*,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int,int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_6(IUnknown *VAR_6, BOOL VAR_7)
{
    IObjectSafety *VAR_8;
    DWORD VAR_9, VAR_10, VAR_11, VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_4(VAR_6, &VAR_1, (void**)&VAR_8);
    FUNC_5(VAR_13 == VAR_5, "Could not get IObjectSafety: %08x\n", VAR_13);
    if(FUNC_0(VAR_13))
        return;

    VAR_11 = VAR_2|VAR_3|VAR_4;
    if(VAR_7)
        VAR_12 = VAR_11;
    else
        VAR_12 = VAR_3;

    VAR_13 = FUNC_3(VAR_8, &VAR_0, VAR_11, VAR_12);
    FUNC_5(VAR_13 == VAR_5, "SetInterfaceSafetyOptions failed: %08x\n", VAR_13);

    VAR_9 = VAR_10 = 0xdeadbeef;
    VAR_13 = FUNC_1(VAR_8, &VAR_0, &VAR_9, &VAR_10);
    FUNC_5(VAR_13 == VAR_5, "GetInterfaceSafetyOptions failed: %08x\n", VAR_13);
    FUNC_5(VAR_9 == VAR_11, "supported=%x, expected %x\n", VAR_9, VAR_11);
    FUNC_5(VAR_10 == VAR_12, "enabled=%x, expected %x\n", VAR_10, VAR_12);

    FUNC_2(VAR_8);
}

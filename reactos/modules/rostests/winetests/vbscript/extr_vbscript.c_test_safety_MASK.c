
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IObjectSafety ;
typedef int IActiveScript ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int *,int*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int) ;
 int VAR_10 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(IActiveScript *VAR_11)
{
    IObjectSafety *VAR_12;
    DWORD VAR_13, VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_1(VAR_11, &VAR_4, (void**)&VAR_12);
    FUNC_5(VAR_15 == VAR_10, "Could not get IObjectSafety: %08x\n", VAR_15);
    if(FUNC_0(VAR_15))
        return;

    VAR_15 = FUNC_2(VAR_12, &VAR_5, &VAR_13, ((void*)0));
    FUNC_5(VAR_15 == VAR_1, "GetInterfaceSafetyOptions failed: %08x, expected E_POINTER\n", VAR_15);
    VAR_15 = FUNC_2(VAR_12, &VAR_5, ((void*)0), &VAR_14);
    FUNC_5(VAR_15 == VAR_1, "GetInterfaceSafetyOptions failed: %08x, expected E_POINTER\n", VAR_15);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_5, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == VAR_8, "enabled=%x\n", VAR_14);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_2, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == VAR_8, "enabled=%x\n", VAR_14);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_3, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == VAR_8, "enabled=%x\n", VAR_14);

    VAR_15 = FUNC_4(VAR_12, &VAR_3,
            VAR_7|VAR_8|VAR_9
                |VAR_6,
            VAR_7|VAR_8|VAR_9);
    FUNC_5(VAR_15 == VAR_0, "SetInterfaceSafetyOptions failed: %08x, expected E_FAIL\n", VAR_15);

    VAR_15 = FUNC_4(VAR_12, &VAR_3,
            VAR_7|VAR_8|VAR_9,
            VAR_7|VAR_8|VAR_9);
    FUNC_5(VAR_15 == VAR_10, "SetInterfaceSafetyOptions failed: %08x\n", VAR_15);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_3, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == (VAR_7|VAR_8|VAR_9),
       "enabled=%x\n", VAR_14);

    VAR_15 = FUNC_4(VAR_12, &VAR_3, VAR_7, 0);
    FUNC_5(VAR_15 == VAR_10, "SetInterfaceSafetyOptions failed: %08x\n", VAR_15);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_3, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == (VAR_8|VAR_9), "enabled=%x\n", VAR_14);

    VAR_15 = FUNC_4(VAR_12, &VAR_3,
            VAR_7|VAR_8|VAR_9, 0);
    FUNC_5(VAR_15 == VAR_10, "SetInterfaceSafetyOptions failed: %08x\n", VAR_15);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_3, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == VAR_8, "enabled=%x\n", VAR_14);

    VAR_15 = FUNC_4(VAR_12, &VAR_3,
            VAR_8, 0);
    FUNC_5(VAR_15 == VAR_10, "SetInterfaceSafetyOptions failed: %08x\n", VAR_15);

    VAR_13 = VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_2(VAR_12, &VAR_3, &VAR_13, &VAR_14);
    FUNC_5(VAR_15 == VAR_10, "GetInterfaceSafetyOptions failed: %08x\n", VAR_15);
    FUNC_5(VAR_13 == (VAR_7|VAR_8|VAR_9),
       "supported=%x\n", VAR_13);
    FUNC_5(VAR_14 == VAR_8, "enabled=%x\n", VAR_14);

    FUNC_3(VAR_12);
}

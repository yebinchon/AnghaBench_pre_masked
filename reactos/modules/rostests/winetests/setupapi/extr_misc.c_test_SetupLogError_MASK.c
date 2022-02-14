
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOL VAR_6;
    DWORD VAR_7;

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_3("Test without opening\r\n", VAR_4);
    VAR_7 = FUNC_0();
    FUNC_6(!VAR_6, "SetupLogError succeeded\n");
    FUNC_6(VAR_7 == VAR_1, "got wrong error: %d\n", VAR_7);

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_4(VAR_3);
    if (!VAR_6 && FUNC_0() == VAR_0)
    {
        FUNC_7("SetupOpenLog() failed on insufficient permissions\n");
        return;
    }
    FUNC_6(VAR_6, "SetupOpenLog failed, error %d\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_3("Test with wrong log severity\r\n", VAR_5);
    VAR_7 = FUNC_0();
    FUNC_6(!VAR_6, "SetupLogError succeeded\n");
    FUNC_6(VAR_7 == 0xdeadbeef, "got wrong error: %d\n", VAR_7);
    VAR_6 = FUNC_3("Test without EOL", VAR_4);
    FUNC_6(VAR_6, "SetupLogError failed\n");

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_3(((void*)0), VAR_4);
    FUNC_6(VAR_6 || FUNC_5(!VAR_6 && FUNC_0() == VAR_2 ),
        "SetupLogError failed: %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = FUNC_4(VAR_3);
    FUNC_6(VAR_6, "SetupOpenLog failed, error %d\n", FUNC_0());

    FUNC_2();
}

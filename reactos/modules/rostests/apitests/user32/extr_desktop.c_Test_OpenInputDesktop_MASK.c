
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWINSTA ;
typedef int * HDESK ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;

void FUNC_11()
{
    HDESK VAR_5 ,VAR_6;
    HDESK VAR_7;
    BOOL VAR_8;
    HWINSTA VAR_9 = ((void*)0), VAR_10;
    DWORD VAR_11;

    VAR_5 = FUNC_7(0, VAR_2, VAR_0);
    FUNC_10(VAR_5 != ((void*)0), "OpenInputDesktop failed\n");
    VAR_7 = FUNC_6( FUNC_3() );
    FUNC_10(VAR_7 != ((void*)0), "GetThreadDesktop failed\n");
    FUNC_10(VAR_5 != VAR_7, "OpenInputDesktop returned thread desktop\n");

    VAR_6 = FUNC_7(0, VAR_2, VAR_0);
    FUNC_10(VAR_6 != ((void*)0), "Second call to OpenInputDesktop failed\n");
    FUNC_10(VAR_6 != VAR_5, "Second call to OpenInputDesktop returned same handle\n");

    FUNC_10(FUNC_0(VAR_6) != 0, "CloseDesktop failed\n");

    VAR_8 = FUNC_9(VAR_5);
    FUNC_10(VAR_8 == VAR_3, "SetThreadDesktop for input desktop failed\n");

    VAR_8 = FUNC_9(VAR_7);
    FUNC_10(VAR_8 == VAR_3, "SetThreadDesktop for initial desktop failed\n");

    FUNC_10(FUNC_0(VAR_5) != 0, "CloseDesktop failed\n");


    VAR_10 = FUNC_5();
    FUNC_10(VAR_10 != 0, "GetProcessWindowStation failed\n");

    VAR_9 = FUNC_2(L"TestWinsta", 0, VAR_4, ((void*)0));
    FUNC_10(VAR_9 != 0, "CreateWindowStationW failed\n");

    VAR_8 = FUNC_8(VAR_9);
    FUNC_10(VAR_8 != VAR_2, "SetProcessWindowStation failed\n");

    VAR_5 = FUNC_7(0, VAR_2, VAR_0);
    FUNC_10(VAR_5 == 0, "OpenInputDesktop should fail\n");

    VAR_11 = FUNC_4();
    FUNC_10(VAR_11 == VAR_1, "Got last error: %lu\n", VAR_11);

    VAR_8 = FUNC_8(VAR_10);
    FUNC_10(VAR_8 != VAR_2, "SetProcessWindowStation failed\n");

    VAR_8 = FUNC_1(VAR_9);
    FUNC_10(VAR_8 != VAR_2, "CloseWindowStation failed\n");

}

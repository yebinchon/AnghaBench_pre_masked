
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWINSTA ;
typedef int * HDESK ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,int ,int*) ;
 int * FUNC_3 (char*,int ,int ,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int,char*,char*,int ) ;

void FUNC_8(char *VAR_6)
{
    HWINSTA VAR_7 = ((void*)0), VAR_8;
    HDESK VAR_9 = ((void*)0);
    BOOL VAR_10;
    DWORD VAR_11;

    VAR_8 = FUNC_4();


    FUNC_7(0, VAR_6, ((void*)0), 0);
    FUNC_7(1, VAR_6, "Default", 0);
    FUNC_7(2, VAR_6, "WinSta0\\", VAR_3);
    FUNC_7(3, VAR_6, "\\Default", VAR_3);
    FUNC_7(4, VAR_6, "WinSta0\\Default", 0);
    FUNC_7(5, VAR_6, "Winlogon", VAR_3);
    FUNC_7(6, VAR_6, "WinSta0/Default", VAR_3);
    FUNC_7(7, VAR_6, "NonExistantDesktop", VAR_3);
    FUNC_7(8, VAR_6, "NonExistantWinsta\\NonExistantDesktop", VAR_3);


    VAR_7 = FUNC_3(L"TestWinsta", VAR_5, VAR_4, &VAR_11);
    FUNC_6(VAR_7 != ((void*)0) && VAR_11 == VAR_2, "CreateWindowStation failed, got 0x%p, 0x%lx\n", VAR_7, VAR_11);
    VAR_10 = FUNC_5(VAR_7);
    FUNC_6(VAR_10 != VAR_1, "SetProcessWindowStation failed\n");
    VAR_9 = FUNC_2(L"TestDesktop", VAR_0, VAR_4, &VAR_11);
    FUNC_6(VAR_9 != ((void*)0) && VAR_11 == 0xfeedf00d, "CreateDesktop failed, got 0x%p, 0x%lx\n", VAR_9, VAR_11);

    FUNC_7(9, VAR_6, ((void*)0), 0);
    FUNC_7(10, VAR_6, "TestDesktop", VAR_3);
    FUNC_7(11, VAR_6, "TestWinsta\\", VAR_3);
    FUNC_7(12, VAR_6, "\\TestDesktop", VAR_3);
    FUNC_7(13, VAR_6, "TestWinsta\\TestDesktop", 0);
    FUNC_7(14, VAR_6, "NonExistantWinsta\\NonExistantDesktop", VAR_3);

    VAR_10 = FUNC_5(VAR_8);
    FUNC_6(VAR_10 != VAR_1, "SetProcessWindowStation failed\n");

    VAR_10 = FUNC_0(VAR_9);
    FUNC_6(VAR_10 != VAR_1, "CloseDesktop failed\n");

    VAR_10 = FUNC_1(VAR_7);
    FUNC_6(VAR_10 != VAR_1, "CloseWindowStation failed\n");
}

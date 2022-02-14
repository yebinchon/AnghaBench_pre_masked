
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef char WCHAR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int * HWND ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    HWND VAR_10;
    BOOL VAR_11;
    WCHAR VAR_12[] = {'t', 'e', 's', 't', 0};
    WCHAR VAR_13[] = {'t', 'e', 's', 0};
    WCHAR VAR_14[] = {'d', 'e', 'a', 'd', 'b', 'e', 'e', 'f', 0};
    WCHAR VAR_15[10];
    DWORD VAR_16;
    DWORD VAR_17;
    INT VAR_18;

    VAR_10 = FUNC_5(VAR_3, ((void*)0));
    FUNC_9(VAR_10 != ((void*)0), "Expect hwnd not null\n");
    FUNC_4(0xdeadbeef);
    VAR_16 = FUNC_0(VAR_15);
    VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
    VAR_17 = FUNC_2();
    if (!VAR_11 && VAR_17 == 0xdeadbeef)
    {
        FUNC_10("BCM_GETNOTE message is unavailable. Skipping note tests\n");
        FUNC_1(VAR_10);
        return;
    }
    FUNC_1(VAR_10);

    for (VAR_18 = VAR_5; VAR_18 <= VAR_4; VAR_18++)
    {
        if (VAR_18 == VAR_4 || VAR_18 == VAR_3)
        {
            VAR_10 = FUNC_5(VAR_18, ((void*)0));
            FUNC_9(VAR_10 != ((void*)0), "Expect hwnd not null\n");


            FUNC_4(0xdeadbeef);
            FUNC_7(VAR_15, VAR_14);
            VAR_16 = FUNC_0(VAR_15);
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
            VAR_17 = FUNC_2();
            FUNC_9(!VAR_11, "Expect BCM_GETNOTE return false\n");
            FUNC_9(!FUNC_6(VAR_15, VAR_14), "Expect note: %s, got: %s\n",
               FUNC_11(VAR_14), FUNC_11(VAR_15));
            FUNC_9(VAR_16 == FUNC_0(VAR_15), "Got: %d\n", VAR_16);
            FUNC_9(VAR_17 == VAR_7, "Expect last error: 0x%08x, got: 0x%08x\n",
               VAR_7, VAR_17);


            VAR_11 = FUNC_3(VAR_10, VAR_1, 0, 0);
            FUNC_9(VAR_11 == 0, "Expect note length: %d, got: %d\n", 0, VAR_11);


            FUNC_4(0xdeadbeef);
            VAR_11 = FUNC_3(VAR_10, VAR_2, 0, (LPARAM)VAR_12);
            FUNC_9(VAR_11, "Expect BCM_SETNOTE return true\n");
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_9, "Expect last error: 0x%08x, got: 0x%08x\n", VAR_9, VAR_17);

            FUNC_4(0xdeadbeef);
            FUNC_7(VAR_15, VAR_14);
            VAR_16 = FUNC_0(VAR_15);
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
            FUNC_9(VAR_11, "Expect BCM_GETNOTE return true\n");
            FUNC_9(!FUNC_6(VAR_15, VAR_12), "Expect note: %s, got: %s\n", FUNC_11(VAR_12),
               FUNC_11(VAR_15));
            FUNC_9(VAR_16 == FUNC_0(VAR_15), "Got: %d\n", VAR_16);
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_9, "Expect last error: 0x%08x, got: 0x%08x\n", VAR_9, VAR_17);

            VAR_11 = FUNC_3(VAR_10, VAR_1, 0, 0);
            FUNC_9(VAR_11 == FUNC_0(VAR_12) - 1, "Got: %d\n", VAR_11);


            FUNC_4(0xdeadbeef);
            FUNC_7(VAR_15, VAR_14);
            VAR_16 = FUNC_0(VAR_12) - 1;
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
            FUNC_9(!VAR_11, "Expect BCM_GETNOTE return false\n");
            FUNC_9(!FUNC_6(VAR_15, VAR_13), "Expect note: %s, got: %s\n", FUNC_11(VAR_13),
               FUNC_11(VAR_15));
            FUNC_9(VAR_16 == FUNC_0(VAR_12), "Got: %d\n", VAR_16);
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_6, "Expect last error: 0x%08x, got: 0x%08x\n",
               VAR_6, VAR_17);


            FUNC_4(0xdeadbeef);
            VAR_11 = FUNC_3(VAR_10, VAR_2, 0, 0);
            FUNC_9(VAR_11, "Expect BCM_SETNOTE return false\n");
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_9, "Expect last error: 0x%08x, got: 0x%08x\n", VAR_9, VAR_17);


            FUNC_4(0xdeadbeef);
            FUNC_7(VAR_15, VAR_14);
            VAR_16 = FUNC_0(VAR_15);
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
            FUNC_9(VAR_11, "Expect BCM_GETNOTE return true\n");
            FUNC_9(FUNC_8(VAR_15) == 0, "Expect note length 0\n");
            FUNC_9(VAR_16 == FUNC_0(VAR_15), "Got: %d\n", VAR_16);
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_9, "Expect last error: 0x%08x, got: 0x%08x\n", VAR_9, VAR_17);
            VAR_11 = FUNC_3(VAR_10, VAR_1, 0, 0);
            FUNC_9(VAR_11 == 0, "Expect note length: %d, got: %d\n", 0, VAR_11);


            FUNC_4(0xdeadbeef);
            VAR_16 = FUNC_0(VAR_15);
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, 0);
            FUNC_9(!VAR_11, "Expect BCM_SETNOTE return false\n");
            FUNC_9(VAR_16 == FUNC_0(VAR_15), "Got: %d\n", VAR_16);
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_7, "Expect last error: 0x%08x, got: 0x%08x\n",
               VAR_7, VAR_17);


            FUNC_4(0xdeadbeef);
            FUNC_7(VAR_15, VAR_14);
            VAR_11 = FUNC_3(VAR_10, VAR_0, 0, (LPARAM)VAR_15);
            FUNC_9(!VAR_11, "Expect BCM_SETNOTE return false\n");
            FUNC_9(!FUNC_6(VAR_15, VAR_14), "Expect note: %s, got: %s\n",
               FUNC_11(VAR_14), FUNC_11(VAR_15));
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_7, "Expect last error: 0x%08x, got: 0x%08x\n",
               VAR_7, VAR_17);


            FUNC_4(0xdeadbeef);
            VAR_16 = 0;
            FUNC_7(VAR_15, VAR_14);
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
            FUNC_9(!VAR_11, "Expect BCM_GETNOTE return false\n");
            FUNC_9(!FUNC_6(VAR_15, VAR_14), "Expect note: %s, got: %s\n",
               FUNC_11(VAR_14), FUNC_11(VAR_15));
            FUNC_9(VAR_16 == 1, "Got: %d\n", VAR_16);
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_6, "Expect last error: 0x%08x, got: 0x%08x\n",
               VAR_6, VAR_17);

            FUNC_1(VAR_10);
        }
        else
        {
            VAR_10 = FUNC_5(VAR_18, ((void*)0));
            FUNC_9(VAR_10 != ((void*)0), "Expect hwnd not null\n");
            FUNC_4(0xdeadbeef);
            VAR_16 = FUNC_0(VAR_15);
            VAR_11 = FUNC_3(VAR_10, VAR_0, (WPARAM)&VAR_16, (LPARAM)VAR_15);
            FUNC_9(!VAR_11, "Expect BCM_GETNOTE return false\n");
            VAR_17 = FUNC_2();
            FUNC_9(VAR_17 == VAR_8, "Expect last error: 0x%08x, got: 0x%08x\n",
               VAR_8, VAR_17);
            FUNC_1(VAR_10);
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int UINT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*,char*,char*,int ,int ,char*,int,int*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_4[] = "kernel32.dll";
    char VAR_5[VAR_3];
    char VAR_6[VAR_3];
    UINT VAR_7;
    DWORD VAR_8;

    FUNC_0(VAR_5, VAR_3);

    FUNC_2(VAR_6, 0, sizeof(VAR_6));
    VAR_7 = FUNC_1(0, "Test", "Testdisk", VAR_5, VAR_4, 0, VAR_2, VAR_6, sizeof(VAR_6) - 1, &VAR_8);
    FUNC_3(VAR_7 == VAR_1, "Expected DPROMPT_SUCCESS, got %u\n", VAR_7);
    FUNC_3(VAR_8 == FUNC_5(VAR_5)+1, "Expect length %u, got %u\n", (DWORD)FUNC_5(VAR_5) + 1, VAR_8);
    FUNC_3(FUNC_4(VAR_5, VAR_6) == 0, "Expected path %s, got %s\n", VAR_5, VAR_6);

    FUNC_2(VAR_6, 0, sizeof(VAR_6));
    VAR_7 = FUNC_1(0, "Test", "Testdisk", VAR_5, VAR_4, 0, VAR_2, 0, 0, &VAR_8);
    FUNC_3(VAR_7 == VAR_1, "Expected DPROMPT_SUCCESS, got %d\n", VAR_7);
    FUNC_3(VAR_8 == FUNC_5(VAR_5)+1, "Expect length %u, got %u\n", (DWORD)FUNC_5(VAR_5) + 1, VAR_8);

    FUNC_2(VAR_6, 0, sizeof(VAR_6));
    VAR_7 = FUNC_1(0, "Test", "Testdisk", VAR_5, VAR_4, 0, VAR_2, VAR_6, 1, &VAR_8);
    FUNC_3(VAR_7 == VAR_0, "Expected DPROMPT_BUFFERTOOSMALL, got %u\n", VAR_7);

    FUNC_2(VAR_6, 0, sizeof(VAR_6));
    VAR_7 = FUNC_1(0, "Test", "Testdisk", VAR_5, VAR_4, 0, VAR_2, VAR_6, FUNC_5(VAR_5), &VAR_8);
    FUNC_3(VAR_7 == VAR_0, "Expected DPROMPT_BUFFERTOOSMALL, got %u\n", VAR_7);

    FUNC_2(VAR_6, 0, sizeof(VAR_6));
    VAR_7 = FUNC_1(0, "Test", "Testdisk", VAR_5, VAR_4, 0, VAR_2, VAR_6, FUNC_5(VAR_5)+1, &VAR_8);
    FUNC_3(VAR_7 == VAR_1, "Expected DPROMPT_SUCCESS, got %u\n", VAR_7);
    FUNC_3(VAR_8 == FUNC_5(VAR_5)+1, "Expect length %u, got %u\n", (DWORD)FUNC_5(VAR_5) + 1, VAR_8);
    FUNC_3(FUNC_4(VAR_5, VAR_6) == 0, "Expected path %s, got %s\n", VAR_5, VAR_6);
}

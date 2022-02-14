
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*,char*,char*,char*,int ,int ,char*,int,int*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    WCHAR VAR_4[] = {'k','e','r','n','e','l','3','2','.','d','l','l','\0'};
    WCHAR VAR_5[] = {'T','e','s','t','\0'};
    WCHAR VAR_6[] = {'T','e','s','t','d','i','s','k','\0'};
    WCHAR VAR_7[VAR_3];
    WCHAR VAR_8[VAR_3];
    UINT VAR_9;
    DWORD VAR_10;

    FUNC_0(VAR_7, VAR_3);

    FUNC_4(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_1(0, VAR_5, VAR_6, VAR_7, VAR_4, 0, VAR_2, VAR_8, VAR_3-1, &VAR_10);
    FUNC_5(VAR_9 == VAR_1, "Expected DPROMPT_SUCCESS, got %u\n", VAR_9);
    FUNC_5(VAR_10 == FUNC_3(VAR_7)+1, "Expect length %u, got %u\n", FUNC_3(VAR_7)+1, VAR_10);
    FUNC_5(FUNC_2(VAR_7, VAR_8) == 0, "Expected path %s, got %s\n", FUNC_6(VAR_7), FUNC_6(VAR_8));

    FUNC_4(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_1(0, VAR_5, VAR_6, VAR_7, VAR_4, 0, VAR_2, 0, 0, &VAR_10);
    FUNC_5(VAR_9 == VAR_1, "Expected DPROMPT_SUCCESS, got %d\n", VAR_9);
    FUNC_5(VAR_10 == FUNC_3(VAR_7)+1, "Expect length %u, got %u\n", FUNC_3(VAR_7)+1, VAR_10);

    FUNC_4(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_1(0, VAR_5, VAR_6, VAR_7, VAR_4, 0, VAR_2, VAR_8, 1, &VAR_10);
    FUNC_5(VAR_9 == VAR_0, "Expected DPROMPT_BUFFERTOOSMALL, got %u\n", VAR_9);

    FUNC_4(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_1(0, VAR_5, VAR_6, VAR_7, VAR_4, 0, VAR_2, VAR_8, FUNC_3(VAR_7), &VAR_10);
    FUNC_5(VAR_9 == VAR_0, "Expected DPROMPT_BUFFERTOOSMALL, got %u\n", VAR_9);

    FUNC_4(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_1(0, VAR_5, VAR_6, VAR_7, VAR_4, 0, VAR_2, VAR_8, FUNC_3(VAR_7)+1, &VAR_10);
    FUNC_5(VAR_9 == VAR_1, "Expected DPROMPT_SUCCESS, got %u\n", VAR_9);
    FUNC_5(VAR_10 == FUNC_3(VAR_7)+1, "Expect length %u, got %u\n", FUNC_3(VAR_7)+1, VAR_10);
    FUNC_5(FUNC_2(VAR_7, VAR_8) == 0, "Expected path %s, got %s\n", FUNC_6(VAR_7), FUNC_6(VAR_8));
}

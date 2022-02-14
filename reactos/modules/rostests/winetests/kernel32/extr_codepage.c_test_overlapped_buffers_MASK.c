
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strW ;
typedef int strA ;
typedef int buf ;
typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_1[] = {'j','u','s','t',' ','a',' ','t','e','s','t',0};
    static const char VAR_2[] = "just a test";
    char VAR_3[256];
    int VAR_4;

    FUNC_1(0xdeadbeef);
    FUNC_4(VAR_3 + 1, VAR_1, sizeof(VAR_1));
    VAR_4 = FUNC_2(VAR_0, 0, (WCHAR *)(VAR_3 + 1), -1, VAR_3, sizeof(VAR_3), ((void*)0), ((void*)0));
    FUNC_5(VAR_4 == sizeof(VAR_2), "unexpected ret %d\n", VAR_4);
    FUNC_5(!FUNC_3(VAR_3, VAR_2, sizeof(VAR_2)), "conversion failed: %s\n", VAR_3);
    FUNC_5(FUNC_0() == 0xdeadbeef, "GetLastError() is %u\n", FUNC_0());
}

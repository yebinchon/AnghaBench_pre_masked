
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_1;

    VAR_1 = FUNC_0("test", "test");
    FUNC_1(VAR_1 == 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("a", "z");
    FUNC_1(VAR_1 < 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("z", "a");
    FUNC_1(VAR_1 > 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("\xa5", "\xb9");
    FUNC_1(VAR_1 < 0, "_stricmp returned %d\n", VAR_1);

    if(!FUNC_2(VAR_0, "polish")) {
        FUNC_3("stricmp tests\n");
        return;
    }

    VAR_1 = FUNC_0("test", "test");
    FUNC_1(VAR_1 == 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("a", "z");
    FUNC_1(VAR_1 < 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("z", "a");
    FUNC_1(VAR_1 > 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("\xa5", "\xb9");
    FUNC_1(VAR_1 == 0, "_stricmp returned %d\n", VAR_1);
    VAR_1 = FUNC_0("a", "\xb9");
    FUNC_1(VAR_1 < 0, "_stricmp returned %d\n", VAR_1);

    FUNC_2(VAR_0, "C");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BOOL VAR_4;
    LONG VAR_5;
    HKEY VAR_6;
    HKEY VAR_7 = 0;


    VAR_5 = FUNC_3(VAR_1, VAR_3, &VAR_6);
    if (VAR_5 == VAR_0)
    {
        FUNC_9("Not enough access rights\n");
        return;
    }

    if (!VAR_5)
        VAR_5 = FUNC_5(VAR_6, VAR_2, &VAR_7);

    if (!VAR_5)
        FUNC_4(VAR_7, "winetest_faultrep.exe");


    FUNC_6(0xdeadbeef);
    VAR_4 = FUNC_0(((void*)0));
    FUNC_8(!VAR_4, "got %d and 0x%x (expected FALSE)\n", VAR_4, FUNC_1());

    FUNC_6(0xdeadbeef);
    VAR_4 = FUNC_0("");
    FUNC_8(!VAR_4, "got %d and 0x%x (expected FALSE)\n", VAR_4, FUNC_1());

    FUNC_6(0xdeadbeef);

    VAR_4 = FUNC_0("winetest_faultrep.exe");
    if (FUNC_7())
    {

        FUNC_8(!VAR_4, "AddERExcludedApplicationA should have failed got %d\n", VAR_4);
    }
    else
    {
        FUNC_8(VAR_4, "AddERExcludedApplicationA failed (le=0x%x)\n", FUNC_1());


        FUNC_6(0xdeadbeef);
        VAR_4 = FUNC_0("winetest_faultrep.exe");
        FUNC_8(VAR_4, "AddERExcludedApplicationA failed (le=0x%x)\n", FUNC_1());
    }


    FUNC_4(VAR_7, "winetest_faultrep.exe");

    FUNC_2(VAR_7);
    FUNC_2(VAR_6);
}

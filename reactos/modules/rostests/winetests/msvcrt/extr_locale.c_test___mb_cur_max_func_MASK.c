
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 () ;
 int* FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_1;

    FUNC_3(VAR_0, "C");


    if(!&FUNC_1)
        FUNC_5("Skipping ___mb_cur_max_func tests\n");
    else {
        VAR_1 = FUNC_1();
        FUNC_0(VAR_1 == 1, "mb_cur_max = %d, expected 1\n", VAR_1);


        if (!FUNC_3(VAR_0, "chinese"))
            FUNC_5("Skipping test with chinese locale\n");
        else {
            VAR_1 = FUNC_1();
            FUNC_0(VAR_1 == 2, "mb_cur_max = %d, expected 2\n", VAR_1);
            FUNC_3(VAR_0, "C");
        }
    }


    if (!&FUNC_2)
        FUNC_4("Skipping __p___mb_cur_max tests\n");
    else {
        VAR_1 = *FUNC_2();
        FUNC_0(VAR_1 == 1, "mb_cur_max = %d, expected 1\n", VAR_1);


        if (!FUNC_3(VAR_0, "chinese"))
            FUNC_5("Skipping test with chinese locale\n");
        else {
            VAR_1 = *FUNC_2();
            FUNC_0(VAR_1 == 2, "mb_cur_max = %d, expected 2\n", VAR_1);
            FUNC_3(VAR_0, "C");
        }
    }
}

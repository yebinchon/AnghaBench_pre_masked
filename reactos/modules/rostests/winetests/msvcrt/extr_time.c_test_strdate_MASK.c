
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int*,int*,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_3[16], * VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    errno_t VAR_10;

    VAR_4 = FUNC_0(VAR_3);
    FUNC_1(VAR_4 == VAR_3, "Wrong return value\n");
    VAR_9 = FUNC_4(VAR_3);
    FUNC_1(VAR_9 == 8, "Wrong length: returned %d, should be 8\n", VAR_9);
    VAR_8 = FUNC_3(VAR_3, "%02d/%02d/%02d", &VAR_5, &VAR_6, &VAR_7);
    FUNC_1(VAR_8 == 3, "Wrong format: count = %d, should be 3\n", VAR_8);

    if(!&FUNC_2) {
        FUNC_5("Skipping _strdate_s tests\n");
        return;
    }

    VAR_2 = 0;
    VAR_10 = FUNC_2(((void*)0), 1);
    FUNC_1(VAR_10 == VAR_0, "err = %d\n", VAR_10);
    FUNC_1(VAR_2 == VAR_0, "errno = %d\n", VAR_2);

    VAR_3[0] = 'x';
    VAR_3[1] = 'x';
    VAR_10 = FUNC_2(VAR_3, 8);
    FUNC_1(VAR_10 == VAR_1, "err = %d\n", VAR_10);
    FUNC_1(VAR_2 == VAR_1, "errno = %d\n", VAR_2);
    FUNC_1(VAR_3[0] == '\0', "date[0] != '\\0'\n");
    FUNC_1(VAR_3[1] == 'x', "date[1] != 'x'\n");

    VAR_10 = FUNC_2(VAR_3, 9);
    FUNC_1(VAR_10 == 0, "err = %x\n", VAR_10);
}

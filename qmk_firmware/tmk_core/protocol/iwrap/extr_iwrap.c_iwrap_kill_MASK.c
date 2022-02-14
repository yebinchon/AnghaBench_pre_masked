
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* VAR_0 ;
 char FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;

void FUNC_8(void) {
    char VAR_2;
    FUNC_2("LIST");
    FUNC_0(500);

    while ((VAR_2 = FUNC_5()) && VAR_2 != '\n')
        ;
    if (FUNC_6(VAR_0 + VAR_1, "LIST ", 5)) {
        FUNC_3("no connection to kill.\n");
        return;
    }

    for (uint8_t VAR_3 = 10; VAR_3; VAR_3--)
        while ((VAR_2 = FUNC_5()) && VAR_2 != ' ')
            ;

    char *VAR_4 = VAR_0 + VAR_1 - 5;
    FUNC_7(VAR_4, "KILL ", 5);
    FUNC_7(VAR_4 + 22, "\n\0", 2);
    FUNC_4(VAR_4);
    FUNC_2(VAR_4);
    FUNC_0(500);

    FUNC_1();
}

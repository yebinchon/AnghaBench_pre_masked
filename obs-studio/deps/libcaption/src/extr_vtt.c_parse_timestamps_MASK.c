
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_t ;


 char* FUNC_0 (int) ;
 double FUNC_1 (char*) ;
 int FUNC_2 (char*,double) ;
 int FUNC_3 (int const*,char*,char*,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

void FUNC_6(const utf8_char_t* VAR_0, double* VAR_1, double* VAR_2, char** VAR_3)
{
    char VAR_4[32];
    char VAR_5[32];
    char VAR_6[1024];

    int VAR_7 = FUNC_3(VAR_0, " %31s --> %31s%1023[^\n\r]", VAR_4, VAR_5, VAR_6);
    *VAR_1 = -1;
    *VAR_3 = ((void*)0);

    FUNC_2("Matches: %d\n", VAR_7);

    if (VAR_7 >= 1) {
        *VAR_1 = FUNC_1(VAR_4);
        FUNC_2("Start pts: %f\n", *VAR_1);
    }
    if (VAR_7 >= 2) {
        *VAR_2 = FUNC_1(VAR_5);
    }
    if ((VAR_7 == 3) && (FUNC_4(VAR_6) > 0)) {
        int VAR_8 = FUNC_4(VAR_6);
        *VAR_3 = FUNC_0(VAR_8 + 1);
        FUNC_5(*VAR_3, VAR_6, VAR_8);
        (*VAR_3)[VAR_8] = '\0';
    }
}

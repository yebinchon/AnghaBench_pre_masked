
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(char* VAR_0, size_t VAR_1)
{
    int VAR_2 = 0;
    char* VAR_3;


    char *VAR_4 = VAR_0;
    if (*VAR_4 == '-' || *VAR_4 == '+')




        ++VAR_4;
    while (*VAR_4 && FUNC_1(FUNC_0(*VAR_4))) {
        ++VAR_4;
    }
    if (*VAR_4 == '.') {
        if (FUNC_1(FUNC_0(*(VAR_4+1)))) {




        }
        else {




            ++VAR_4;
            VAR_3 = "0";
            VAR_2 = 1;
        }
    }
    else {
        VAR_3 = ".0";
        VAR_2 = 2;
    }
    if (VAR_2) {
        size_t VAR_5 = FUNC_4(VAR_0);
        if (VAR_5 + VAR_2 + 1 >= VAR_1) {





        }
        else {
            FUNC_3(VAR_4 + VAR_2, VAR_4, VAR_0 + FUNC_4(VAR_0) - VAR_4 + 1);
            FUNC_2(VAR_4, VAR_3, VAR_2);
        }
    }
}

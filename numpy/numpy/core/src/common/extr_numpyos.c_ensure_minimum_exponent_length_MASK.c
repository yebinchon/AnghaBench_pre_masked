
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(char* VAR_1, size_t VAR_2)
{
    char *VAR_3 = FUNC_5(VAR_1, "eE");
    if (VAR_3 && (*(VAR_3 + 1) == '-' || *(VAR_3 + 1) == '+')) {
        char *VAR_4 = VAR_3 + 2;
        int VAR_5 = 0;
        int VAR_6 = 0;
        int VAR_7 = 1;
        int VAR_8;


        VAR_3 += 2;


        while (*VAR_3 && FUNC_2(FUNC_0(*VAR_3))) {
            if (VAR_7 && *VAR_3 == '0') {
                ++VAR_6;
            }
            if (*VAR_3 != '0') {
                VAR_7 = 0;
            }
            ++VAR_3;
            ++VAR_5;
        }

        VAR_8 = VAR_5 - VAR_6;
        if (VAR_5 == VAR_0) {




        }
        else if (VAR_5 > VAR_0) {
            int VAR_9;





            if (VAR_8 < VAR_0) {
                VAR_8 = VAR_0;
            }
            VAR_9 = VAR_5 - VAR_8;





            FUNC_1(VAR_9 >= 0);





            FUNC_3(VAR_4, VAR_4 + VAR_9, VAR_8 + 1);
        }
        else {




            int VAR_10 = VAR_0 - VAR_5;
            if (VAR_4 + VAR_10 + VAR_5 + 1 < VAR_1 + VAR_2) {
                FUNC_3(VAR_4 + VAR_10, VAR_4, VAR_5 + 1);
                FUNC_4(VAR_4, '0', VAR_10);
            }
        }
    }
}

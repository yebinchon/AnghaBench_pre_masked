
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(FILE *VAR_3, char *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_3);





        VAR_2 = 0;
        VAR_5 = FUNC_3(VAR_3);
        if (VAR_5 == VAR_1) {
                if (FUNC_2(VAR_3))
                        return FUNC_1(VAR_0);

                if (VAR_4)
                        *VAR_4 = 0;

                return 0;
        }

        if (VAR_4)
                *VAR_4 = VAR_5;

        return 1;
}

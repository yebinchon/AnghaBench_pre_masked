
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef scalar_t__ FILE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,char*,unsigned long*) ;

int FUNC_4(FILE *VAR_2, pid_t *VAR_3) {
        unsigned long VAR_4;




        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_1 = 0;
        if (FUNC_3(VAR_2, "%lu", &VAR_4) != 1) {

                if (FUNC_2(VAR_2))
                        return 0;

                return FUNC_1(VAR_0);
        }

        if (VAR_4 <= 0)
                return -VAR_0;

        *VAR_3 = (pid_t) VAR_4;
        return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_0)
{


    time_t VAR_1 = 0;
    time_t VAR_2;
    int VAR_3 = 0;
    do {
        FUNC_4(1000);
        FUNC_3(&VAR_2);
        if (!VAR_1) {
            VAR_1 = VAR_2;
        }
        else if ((VAR_0 != FUNC_2()) ||
                    (VAR_2 - VAR_1 > 10)) {
            VAR_3 = 1;
        }
        else if (VAR_2 - VAR_1 > 5) {
            FUNC_0(1, "Timed out waiting to be dumped");
            FUNC_1(1);
        }
    } while (!VAR_3);
}

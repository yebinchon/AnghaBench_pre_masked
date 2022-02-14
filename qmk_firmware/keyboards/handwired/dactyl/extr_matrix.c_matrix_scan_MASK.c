
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;

uint8_t FUNC_7(void)
{
    if (VAR_6) {
        if (++VAR_5 == 0) {


            FUNC_2("trying to reset expander\n");
            FUNC_0();
            if (VAR_6) {
                FUNC_2("left side not responding\n");
            } else {
                FUNC_2("left side attached\n");
            }
        }
    }


    for (uint8_t VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
            FUNC_3(VAR_7, VAR_9);

    }
    FUNC_1();
    return 1;
}

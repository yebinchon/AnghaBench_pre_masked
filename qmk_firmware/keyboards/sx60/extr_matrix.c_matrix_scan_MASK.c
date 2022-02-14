
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

uint8_t FUNC_6(void)
{
    if (VAR_7) {

        if (++VAR_6 == 0) {


            FUNC_2("trying to reset mcp23018\n");
            VAR_7 = FUNC_0();
            if (VAR_7) {
                FUNC_2("left side not responding\n");
            } else {
                FUNC_2("left side attached\n");
            }
        }
    }


    for (uint8_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
            FUNC_3(VAR_4, VAR_8);

    }
    FUNC_1();
    return 1;
}

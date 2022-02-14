
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ FUNC_6 (size_t,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;

uint8_t FUNC_13(void)
{
    uint8_t VAR_5;
    VAR_5 = FUNC_10();
    if (!VAR_5) {
        if (FUNC_11(VAR_2) > VAR_0) {

            FUNC_8();



            return 0;
        }

    }

   VAR_2 = FUNC_12();
   VAR_1=0;

    FUNC_4(VAR_5); FUNC_3(" ");


    switch (VAR_5) {
        case 0xFD:
             FUNC_9("rstD ");
            return 0;
        case 0xFA:
            FUNC_9("rstA ");
            return 0;
    }

    if (FUNC_1(VAR_5)) {
        if (VAR_5 == VAR_3) {




            VAR_3=0;
            return 0;
        }

        if (FUNC_6(FUNC_2(VAR_5), FUNC_0(VAR_5))) {
            VAR_4[FUNC_2(VAR_5)] &= ~(1<<FUNC_0(VAR_5));
            VAR_3=VAR_5;
        }
    } else {

        if (!FUNC_6(FUNC_2(VAR_5), FUNC_0(VAR_5))) {
            VAR_4[FUNC_2(VAR_5)] |= (1<<FUNC_0(VAR_5));

        }
    }

    FUNC_7();
    return VAR_5;
}

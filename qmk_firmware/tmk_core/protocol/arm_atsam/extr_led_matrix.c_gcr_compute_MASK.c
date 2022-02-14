
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;

void FUNC_3(void) {
    uint8_t VAR_21 = VAR_2;
    uint8_t VAR_22 = VAR_12;
    if (VAR_18 < VAR_7) {
        FUNC_1(0);

        VAR_20 = 20;
        VAR_10 = 0;
        VAR_17 = 1;
        return;
    } else if (VAR_20 > 1) {
        VAR_20--;
        return;
    } else if (VAR_20 == 1) {
        FUNC_1(1);
        FUNC_0("USB: WARNING: Re-enabling LED drivers\r\n");
        VAR_20 = 0;
        return;
    }

    if (VAR_17) {
        if (VAR_19 < VAR_9)
            VAR_21 = VAR_0;
        else if (VAR_19 > VAR_8 && VAR_10 < VAR_22)
            VAR_21 = VAR_1;
        else if (VAR_10 > VAR_22)
            VAR_21 = VAR_0;
    } else {
        if (VAR_10 < VAR_22)
            VAR_21 = VAR_1;
        else if (VAR_10 > VAR_22)
            VAR_21 = VAR_0;
    }

    if (VAR_21 == VAR_2) {
        VAR_13 = 0;
    } else if (VAR_21 == VAR_1) {
        if (VAR_4 > VAR_3 - VAR_10)
            VAR_10 = VAR_3;
        else
            VAR_10 += VAR_4;
        VAR_13 = 0;
    } else if (VAR_21 == VAR_0) {
        if (VAR_4 > VAR_10)
        {
            VAR_10 = 0;

            if (VAR_16 != VAR_5)
            {
                if (VAR_16 == VAR_6)
                {
                    VAR_13++;
                    if (VAR_13 > 200)
                    {
                        FUNC_2(VAR_5);
                        VAR_15 = 0;
                        if (VAR_15)
                            FUNC_0("USB: Disabling extra port until replug and manual mode toggle!\r\n");
                        else
                            FUNC_0("USB: Disabling extra port until replug!\r\n");
                    }
                }
            }
        } else {

            VAR_10 -= VAR_4;
            VAR_13 = 0;
        }
    }
}

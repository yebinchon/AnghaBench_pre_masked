
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int enable; } ;
typedef int GPTDriver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (float) ;
 int FUNC_5 (float) ;
 TYPE_1__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int*** VAR_15 ;
 scalar_t__ VAR_16 ;
 double VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int,int) ;
 float FUNC_7 (int) ;
 scalar_t__ VAR_21 ;
 float FUNC_8 (float) ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_9(GPTDriver *VAR_24) {
    float VAR_25;

    if (VAR_18) {
        if (VAR_23 > 0) {
            float VAR_26 = 0;
            if (VAR_23 > 1) {
                if (VAR_20 == 0) {
                    if (VAR_8) {
                        if (VAR_7 != 0 && VAR_7 < VAR_5[VAR_23 - 2] && VAR_7 < VAR_5[VAR_23 - 2] * FUNC_6(2, -440 / VAR_5[VAR_23 - 2] / 12 / 2)) {
                            VAR_7 = VAR_7 * FUNC_6(2, 440 / VAR_7 / 12 / 2);
                        } else if (VAR_7 != 0 && VAR_7 > VAR_5[VAR_23 - 2] && VAR_7 > VAR_5[VAR_23 - 2] * FUNC_6(2, 440 / VAR_5[VAR_23 - 2] / 12 / 2)) {
                            VAR_7 = VAR_7 * FUNC_6(2, -440 / VAR_7 / 12 / 2);
                        } else {
                            VAR_7 = VAR_5[VAR_23 - 2];
                        }
                    } else {
                        VAR_7 = VAR_5[VAR_23 - 2];
                    }
                    VAR_26 = VAR_7;

                }

                if (VAR_4 < 65535) {
                    VAR_4++;
                }

                VAR_26 = FUNC_8(VAR_26);

                if (VAR_26 < 30.517578125) {
                    VAR_26 = 30.52;
                }

                if (VAR_1 != (uint16_t)VAR_26) {
                    FUNC_5(VAR_26);
                } else {
                    FUNC_1();
                }

            }

            if (VAR_20 > 0) {
                if (VAR_23 > 1) {
                    VAR_22 %= VAR_23;
                    if (VAR_17++ > (VAR_5[VAR_22] / VAR_20)) {
                        VAR_22 = (VAR_22 + 1) % VAR_23;
                        VAR_17 = 0.0;
                    }
                }
                VAR_25 = VAR_5[VAR_22];

            } else {
                if (VAR_8) {
                    if (VAR_6 != 0 && VAR_6 < VAR_5[VAR_23 - 1] && VAR_6 < VAR_5[VAR_23 - 1] * FUNC_6(2, -440 / VAR_5[VAR_23 - 1] / 12 / 2)) {
                        VAR_6 = VAR_6 * FUNC_6(2, 440 / VAR_6 / 12 / 2);
                    } else if (VAR_6 != 0 && VAR_6 > VAR_5[VAR_23 - 1] && VAR_6 > VAR_5[VAR_23 - 1] * FUNC_6(2, 440 / VAR_5[VAR_23 - 1] / 12 / 2)) {
                        VAR_6 = VAR_6 * FUNC_6(2, -440 / VAR_6 / 12 / 2);
                    } else {
                        VAR_6 = VAR_5[VAR_23 - 1];
                    }
                } else {
                    VAR_6 = VAR_5[VAR_23 - 1];
                }
                VAR_25 = VAR_6;

            }

            if (VAR_4 < 65535) {
                VAR_4++;
            }

            VAR_25 = FUNC_8(VAR_25);

            if (VAR_25 < 30.517578125) {
                VAR_25 = 30.52;
            }

            if (VAR_0 != (uint16_t)VAR_25) {
                FUNC_4(VAR_25);
            } else {
                FUNC_0();
            }

        }
    }

    if (VAR_19) {
        if (VAR_9 > 0) {







            VAR_25 = VAR_9;


            if (VAR_4 < 65535) {
                VAR_4++;
            }
            VAR_25 = FUNC_8(VAR_25);

            if (VAR_0 != (uint16_t)VAR_25) {
                FUNC_4(VAR_25);
                FUNC_5(VAR_25);
            }

        } else {


        }

        VAR_11++;
        bool VAR_27 = 0;
        if (VAR_0 > 0) {
            if (!VAR_12)
                VAR_27 = (VAR_11 >= (VAR_10 * 8 - 1));
            else
                VAR_27 = (VAR_11 >= (VAR_10 * 8));
        } else {
            VAR_27 = (VAR_11 >= (VAR_10 * 8));
        }

        if (VAR_27) {
            VAR_3++;
            if (VAR_3 >= VAR_14) {
                if (VAR_16) {
                    VAR_3 = 0;
                } else {
                    FUNC_2();
                    FUNC_3();

                    VAR_19 = 0;
                    return;
                }
            }
            if (!VAR_12) {
                VAR_12 = 1;
                VAR_3--;
                if ((*VAR_15)[VAR_3][0] == (*VAR_15)[VAR_3 + 1][0]) {
                    VAR_9 = 0;
                    VAR_10 = 1;
                } else {
                    VAR_9 = (*VAR_15)[VAR_3][0];
                    VAR_10 = 1;
                }
            } else {
                VAR_12 = 0;
                VAR_4 = 0;
                VAR_9 = (*VAR_15)[VAR_3][0];
                VAR_10 = ((*VAR_15)[VAR_3][1] / 4) * (((float)VAR_13) / 100);
            }

            VAR_11 = 0;
        }
    }

    if (!VAR_2.enable) {
        VAR_19 = 0;
        VAR_18 = 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;






 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_4 () ;
 int * VAR_11 ;
 size_t VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* VAR_13 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 char* VAR_14 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,int ,int) ;
 scalar_t__ VAR_15 ;

bool FUNC_14(uint16_t VAR_16, keyrecord_t *VAR_17) {
    if (VAR_16 == VAR_8 && VAR_17->event.pressed) {
        FUNC_6();
        return 0;
    }

    if (VAR_15 && VAR_17->event.pressed) {
        if (VAR_16 == VAR_7 && VAR_17->event.pressed) {
            FUNC_5();
            return 0;
        }

        if ((VAR_16 >= VAR_5 && VAR_16 <= VAR_6) || (VAR_16 >= VAR_3 && VAR_16 <= VAR_4)) {
            VAR_16 = VAR_16 & 0xFF;
        }

        if (VAR_16 < 256) {
            uint8_t VAR_18;
            char VAR_19;
            switch (VAR_16) {
                case 133:
                case 131:
                    FUNC_9();
                    VAR_12 = 0;
                    FUNC_8();
                    return 0;
                    break;
                case 132:
                    FUNC_1("\n");
                    FUNC_6();
                    return 0;
                    break;
                case 135:
                    VAR_18 = FUNC_11(VAR_10);
                    if (VAR_18 > 0) {
                        VAR_10[VAR_18 - 1] = 0;
                        return 1;
                    } else {
                        FUNC_3();
                        return 0;
                    }
                    break;
                case 130:
                    return 0;
                    break;
                case 129:
                    return 0;
                    break;
                case 128:
                    FUNC_4();
                    if (VAR_12 <= VAR_0 - 1) {
                        VAR_18 = FUNC_11(VAR_10);
                        for (int VAR_20 = 0; VAR_20 < VAR_18; ++VAR_20) {
                            FUNC_10(FUNC_2(VAR_9));

                        }
                        FUNC_13(VAR_10, VAR_11[VAR_12], 80);

                        FUNC_10(VAR_10);
                        ++VAR_12;
                    }
                    return 0;
                    break;
                case 134:
                    FUNC_4();
                    if (VAR_12 >= 0) {
                        VAR_18 = FUNC_11(VAR_10);
                        for (int VAR_21 = 0; VAR_21 < VAR_18; ++VAR_21) {
                            FUNC_10(FUNC_2(VAR_9));

                        }
                        FUNC_13(VAR_10, VAR_11[VAR_12], 79);

                        FUNC_10(VAR_10);
                        --VAR_12;
                    }
                    return 0;
                    break;
                default:
                    if (VAR_16 <= 58) {
                        VAR_19 = 0;
                        if (FUNC_7() & (FUNC_0(VAR_1) | FUNC_0(VAR_2))) {
                            VAR_19 = VAR_14[VAR_16];
                        } else if (FUNC_7() == 0) {
                            VAR_19 = VAR_13[VAR_16];
                        }
                        if (VAR_19 != 0) {
                            FUNC_12(VAR_10, &VAR_19, 1);
                        }
                    }
                    break;
            }
        }
    }
    return 1;
}

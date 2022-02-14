
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;




 int VAR_0 ;

 int VAR_1 ;

 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

uint8_t FUNC_5(void) {
    static uint8_t VAR_2 = 0x00;
    static uint8_t VAR_3 = 0x00;
    static uint8_t VAR_4 = 0x00;
    uint8_t VAR_5, VAR_6, VAR_7;

    if (VAR_2) {
        VAR_5 = VAR_2;
        VAR_2 = 0x00;
        return VAR_5;
    }
    if (VAR_3) {
        VAR_5 = VAR_3;
        VAR_3 = 0x00;
        return VAR_5;
    }

    if (VAR_4) {
        VAR_5 = VAR_4;
        VAR_4 = 0x00;
    } else {
        VAR_5 = FUNC_2();
    }
    switch (FUNC_1(VAR_5)) {
        case 129:
            VAR_6 = FUNC_2();
            switch (FUNC_1(VAR_6)) {
                case 130:
                case 133:
                case 132:
                case 131:
                    if (FUNC_0(VAR_6)) {

                        VAR_2 = (FUNC_4(VAR_6) | VAR_0);
                        return (FUNC_4(VAR_6) | VAR_1);
                    }
                    break;
            }

            return (FUNC_4(VAR_6) | VAR_1);
            break;
        case 128:
            VAR_6 = FUNC_2();
            switch (FUNC_1(VAR_6)) {
                case 128:

                    VAR_4 = VAR_6;
                    return FUNC_4(VAR_5);
                    break;
                case 129:

                    VAR_7 = FUNC_2();
                    switch (FUNC_1(VAR_7)) {
                        case 130:
                        case 133:
                        case 132:
                        case 131:
                            if (FUNC_0(VAR_5)) {
                                if (FUNC_0(VAR_7)) {

                                    FUNC_3("(4)\n");
                                    VAR_3 = FUNC_4(VAR_5);
                                    VAR_2 = (FUNC_4(VAR_7) | VAR_0);
                                    return (FUNC_4(VAR_7) | VAR_1);
                                } else {

                                    FUNC_3("(3)\n");
                                    return (FUNC_4(VAR_5));
                                }
                            } else {
                                if (FUNC_0(VAR_7)) {

                                    FUNC_3("(2)\n");
                                    VAR_2 = (FUNC_4(VAR_7) | VAR_0);
                                    return (FUNC_4(VAR_7) | VAR_1);
                                } else {

                                    FUNC_3("(1)\n");
                                    return (FUNC_4(VAR_7) | VAR_0);
                                }
                            }
                            break;
                        default:

                            VAR_2 = (FUNC_4(VAR_7) | VAR_1);
                            return FUNC_4(VAR_5);
                            break;
                    }
                    break;
                default:

                    VAR_2 = FUNC_4(VAR_6);
                    return FUNC_4(VAR_5);
                    break;
            }
            break;
        default:

            return FUNC_4(VAR_5);
            break;
    }
}

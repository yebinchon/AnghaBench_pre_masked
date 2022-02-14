
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ftp_result_t ;
typedef int _i32 ;
struct TYPE_3__ {int uservalid; int passvalid; } ;
struct TYPE_4__ {int state; scalar_t__ lc_sd; scalar_t__ c_sd; int substate; scalar_t__ d_sd; int special_file; scalar_t__ ld_sd; int dtimeout; scalar_t__ dBuffer; int ctimeout; TYPE_1__ loggin; int logginRetries; int txRetries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*,int ,int ) ;
 TYPE_2__ VAR_8 ;
 int FUNC_4 (char*,int ,int *) ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (scalar_t__,scalar_t__*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 () ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 () ;

void FUNC_19 (void) {
    switch (VAR_8.state) {
        case 134:
            FUNC_12();
            break;
        case 131:
            if (FUNC_18() && FUNC_3(&VAR_8.lc_sd, VAR_5, VAR_4 - 1)) {
                VAR_8.state = 132;
            }
            break;
        case 132:
            if (VAR_8.c_sd < 0 && VAR_8.substate == 129) {
                if (VAR_2 == FUNC_11(VAR_8.lc_sd, &VAR_8.c_sd)) {
                    VAR_8.txRetries = 0;
                    VAR_8.logginRetries = 0;
                    VAR_8.ctimeout = 0;
                    VAR_8.loggin.uservalid = 0;
                    VAR_8.loggin.passvalid = 0;
                    FUNC_15 (VAR_9, "/");
                    FUNC_10 (220, "MicroPython FTP Server");
                    break;
                }
            }
            if (FUNC_0()) {
                if (VAR_8.c_sd > 0 && VAR_8.substate != 128) {
                    FUNC_5();
                    if (VAR_8.state != 132) {
                        break;
                    }
                }
            }
            break;
        case 133:
            break;
        case 135:

            if (FUNC_0()) {
                uint32_t VAR_10;
                FUNC_4((char *)VAR_8.dBuffer, VAR_3, &VAR_10);
                if (VAR_10 > 0) {
                    FUNC_8(VAR_10);
                } else {
                    FUNC_10(226, ((void*)0));
                    VAR_8.state = 133;
                }
                VAR_8.ctimeout = 0;
            }
            break;
        case 136:

            if (FUNC_0()) {
                uint32_t VAR_11;
                ftp_result_t VAR_12;
                VAR_8.ctimeout = 0;
                VAR_12 = FUNC_6 ((char *)VAR_8.dBuffer, VAR_3, &VAR_11);
                if (VAR_12 == VAR_1) {
                    FUNC_10(451, ((void*)0));
                    VAR_8.state = 133;
                }
                else {
                    if (VAR_11 > 0) {
                        FUNC_8(VAR_11);
                    }
                    if (VAR_12 == VAR_2) {
                        FUNC_10(226, ((void*)0));
                        VAR_8.state = 133;
                    }
                }
            }
            break;
        case 137:
            if (FUNC_0()) {
                _i32 VAR_13;
                ftp_result_t VAR_14;
                if (VAR_2 == (VAR_14 = FUNC_7(VAR_8.d_sd, VAR_8.dBuffer, VAR_3, &VAR_13))) {
                    VAR_8.dtimeout = 0;
                    VAR_8.ctimeout = 0;

                    if (VAR_8.special_file) {
                        if (FUNC_17(VAR_8.dBuffer, VAR_13)) {
                            break;
                        }
                    }

                    else if (VAR_2 == FUNC_13 ((char *)VAR_8.dBuffer, VAR_13)) {
                        break;
                    }
                    FUNC_10(451, ((void*)0));
                    VAR_8.state = 133;
                }
                else if (VAR_14 == VAR_0) {
                    if (VAR_8.dtimeout++ > VAR_7 / VAR_6) {
                        FUNC_1();
                        FUNC_10(426, ((void*)0));
                        VAR_8.state = 133;
                    }
                }
                else {
                    if (VAR_8.special_file) {
                        VAR_8.special_file = 0;
                        FUNC_16();
                    }
                    FUNC_1();
                    FUNC_10(226, ((void*)0));
                    VAR_8.state = 133;
                }
            }
            break;
        default:
            break;
    }

    switch (VAR_8.substate) {
    case 129:
        break;
    case 128:
        if (VAR_2 == FUNC_11(VAR_8.ld_sd, &VAR_8.d_sd)) {
            VAR_8.dtimeout = 0;
            VAR_8.substate = 130;
        }
        else if (VAR_8.dtimeout++ > VAR_7 / VAR_6) {
            VAR_8.dtimeout = 0;

            FUNC_14(&VAR_8.ld_sd);
            VAR_8.substate = 129;
        }
        break;
    case 130:
        if (VAR_8.state == 132 && VAR_8.dtimeout++ > VAR_7 / VAR_6) {

            FUNC_14(&VAR_8.ld_sd);
            FUNC_14(&VAR_8.d_sd);
            FUNC_2 ();
            VAR_8.substate = 129;
        }
        break;
    default:
        break;
    }


    FUNC_9();


    if (VAR_8.d_sd < 0 && (VAR_8.state > 132)) {
        VAR_8.substate = 129;
        VAR_8.state = 132;
    }
}

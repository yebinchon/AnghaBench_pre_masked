
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bStatus; unsigned long usRCA; void* ucCardType; int ulCapClass; int ulVersion; } ;
typedef scalar_t__ DSTATUS ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned long FUNC_1 (TYPE_1__*) ;
 unsigned long FUNC_2 (int ,int) ;
 int FUNC_3 (int ,unsigned long*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__ VAR_13 ;

DSTATUS FUNC_4 (void) {
    unsigned long VAR_14;
    unsigned long VAR_15[4];

    if (VAR_13.bStatus != 0) {
        VAR_13.bStatus = VAR_12;

        if (FUNC_2(VAR_6, 0) == 0) {

            VAR_14 = FUNC_2(VAR_8,0x000001A5);
            FUNC_3(VAR_11,VAR_15);


            if (VAR_14 == 0 && ((VAR_15[0] & 0xFF) == 0xA5)) {

                VAR_13.ulVersion = VAR_3;
                VAR_13.ucCardType = VAR_2;


                do {

                    FUNC_2(VAR_5, 0);
                    VAR_14 = FUNC_2(VAR_7, 0x40E00000);


                    FUNC_3(VAR_11, VAR_15);

                } while (((VAR_15[0] >> 31) == 0));

                if (VAR_15[0] & (1UL<<30)) {
                    VAR_13.ulCapClass = VAR_0;
                }
                VAR_13.bStatus = 0;
            }

            else {

                do {
                    FUNC_2(VAR_5, 0);
                    VAR_14 = FUNC_2(VAR_7,0x00E00000);
                    if (VAR_14 == 0) {

                        FUNC_3(VAR_11, VAR_15);
                    }
                } while (((VAR_14 == 0) && (VAR_15[0] >> 31) == 0));

                if (VAR_14 == 0) {
                    VAR_13.ucCardType = VAR_2;
                    VAR_13.bStatus = 0;
                }
                else {
                    if (FUNC_2(VAR_9, 0) == 0) {

                        VAR_13.ucCardType = VAR_1;
                    }
                }
            }
        }


        if (VAR_13.bStatus == 0) {
            VAR_14 = FUNC_2(VAR_4, 0);
            if (VAR_14 == 0) {
                FUNC_2(VAR_10,0);
                FUNC_3(VAR_11, VAR_15);


                VAR_13.usRCA = (VAR_15[0] >> 16);


                FUNC_0(&VAR_13);
            }


            VAR_14 = FUNC_1(&VAR_13);
            if (VAR_14 == 0) {
                VAR_13.bStatus = 0;
            }
        }
    }

    return VAR_13.bStatus;
}

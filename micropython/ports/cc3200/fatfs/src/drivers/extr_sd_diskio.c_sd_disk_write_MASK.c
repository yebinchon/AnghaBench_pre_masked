
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int bStatus; scalar_t__ ulCapClass; scalar_t__ ucCardType; int usRCA; } ;
typedef int DWORD ;
typedef int DRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;

DRESULT FUNC_4 (const BYTE* VAR_15, DWORD VAR_16, UINT VAR_17) {
    DRESULT VAR_18 = VAR_7;
    unsigned long VAR_19;

    if (VAR_17 > 0) {

        if (VAR_14.bStatus & VAR_13) {
            return VAR_8;
        }


        if (VAR_14.ulCapClass == VAR_0) {
            VAR_16 = VAR_16 * VAR_12;
        }


        FUNC_1(VAR_10, VAR_17);


        VAR_19 = (VAR_12 * VAR_17) / 4;


        if (VAR_17 == 1) {

            if (FUNC_0(VAR_6, VAR_16) == 0) {

                while (VAR_19--) {
                    FUNC_2 (VAR_10, (*(unsigned long *)VAR_15));
                    VAR_15 += 4;
                }

                while (!(FUNC_3(VAR_10) & VAR_11));
                VAR_18 = VAR_9;
            }
        }
        else {

            if (VAR_14.ucCardType == VAR_1) {
                FUNC_0(VAR_2,VAR_14.usRCA << 16);
                FUNC_0(VAR_3, VAR_17);
            }


            if (FUNC_0(VAR_5, VAR_16) == 0) {

                while (VAR_19--) {
                    FUNC_2(VAR_10, (*(unsigned long *)VAR_15));
                    VAR_15 += 4;
                }

                while (!(FUNC_3(VAR_10) & VAR_11));
                FUNC_0(VAR_4, 0);
                while (!(FUNC_3(VAR_10) & VAR_11));
                VAR_18 = VAR_9;
            }
        }
    }

    return VAR_18;
}

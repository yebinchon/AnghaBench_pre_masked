
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int bStatus; scalar_t__ ulCapClass; } ;
typedef int DWORD ;
typedef int DRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;

DRESULT FUNC_4 (BYTE* VAR_12, DWORD VAR_13, UINT VAR_14) {
    DRESULT VAR_15 = VAR_4;
    unsigned long VAR_16;

    if (VAR_14 > 0) {

        if (VAR_11.bStatus & VAR_10) {
            return VAR_5;
        }


        if (VAR_11.ulCapClass == VAR_0) {
            VAR_13 = VAR_13 * VAR_9;
        }


        FUNC_1(VAR_7, VAR_14);


        VAR_16 = (VAR_9 * VAR_14) / 4;


        if (VAR_14 == 1) {

            if (FUNC_0(VAR_2, VAR_13) == 0) {

                while (VAR_16--) {
                    FUNC_2(VAR_7, (unsigned long *)VAR_12);
                    VAR_12 += 4;
                }
                VAR_15 = VAR_6;
            }
        }
        else {

            if (FUNC_0(VAR_1, VAR_13) == 0) {

                while (VAR_16--) {
                    FUNC_2(VAR_7, (unsigned long *)VAR_12);
                    VAR_12 += 4;
                }
                FUNC_0(VAR_3, 0);
                while (!(FUNC_3(VAR_7) & VAR_8));
                VAR_15 = VAR_6;
            }
        }
    }

    return VAR_15;
}

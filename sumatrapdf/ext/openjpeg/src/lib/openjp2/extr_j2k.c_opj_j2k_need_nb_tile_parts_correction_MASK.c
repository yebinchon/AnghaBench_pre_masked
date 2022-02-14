
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_stream_private_t ;
typedef int opj_event_mgr_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_OFF_T ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__,int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_8(opj_stream_private_t
        *VAR_4, OPJ_UINT32 VAR_5, OPJ_BOOL* VAR_6,
        opj_event_mgr_t * VAR_7)
{
    OPJ_BYTE VAR_8[10];
    OPJ_OFF_T VAR_9;
    OPJ_UINT32 VAR_10;
    OPJ_UINT32 VAR_11;
    OPJ_UINT32 VAR_12, VAR_13, VAR_14, VAR_15;


    *VAR_6 = VAR_2;

    if (!FUNC_3(VAR_4)) {

        return VAR_3;
    }

    VAR_9 = FUNC_7(VAR_4);
    if (VAR_9 == -1) {

        return VAR_3;
    }

    for (;;) {

        if (FUNC_4(VAR_4, VAR_8, 2, VAR_7) != 2) {

            if (! FUNC_5(VAR_4, VAR_9, VAR_7)) {
                return VAR_2;
            }
            return VAR_3;
        }


        FUNC_2(VAR_8, &VAR_10, 2);

        if (VAR_10 != VAR_1) {

            if (! FUNC_5(VAR_4, VAR_9, VAR_7)) {
                return VAR_2;
            }
            return VAR_3;
        }


        if (FUNC_4(VAR_4, VAR_8, 2, VAR_7) != 2) {
            FUNC_0(VAR_7, VAR_0, "Stream too short\n");
            return VAR_2;
        }


        FUNC_2(VAR_8, &VAR_11, 2);


        if (VAR_11 != 10) {
            FUNC_0(VAR_7, VAR_0, "Inconsistent marker size\n");
            return VAR_2;
        }
        VAR_11 -= 2;

        if (FUNC_4(VAR_4, VAR_8, VAR_11,
                                 VAR_7) != VAR_11) {
            FUNC_0(VAR_7, VAR_0, "Stream too short\n");
            return VAR_2;
        }

        if (! FUNC_1(VAR_8, VAR_11, &VAR_12,
                                     &VAR_13, &VAR_14, &VAR_15, VAR_7)) {
            return VAR_2;
        }

        if (VAR_12 == VAR_5) {

            break;
        }

        if (VAR_13 < 14U) {


            if (! FUNC_5(VAR_4, VAR_9, VAR_7)) {
                return VAR_2;
            }
            return VAR_3;
        }
        VAR_13 -= 12U;

        if (FUNC_6(VAR_4, (OPJ_OFF_T)(VAR_13),
                            VAR_7) != (OPJ_OFF_T)(VAR_13)) {

            if (! FUNC_5(VAR_4, VAR_9, VAR_7)) {
                return VAR_2;
            }
            return VAR_3;
        }
    }


    if (VAR_14 == VAR_15) {
        *VAR_6 = VAR_3;
    }

    if (! FUNC_5(VAR_4, VAR_9, VAR_7)) {
        return VAR_2;
    }
    return VAR_3;
}

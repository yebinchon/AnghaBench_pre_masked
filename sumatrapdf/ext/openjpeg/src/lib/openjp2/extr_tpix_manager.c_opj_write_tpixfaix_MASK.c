
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tp_start_pos; int tp_end_pos; } ;
typedef TYPE_2__ opj_tp_info_t ;
typedef int opj_stream_private_t ;
typedef int opj_event_mgr_t ;
struct TYPE_8__ {int tw; int th; int* numdecompos; TYPE_1__* tile; } ;
typedef TYPE_3__ opj_codestream_info_t ;
struct TYPE_6__ {int num_tps; TYPE_2__* tp; } ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(int VAR_1,
                       int VAR_2,
                       opj_codestream_info_t VAR_3,
                       int VAR_4,
                       opj_stream_private_t *VAR_5,
                       opj_event_mgr_t * VAR_6)
{
    OPJ_UINT32 VAR_7;
    OPJ_OFF_T VAR_8;
    OPJ_UINT32 VAR_9, VAR_10;
    OPJ_UINT32 VAR_11;
    OPJ_UINT32 VAR_12;
    OPJ_UINT32 VAR_13;
    opj_tp_info_t VAR_14;
    OPJ_BYTE VAR_15 [8];
    OPJ_UINT32 VAR_16;

    VAR_12 = (OPJ_UINT32)FUNC_0(VAR_3);

    if (VAR_4 > FUNC_6(2, 32)) {
        VAR_13 = 8;
        VAR_16 = VAR_12 == 1 ? 1 : 3;
    } else {
        VAR_13 = 4;
        VAR_16 = VAR_12 == 1 ? 0 : 2;
    }

    VAR_8 = FUNC_3(VAR_5);
    FUNC_2(VAR_5, 4, VAR_6);
    FUNC_5(VAR_15, VAR_0, 4);
    FUNC_4(VAR_5, VAR_15, 4, VAR_6);
    FUNC_5(VAR_15, VAR_16, 1);
    FUNC_4(VAR_5, VAR_15, 1, VAR_6);

    FUNC_5(VAR_15, VAR_12,
                    VAR_13);
    FUNC_4(VAR_5, VAR_15, VAR_13, VAR_6);
    FUNC_5(VAR_15, (OPJ_UINT32)(VAR_3.tw * VAR_3.th),
                    VAR_13);
    FUNC_4(VAR_5, VAR_15, VAR_13, VAR_6);

    for (VAR_9 = 0; VAR_9 < (OPJ_UINT32)(VAR_3.tw * VAR_3.th); VAR_9++) {
        for (VAR_10 = 0; VAR_10 < (OPJ_UINT32)VAR_3.tile[VAR_9].num_tps; VAR_10++) {
            VAR_14 = VAR_3.tile[VAR_9].tp[VAR_10];

            FUNC_5(VAR_15, (OPJ_UINT32)(VAR_14.tp_start_pos - VAR_1),
                            VAR_13);
            FUNC_4(VAR_5, VAR_15, VAR_13, VAR_6);
            FUNC_5(VAR_15,
                            (OPJ_UINT32)(VAR_14.tp_end_pos - VAR_14.tp_start_pos + 1),
                            VAR_13);
            FUNC_4(VAR_5, VAR_15, VAR_13, VAR_6);

            if (VAR_16 & 0x02) {
                if (VAR_3.tile[VAR_9].num_tps == 1 && VAR_3.numdecompos[VAR_2] > 1) {
                    VAR_11 = (OPJ_UINT32)(VAR_3.numdecompos[VAR_2] + 1);
                } else {
                    VAR_11 = VAR_10 + 1;
                }

                FUNC_5(VAR_15, VAR_11, 4);
                FUNC_4(VAR_5, VAR_15, 4, VAR_6);



            }

        }

        while (VAR_10 < VAR_12) {

            FUNC_5(VAR_15, 0,
                            VAR_13);
            FUNC_4(VAR_5, VAR_15, VAR_13, VAR_6);
            FUNC_5(VAR_15, 0,
                            VAR_13);
            FUNC_4(VAR_5, VAR_15, VAR_13, VAR_6);

            if (VAR_16 & 0x02) {
                FUNC_5(VAR_15, 0, 4);
            }
            FUNC_4(VAR_5, VAR_15, 4, VAR_6);
            VAR_10++;
        }
    }

    VAR_7 = (OPJ_UINT32)(FUNC_3(VAR_5) - VAR_8);
    FUNC_1(VAR_5, VAR_8, VAR_6);
    FUNC_5(VAR_15, VAR_7, 4);
    FUNC_4(VAR_5, VAR_15, 4, VAR_6);
    FUNC_1(VAR_5, VAR_8 + VAR_7, VAR_6);

    return (int)VAR_7;
}

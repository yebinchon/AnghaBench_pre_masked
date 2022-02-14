
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* ph; int* pw; TYPE_2__* packet; } ;
typedef TYPE_1__ opj_tile_info_t ;
typedef int opj_stream_private_t ;
struct TYPE_6__ {int end_ph_pos; int start_pos; } ;
typedef TYPE_2__ opj_packet_info_t ;
typedef int opj_event_mgr_t ;
struct TYPE_7__ {int* numdecompos; int numlayers; int tw; int th; int prog; int numcomps; TYPE_1__* tile; } ;
typedef TYPE_3__ opj_codestream_info_t ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 size_t VAR_0 ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (int *,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int *) ;
 int FUNC_5 (int *,size_t,int) ;
 int FUNC_6 (int,int) ;
 int VAR_1 ;

int FUNC_7(int VAR_2, int VAR_3, opj_codestream_info_t VAR_4,
                       OPJ_BOOL VAR_5, int VAR_6, opj_stream_private_t *VAR_7,
                       opj_event_mgr_t * VAR_8)
{
    OPJ_UINT32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    opj_tile_info_t *VAR_14;
    opj_packet_info_t VAR_15;
    int VAR_16, VAR_17, VAR_18;
    OPJ_UINT32 VAR_19;
    int VAR_20, VAR_21, VAR_22;
    OPJ_BYTE VAR_23 [8];
    OPJ_OFF_T VAR_24;
    OPJ_UINT32 VAR_25;

    VAR_15.end_ph_pos = VAR_15.start_pos = -1;
    (void)VAR_5;


    if (VAR_6 > FUNC_6(2, 32)) {
        VAR_13 = 8;
        VAR_10 = 1;
    } else {
        VAR_13 = 4;
        VAR_10 = 0;
    }

    VAR_24 = FUNC_3(VAR_7);
    FUNC_2(VAR_7, 4, VAR_8);
    FUNC_5(VAR_23, VAR_0, 4);
    FUNC_4(VAR_7, VAR_23, 4, VAR_8);
    FUNC_5(VAR_23, VAR_10, 1);
    FUNC_4(VAR_7, VAR_23, 1, VAR_8);

    VAR_12 = 0;
    for (VAR_11 = 0; VAR_11 <= (OPJ_UINT32)VAR_4.numdecompos[VAR_3]; VAR_11++) {
        VAR_12 += (OPJ_UINT32)(VAR_4.tile[0].ph[VAR_11] * VAR_4.tile[0].pw[VAR_11] *
                             VAR_4.numlayers);
    }

    FUNC_5(VAR_23, VAR_12, VAR_13);
    FUNC_4(VAR_7, VAR_23, VAR_13, VAR_8);
    FUNC_5(VAR_23, (OPJ_UINT32)(VAR_4.tw * VAR_4.th),
                    VAR_13);
    FUNC_4(VAR_7, VAR_23, VAR_13, VAR_8);

    for (VAR_9 = 0; VAR_9 < (OPJ_UINT32)(VAR_4.tw * VAR_4.th); VAR_9++) {
        VAR_14 = &VAR_4.tile[ VAR_9];

        VAR_19 = 0;
        VAR_20 = VAR_4.numdecompos[VAR_3] + 1;

        for (VAR_16 = 0; VAR_16 < VAR_20 ; VAR_16++) {
            VAR_21 = VAR_14->pw[VAR_16] * VAR_14->ph[VAR_16];
            for (VAR_17 = 0; VAR_17 < VAR_21; VAR_17++) {
                VAR_22 = VAR_4.numlayers;
                for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {

                    switch (VAR_4.prog) {
                    case 131:
                        VAR_15 = VAR_14->packet[((VAR_18 * VAR_20 + VAR_16) * VAR_4.numcomps +
                                                                               VAR_3) * VAR_21 + VAR_17];
                        break;
                    case 129:
                        VAR_15 = VAR_14->packet[((VAR_16 * VAR_22 + VAR_18) * VAR_4.numcomps +
                                                                                  VAR_3) * VAR_21 + VAR_17];
                        break;
                    case 128:
                        VAR_15 = VAR_14->packet[((VAR_16 * VAR_21 + VAR_17) * VAR_4.numcomps +
                                                                                 VAR_3) * VAR_22 + VAR_18];
                        break;
                    case 130:
                        VAR_15 = VAR_14->packet[((VAR_17 * VAR_4.numcomps + VAR_3) * VAR_20 +
                                                                                           VAR_16) * VAR_22 + VAR_18];
                        break;
                    case 132:
                        VAR_15 = VAR_14->packet[((VAR_3 * VAR_21 + VAR_17) * VAR_20 + VAR_16) *
                                                                                 VAR_22 + VAR_18];
                        break;
                    default:
                        FUNC_0(VAR_1, "failed to ppix indexing\n");
                    }

                    FUNC_5(VAR_23, (OPJ_UINT32)(VAR_15.start_pos - VAR_2),
                                    VAR_13);
                    FUNC_4(VAR_7, VAR_23, VAR_13, VAR_8);
                    FUNC_5(VAR_23,
                                    (OPJ_UINT32)(VAR_15.end_ph_pos - VAR_15.start_pos + 1),
                                    VAR_13);
                    FUNC_4(VAR_7, VAR_23, VAR_13, VAR_8);

                    VAR_19++;
                }
            }
        }


        while (VAR_19 < VAR_12) {
            FUNC_5(VAR_23, 0,
                            VAR_13);
            FUNC_4(VAR_7, VAR_23, VAR_13, VAR_8);
            FUNC_5(VAR_23, 0,
                            VAR_13);
            FUNC_4(VAR_7, VAR_23, VAR_13, VAR_8);
            VAR_19++;
        }
    }

    VAR_25 = (OPJ_UINT32)(FUNC_3(VAR_7) - VAR_24);
    FUNC_1(VAR_7, VAR_24, VAR_8);
    FUNC_5(VAR_23, VAR_25, 4);
    FUNC_4(VAR_7, VAR_23, 4, VAR_8);
    FUNC_1(VAR_7, VAR_24 + VAR_25, VAR_8);

    return (int)VAR_25;
}

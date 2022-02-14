
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
struct TYPE_6__ {int end_pos; int end_ph_pos; int start_pos; } ;
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
    OPJ_BYTE VAR_9 [8];
    OPJ_UINT32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    OPJ_UINT32 VAR_15;
    OPJ_OFF_T VAR_16;
    opj_tile_info_t *VAR_17;
    opj_packet_info_t VAR_18;
    int VAR_19, VAR_20, VAR_21;
    OPJ_UINT32 VAR_22;
    int VAR_23, VAR_24, VAR_25;
    VAR_18.end_pos = VAR_18.end_ph_pos = VAR_18.start_pos = -1;
    (void)VAR_5;

    if (VAR_6 > FUNC_6(2, 32)) {
        VAR_14 = 8;
        VAR_11 = 1;
    } else {
        VAR_14 = 4;
        VAR_11 = 0;
    }

    VAR_16 = FUNC_3(VAR_7);
    FUNC_2(VAR_7, 4, VAR_8);
    FUNC_5(VAR_9, VAR_0, 4);
    FUNC_5(VAR_9, VAR_11, 1);
    FUNC_4(VAR_7, VAR_9, 1,
                          VAR_8);

    VAR_13 = 0;
    for (VAR_12 = 0; VAR_12 <= (OPJ_UINT32)VAR_4.numdecompos[VAR_3]; VAR_12++) {
        VAR_13 += (OPJ_UINT32)(VAR_4.tile[0].ph[VAR_12] * VAR_4.tile[0].pw[VAR_12] *
                             VAR_4.numlayers);
    }

    FUNC_5(VAR_9, VAR_13, VAR_14);
    FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);
    FUNC_5(VAR_9, (OPJ_UINT32)(VAR_4.tw * VAR_4.th),
                    VAR_14);
    FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);

    for (VAR_10 = 0; VAR_10 < (OPJ_UINT32)(VAR_4.tw * VAR_4.th); VAR_10++) {
        VAR_17 = &VAR_4.tile[ VAR_10];

        VAR_22 = 0;
        VAR_23 = VAR_4.numdecompos[VAR_3] + 1;

        for (VAR_19 = 0; VAR_19 < VAR_23 ; VAR_19++) {
            VAR_24 = VAR_17->pw[VAR_19] * VAR_17->ph[VAR_19];
            for (VAR_20 = 0; VAR_20 < VAR_24; VAR_20++) {
                VAR_25 = VAR_4.numlayers;
                for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {

                    switch (VAR_4.prog) {
                    case 131:
                        VAR_18 = VAR_17->packet[((VAR_21 * VAR_23 + VAR_19) * VAR_4.numcomps +
                                                                               VAR_3) * VAR_24 + VAR_20];
                        break;
                    case 129:
                        VAR_18 = VAR_17->packet[((VAR_19 * VAR_25 + VAR_21) * VAR_4.numcomps +
                                                                                  VAR_3) * VAR_24 + VAR_20];
                        break;
                    case 128:
                        VAR_18 = VAR_17->packet[((VAR_19 * VAR_24 + VAR_20) * VAR_4.numcomps +
                                                                                 VAR_3) * VAR_25 + VAR_21];
                        break;
                    case 130:
                        VAR_18 = VAR_17->packet[((VAR_20 * VAR_4.numcomps + VAR_3) * VAR_23 +
                                                                                           VAR_19) * VAR_25 + VAR_21];
                        break;
                    case 132:
                        VAR_18 = VAR_17->packet[((VAR_3 * VAR_24 + VAR_20) * VAR_23 + VAR_19) *
                                                                                 VAR_25 + VAR_21];
                        break;
                    default:
                        FUNC_0(VAR_1, "failed to ppix indexing\n");
                    }

                    FUNC_5(VAR_9, (OPJ_UINT32)(VAR_18.start_pos - VAR_2),
                                    VAR_14);
                    FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);
                    FUNC_5(VAR_9,
                                    (OPJ_UINT32)(VAR_18.end_pos - VAR_18.start_pos + 1),
                                    VAR_14);
                    FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);

                    VAR_22++;
                }
            }
        }

        while (VAR_22 < VAR_13) {
            FUNC_5(VAR_9, 0,
                            VAR_14);
            FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);
            FUNC_5(VAR_9, 0,
                            VAR_14);
            FUNC_4(VAR_7, VAR_9, VAR_14, VAR_8);
            VAR_22++;
        }
    }

    VAR_15 = (OPJ_UINT32)(FUNC_3(VAR_7) - VAR_16);
    FUNC_1(VAR_7, VAR_16, VAR_8);
    FUNC_5(VAR_9, VAR_15, 4);
    FUNC_4(VAR_7, VAR_9, 4, VAR_8);
    FUNC_1(VAR_7, VAR_16 + VAR_15, VAR_8);

    return (int)VAR_15;
}

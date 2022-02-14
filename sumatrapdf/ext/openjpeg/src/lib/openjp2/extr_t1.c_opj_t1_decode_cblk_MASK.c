
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int len; int real_num_passes; } ;
typedef TYPE_2__ opj_tcd_seg_t ;
struct TYPE_21__ {int numbps; int numchunks; int* decoded_data; int real_num_segs; TYPE_2__* segs; TYPE_1__* chunks; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_3__ opj_tcd_cblk_dec_t ;
struct TYPE_23__ {scalar_t__ bp; scalar_t__ end; scalar_t__ start; int end_of_byte_stream_counter; scalar_t__ lut_ctxno_zc_orient; } ;
struct TYPE_22__ {int cblkdatabuffersize; scalar_t__* cblkdatabuffer; int* data; scalar_t__ mustuse_cblkdatabuffer; TYPE_5__ mqc; } ;
typedef TYPE_4__ opj_t1_t ;
typedef int opj_mutex_t ;
typedef TYPE_5__ opj_mqc_t ;
typedef int opj_event_mgr_t ;
struct TYPE_19__ {int len; scalar_t__* data; } ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef scalar_t__ OPJ_BYTE ;
typedef scalar_t__ OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (int *,int ,char*,int,...) ;
 int FUNC_3 (TYPE_5__*,scalar_t__*,int,int) ;
 int FUNC_4 (TYPE_5__*,scalar_t__*,int,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__*,int) ;
 int FUNC_10 (TYPE_4__*,int,int) ;
 int FUNC_11 (TYPE_4__*,int,int) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*,int,int) ;
 int FUNC_15 (TYPE_4__*,int,int) ;
 int FUNC_16 (TYPE_5__*) ;

__attribute__((used)) static OPJ_BOOL FUNC_17(opj_t1_t *VAR_12,
                                   opj_tcd_cblk_dec_t* VAR_13,
                                   OPJ_UINT32 VAR_14,
                                   OPJ_UINT32 VAR_15,
                                   OPJ_UINT32 VAR_16,
                                   opj_event_mgr_t *VAR_17,
                                   opj_mutex_t* VAR_18,
                                   OPJ_BOOL VAR_19)
{
    opj_mqc_t *VAR_20 = &(VAR_12->mqc);

    OPJ_INT32 VAR_21;
    OPJ_UINT32 VAR_22;
    OPJ_UINT32 VAR_23, VAR_24;
    OPJ_BYTE* VAR_25 = ((void*)0);
    OPJ_UINT32 VAR_26 = 0;
    OPJ_BYTE VAR_27 = VAR_9;
    OPJ_INT32* VAR_28 = ((void*)0);

    VAR_20->lut_ctxno_zc_orient = VAR_11 + (VAR_14 << 9);

    if (!FUNC_10(
                VAR_12,
                (OPJ_UINT32)(VAR_13->x1 - VAR_13->x0),
                (OPJ_UINT32)(VAR_13->y1 - VAR_13->y0))) {
        return VAR_4;
    }

    VAR_21 = (OPJ_INT32)(VAR_15 + VAR_13->numbps);
    if (VAR_21 >= 31) {
        if (VAR_18) {
            FUNC_7(VAR_18);
        }
        FUNC_2(VAR_17, VAR_0,
                      "opj_t1_decode_cblk(): unsupported bpno_plus_one = %d >= 31\n",
                      VAR_21);
        if (VAR_18) {
            FUNC_8(VAR_18);
        }
        return VAR_4;
    }
    VAR_22 = 2;

    FUNC_5(VAR_20);
    FUNC_6(VAR_20, VAR_7, 0, 46);
    FUNC_6(VAR_20, VAR_6, 0, 3);
    FUNC_6(VAR_20, VAR_8, 0, 4);




    if (VAR_13->numchunks > 1 || VAR_12->mustuse_cblkdatabuffer) {
        OPJ_UINT32 VAR_29;
        OPJ_UINT32 VAR_30;


        VAR_30 = 0;
        for (VAR_29 = 0; VAR_29 < VAR_13->numchunks; VAR_29++) {
            VAR_30 += VAR_13->chunks[VAR_29].len;
        }


        if (VAR_30 + VAR_3 > VAR_12->cblkdatabuffersize) {
            VAR_25 = (OPJ_BYTE*)FUNC_9(VAR_12->cblkdatabuffer,
                                              VAR_30 + VAR_3);
            if (VAR_25 == ((void*)0)) {
                return VAR_4;
            }
            VAR_12->cblkdatabuffer = VAR_25;
            FUNC_1(VAR_12->cblkdatabuffer + VAR_30, 0, VAR_3);
            VAR_12->cblkdatabuffersize = VAR_30 + VAR_3;
        }


        VAR_25 = VAR_12->cblkdatabuffer;
        VAR_30 = 0;
        for (VAR_29 = 0; VAR_29 < VAR_13->numchunks; VAR_29++) {
            FUNC_0(VAR_25 + VAR_30, VAR_13->chunks[VAR_29].data, VAR_13->chunks[VAR_29].len);
            VAR_30 += VAR_13->chunks[VAR_29].len;
        }
    } else if (VAR_13->numchunks == 1) {
        VAR_25 = VAR_13->chunks[0].data;
    } else {


        return VAR_5;
    }



    if (VAR_13->decoded_data) {
        VAR_28 = VAR_12->data;
        VAR_12->data = VAR_13->decoded_data;
    }

    for (VAR_23 = 0; VAR_23 < VAR_13->real_num_segs; ++VAR_23) {
        opj_tcd_seg_t *VAR_31 = &VAR_13->segs[VAR_23];


        VAR_27 = ((VAR_21 <= ((OPJ_INT32)(VAR_13->numbps)) - 4) && (VAR_22 < 2) &&
                (VAR_16 & VAR_1)) ? VAR_10 : VAR_9;

        if (VAR_27 == VAR_10) {
            FUNC_4(VAR_20, VAR_25 + VAR_26, VAR_31->len,
                                 VAR_3);
        } else {
            FUNC_3(VAR_20, VAR_25 + VAR_26, VAR_31->len,
                             VAR_3);
        }
        VAR_26 += VAR_31->len;

        for (VAR_24 = 0; (VAR_24 < VAR_31->real_num_passes) &&
                (VAR_21 >= 1); ++VAR_24) {
            switch (VAR_22) {
            case 0:
                if (VAR_27 == VAR_10) {
                    FUNC_15(VAR_12, VAR_21, (OPJ_INT32)VAR_16);
                } else {
                    FUNC_14(VAR_12, VAR_21, (OPJ_INT32)VAR_16);
                }
                break;
            case 1:
                if (VAR_27 == VAR_10) {
                    FUNC_13(VAR_12, VAR_21);
                } else {
                    FUNC_12(VAR_12, VAR_21);
                }
                break;
            case 2:
                FUNC_11(VAR_12, VAR_21, (OPJ_INT32)VAR_16);
                break;
            }

            if ((VAR_16 & VAR_2) && VAR_27 == VAR_9) {
                FUNC_5(VAR_20);
                FUNC_6(VAR_20, VAR_7, 0, 46);
                FUNC_6(VAR_20, VAR_6, 0, 3);
                FUNC_6(VAR_20, VAR_8, 0, 4);
            }
            if (++VAR_22 == 3) {
                VAR_22 = 0;
                VAR_21--;
            }
        }

        FUNC_16(VAR_20);
    }

    if (VAR_19) {
        if (VAR_20->bp + 2 < VAR_20->end) {
            if (VAR_18) {
                FUNC_7(VAR_18);
            }
            FUNC_2(VAR_17, VAR_0,
                          "PTERM check failure: %d remaining bytes in code block (%d used / %d)\n",
                          (int)(VAR_20->end - VAR_20->bp) - 2,
                          (int)(VAR_20->bp - VAR_20->start),
                          (int)(VAR_20->end - VAR_20->start));
            if (VAR_18) {
                FUNC_8(VAR_18);
            }
        } else if (VAR_20->end_of_byte_stream_counter > 2) {
            if (VAR_18) {
                FUNC_7(VAR_18);
            }
            FUNC_2(VAR_17, VAR_0,
                          "PTERM check failure: %d synthetized 0xFF markers read\n",
                          VAR_20->end_of_byte_stream_counter);
            if (VAR_18) {
                FUNC_8(VAR_18);
            }
        }
    }


    if (VAR_13->decoded_data) {
        VAR_12->data = VAR_28;
    }

    return VAR_5;
}

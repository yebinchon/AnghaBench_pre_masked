
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int distotile; } ;
typedef TYPE_1__ opj_tcd_tile_t ;
struct TYPE_26__ {int term; double distortiondec; int rate; int len; } ;
typedef TYPE_2__ opj_tcd_pass_t ;
struct TYPE_27__ {int x0; int y0; int x1; int y1; int numbps; int totalpasses; int* data; TYPE_2__* passes; } ;
typedef TYPE_3__ opj_tcd_cblk_enc_t ;
struct TYPE_29__ {scalar_t__ lut_ctxno_zc_orient; } ;
struct TYPE_28__ {int w; int h; int data_stride; int * data; TYPE_5__ mqc; } ;
typedef TYPE_4__ opj_t1_t ;
typedef TYPE_5__ opj_mqc_t ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef double OPJ_FLOAT64 ;
typedef scalar_t__ OPJ_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*,int ,int ,int) ;
 int FUNC_17 (TYPE_4__*,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int,scalar_t__,int) ;
 int FUNC_19 (TYPE_4__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_20 (TYPE_4__*,scalar_t__,scalar_t__*,scalar_t__,int) ;
 double FUNC_21 (scalar_t__,int,int,int,scalar_t__,int,double,int,double const*,int) ;
 int FUNC_22 (char*,int,...) ;

__attribute__((used)) static void FUNC_23(opj_t1_t *VAR_11,
                               opj_tcd_cblk_enc_t* VAR_12,
                               OPJ_UINT32 VAR_13,
                               OPJ_UINT32 VAR_14,
                               OPJ_UINT32 VAR_15,
                               OPJ_UINT32 VAR_16,
                               OPJ_FLOAT64 VAR_17,
                               OPJ_UINT32 VAR_18,
                               OPJ_UINT32 VAR_19,
                               opj_tcd_tile_t * VAR_20,
                               const OPJ_FLOAT64 * VAR_21,
                               OPJ_UINT32 VAR_22)
{
    OPJ_FLOAT64 VAR_23 = 0.0;

    opj_mqc_t *VAR_24 = &(VAR_11->mqc);

    OPJ_UINT32 VAR_25;
    OPJ_INT32 VAR_26;
    OPJ_UINT32 VAR_27;
    OPJ_INT32 VAR_28 = 0;
    OPJ_INT32 VAR_29;
    OPJ_UINT32 VAR_30, VAR_31;
    OPJ_BYTE VAR_32 = VAR_8;
    OPJ_FLOAT64 VAR_33;






    VAR_24->lut_ctxno_zc_orient = VAR_10 + (VAR_13 << 9);

    VAR_29 = 0;
    for (VAR_30 = 0; VAR_30 < VAR_11->w; ++VAR_30) {
        for (VAR_31 = 0; VAR_31 < VAR_11->h; ++VAR_31) {
            OPJ_INT32 VAR_34 = FUNC_1(VAR_11->data[VAR_30 + VAR_31 * VAR_11->data_stride]);
            VAR_29 = FUNC_4(VAR_29, VAR_34);
        }
    }

    VAR_12->numbps = VAR_29 ? (OPJ_UINT32)((FUNC_3(VAR_29) + 1) -
                                      VAR_7) : 0;
    if (VAR_12->numbps == 0) {
        VAR_12->totalpasses = 0;
        return;
    }

    VAR_26 = (OPJ_INT32)(VAR_12->numbps - 1);
    VAR_27 = 2;

    FUNC_13(VAR_24);
    FUNC_16(VAR_24, VAR_5, 0, 46);
    FUNC_16(VAR_24, VAR_4, 0, 3);
    FUNC_16(VAR_24, VAR_6, 0, 4);
    FUNC_10(VAR_24, VAR_12->data);

    for (VAR_25 = 0; VAR_26 >= 0; ++VAR_25) {
        opj_tcd_pass_t *VAR_35 = &VAR_12->passes[VAR_25];
        VAR_32 = ((VAR_26 < ((OPJ_INT32)(VAR_12->numbps) - 4)) && (VAR_27 < 2) &&
                (VAR_18 & VAR_0)) ? VAR_9 : VAR_8;


        if (VAR_25 > 0 && VAR_12->passes[VAR_25 - 1].term) {
            if (VAR_32 == VAR_9) {
                FUNC_7(VAR_24);
            } else {
                FUNC_14(VAR_24);
            }
        }

        switch (VAR_27) {
        case 0:
            FUNC_20(VAR_11, VAR_26, &VAR_28, VAR_32, VAR_18);
            break;
        case 1:
            FUNC_19(VAR_11, VAR_26, &VAR_28, VAR_32);
            break;
        case 2:
            FUNC_17(VAR_11, VAR_26, &VAR_28, VAR_18);

            if (VAR_18 & VAR_3) {
                FUNC_15(VAR_24);
            }
            break;
        }


        VAR_33 = FUNC_21(VAR_28, VAR_14, VAR_15, VAR_13, VAR_26, VAR_16,
                                        VAR_17, VAR_19, VAR_21, VAR_22) ;
        VAR_23 += VAR_33;
        VAR_20->distotile += VAR_33;
        VAR_35->distortiondec = VAR_23;

        if (FUNC_18(VAR_12, VAR_18, VAR_26, VAR_27)) {

            if (VAR_32 == VAR_9) {
                FUNC_5(VAR_24, VAR_18 & VAR_1);
            } else {
                if (VAR_18 & VAR_1) {
                    FUNC_8(VAR_24);
                } else {
                    FUNC_9(VAR_24);
                }
            }
            VAR_35->term = 1;
            VAR_35->rate = FUNC_11(VAR_24);
        } else {

            OPJ_UINT32 VAR_36;
            if (VAR_32 == VAR_9) {
                VAR_36 = FUNC_6(
                                       VAR_24, (VAR_18 & VAR_1));
            } else {
                VAR_36 = 3;
            }
            VAR_35->term = 0;
            VAR_35->rate = FUNC_11(VAR_24) + VAR_36;
        }

        if (++VAR_27 == 3) {
            VAR_27 = 0;
            VAR_26--;
        }


        if (VAR_18 & VAR_2) {
            FUNC_12(VAR_24);
        }
    }

    VAR_12->totalpasses = VAR_25;

    if (VAR_12->totalpasses) {

        OPJ_UINT32 VAR_37 = FUNC_11(VAR_24);
        for (VAR_25 = VAR_12->totalpasses; VAR_25 > 0;) {
            opj_tcd_pass_t *VAR_38 = &VAR_12->passes[--VAR_25];
            if (VAR_38->rate > VAR_37) {
                VAR_38->rate = VAR_37;
            } else {
                VAR_37 = VAR_38->rate;
            }
        }
    }

    for (VAR_25 = 0; VAR_25 < VAR_12->totalpasses; VAR_25++) {
        opj_tcd_pass_t *VAR_39 = &VAR_12->passes[VAR_25];



        FUNC_2(VAR_39->rate > 0);
        if (VAR_12->data[VAR_39->rate - 1] == 0xFF) {
            VAR_39->rate--;
        }
        VAR_39->len = VAR_39->rate - (VAR_25 == 0 ? 0 : VAR_12->passes[VAR_25 - 1].rate);
    }
}

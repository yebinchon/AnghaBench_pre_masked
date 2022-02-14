
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_17__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_35__ {size_t numlayers; } ;
typedef TYPE_8__ opj_tcp_t ;
struct TYPE_36__ {size_t numresolutions; TYPE_12__* resolutions; } ;
typedef TYPE_9__ opj_tcd_tilecomp_t ;
struct TYPE_20__ {size_t numcomps; TYPE_9__* comps; } ;
typedef TYPE_10__ opj_tcd_tile_t ;
struct TYPE_21__ {TYPE_6__* image; TYPE_8__* tcp; TYPE_1__* tcd_image; TYPE_17__* cp; } ;
typedef TYPE_11__ opj_tcd_t ;
struct TYPE_22__ {size_t numbands; size_t pw; size_t ph; TYPE_16__* bands; } ;
typedef TYPE_12__ opj_tcd_resolution_t ;
struct TYPE_31__ {TYPE_15__* enc; } ;
struct TYPE_23__ {size_t cw; size_t ch; TYPE_4__ cblks; } ;
typedef TYPE_13__ opj_tcd_precinct_t ;
struct TYPE_24__ {size_t numpasses; scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_14__ opj_tcd_layer_t ;
struct TYPE_25__ {size_t numpassesinlayers; TYPE_7__* passes; scalar_t__ data; scalar_t__ numbps; TYPE_14__* layers; } ;
typedef TYPE_15__ opj_tcd_cblk_enc_t ;
struct TYPE_26__ {TYPE_13__* precincts; } ;
typedef TYPE_16__ opj_tcd_band_t ;
struct TYPE_29__ {scalar_t__* m_matrice; } ;
struct TYPE_30__ {TYPE_2__ m_enc; } ;
struct TYPE_27__ {TYPE_3__ m_specific_param; } ;
typedef TYPE_17__ opj_cp_t ;
struct TYPE_34__ {scalar_t__ rate; } ;
struct TYPE_33__ {TYPE_5__* comps; } ;
struct TYPE_32__ {double prec; } ;
struct TYPE_28__ {TYPE_10__* tiles; } ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_FLOAT32 ;


 scalar_t__ FUNC_0 (TYPE_16__*) ;

void FUNC_1(opj_tcd_t *VAR_0, OPJ_UINT32 VAR_1,
                             OPJ_UINT32 VAR_2)
{
    OPJ_UINT32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    OPJ_INT32 VAR_8;
    OPJ_INT32 VAR_9[10][10][3];
    OPJ_UINT32 VAR_10, VAR_11, VAR_12;

    opj_cp_t *VAR_13 = VAR_0->cp;
    opj_tcd_tile_t *VAR_14 = VAR_0->tcd_image->tiles;
    opj_tcp_t *VAR_15 = VAR_0->tcp;

    for (VAR_3 = 0; VAR_3 < VAR_14->numcomps; VAR_3++) {
        opj_tcd_tilecomp_t *VAR_16 = &VAR_14->comps[VAR_3];

        for (VAR_10 = 0; VAR_10 < VAR_15->numlayers; VAR_10++) {
            for (VAR_11 = 0; VAR_11 < VAR_16->numresolutions; VAR_11++) {
                for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
                    VAR_9[VAR_10][VAR_11][VAR_12] =
                        (OPJ_INT32)((OPJ_FLOAT32)VAR_13->m_specific_param.m_enc.m_matrice[VAR_10 *
                                      VAR_16->numresolutions * 3 + VAR_11 * 3 + VAR_12]
                                    * (OPJ_FLOAT32)(VAR_0->image->comps[VAR_3].prec / 16.0));
                }
            }
        }

        for (VAR_4 = 0; VAR_4 < VAR_16->numresolutions; VAR_4++) {
            opj_tcd_resolution_t *VAR_17 = &VAR_16->resolutions[VAR_4];

            for (VAR_5 = 0; VAR_5 < VAR_17->numbands; VAR_5++) {
                opj_tcd_band_t *VAR_18 = &VAR_17->bands[VAR_5];


                if (FUNC_0(VAR_18)) {
                    continue;
                }

                for (VAR_6 = 0; VAR_6 < VAR_17->pw * VAR_17->ph; VAR_6++) {
                    opj_tcd_precinct_t *VAR_19 = &VAR_18->precincts[VAR_6];

                    for (VAR_7 = 0; VAR_7 < VAR_19->cw * VAR_19->ch; VAR_7++) {
                        opj_tcd_cblk_enc_t *VAR_20 = &VAR_19->cblks.enc[VAR_7];
                        opj_tcd_layer_t *VAR_21 = &VAR_20->layers[VAR_1];
                        OPJ_UINT32 VAR_22;
                        OPJ_INT32 VAR_23 = (OPJ_INT32)(VAR_0->image->comps[VAR_3].prec -
                                                     VAR_20->numbps);


                        if (VAR_1 == 0) {
                            VAR_8 = VAR_9[VAR_1][VAR_4][VAR_5];
                            if (VAR_23 >= VAR_8) {
                                VAR_8 = 0;
                            } else {
                                VAR_8 -= VAR_23;
                            }
                        } else {
                            VAR_8 = VAR_9[VAR_1][VAR_4][VAR_5] - VAR_9[VAR_1 - 1][VAR_4][VAR_5];
                            if (VAR_23 >= VAR_9[VAR_1 - 1][VAR_4][VAR_5]) {
                                VAR_8 -= (VAR_23 - VAR_9[VAR_1 - 1][VAR_4][VAR_5]);
                                if (VAR_8 < 0) {
                                    VAR_8 = 0;
                                }
                            }
                        }

                        if (VAR_1 == 0) {
                            VAR_20->numpassesinlayers = 0;
                        }

                        VAR_22 = VAR_20->numpassesinlayers;
                        if (VAR_20->numpassesinlayers == 0) {
                            if (VAR_8 != 0) {
                                VAR_22 = 3 * (OPJ_UINT32)VAR_8 - 2 + VAR_20->numpassesinlayers;
                            } else {
                                VAR_22 = VAR_20->numpassesinlayers;
                            }
                        } else {
                            VAR_22 = 3 * (OPJ_UINT32)VAR_8 + VAR_20->numpassesinlayers;
                        }

                        VAR_21->numpasses = VAR_22 - VAR_20->numpassesinlayers;

                        if (!VAR_21->numpasses) {
                            continue;
                        }

                        if (VAR_20->numpassesinlayers == 0) {
                            VAR_21->len = VAR_20->passes[VAR_22 - 1].rate;
                            VAR_21->data = VAR_20->data;
                        } else {
                            VAR_21->len = VAR_20->passes[VAR_22 - 1].rate - VAR_20->passes[VAR_20->numpassesinlayers -
                                         1].rate;
                            VAR_21->data = VAR_20->data + VAR_20->passes[VAR_20->numpassesinlayers - 1].rate;
                        }

                        if (VAR_2) {
                            VAR_20->numpassesinlayers = VAR_22;
                        }
                    }
                }
            }
        }
    }
}

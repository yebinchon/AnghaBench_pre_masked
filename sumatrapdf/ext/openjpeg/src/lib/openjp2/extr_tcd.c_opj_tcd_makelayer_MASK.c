
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {size_t numresolutions; TYPE_6__* resolutions; } ;
typedef TYPE_3__ opj_tcd_tilecomp_t ;
struct TYPE_19__ {scalar_t__* distolayer; size_t numcomps; TYPE_3__* comps; } ;
typedef TYPE_4__ opj_tcd_tile_t ;
struct TYPE_20__ {TYPE_1__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_21__ {size_t numbands; size_t pw; size_t ph; TYPE_11__* bands; } ;
typedef TYPE_6__ opj_tcd_resolution_t ;
struct TYPE_17__ {TYPE_10__* enc; } ;
struct TYPE_22__ {size_t cw; size_t ch; TYPE_2__ cblks; } ;
typedef TYPE_7__ opj_tcd_precinct_t ;
struct TYPE_23__ {size_t rate; scalar_t__ distortiondec; } ;
typedef TYPE_8__ opj_tcd_pass_t ;
struct TYPE_24__ {size_t numpasses; scalar_t__ disto; size_t len; size_t data; } ;
typedef TYPE_9__ opj_tcd_layer_t ;
struct TYPE_14__ {size_t numpassesinlayers; size_t totalpasses; size_t data; TYPE_8__* passes; TYPE_9__* layers; } ;
typedef TYPE_10__ opj_tcd_cblk_enc_t ;
struct TYPE_15__ {TYPE_7__* precincts; } ;
typedef TYPE_11__ opj_tcd_band_t ;
struct TYPE_16__ {TYPE_4__* tiles; } ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_FLOAT64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_11__*) ;

void FUNC_1(opj_tcd_t *VAR_1,
                       OPJ_UINT32 VAR_2,
                       OPJ_FLOAT64 VAR_3,
                       OPJ_UINT32 VAR_4)
{
    OPJ_UINT32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    OPJ_UINT32 VAR_10;

    opj_tcd_tile_t *VAR_11 = VAR_1->tcd_image->tiles;

    VAR_11->distolayer[VAR_2] = 0;

    for (VAR_5 = 0; VAR_5 < VAR_11->numcomps; VAR_5++) {
        opj_tcd_tilecomp_t *VAR_12 = &VAR_11->comps[VAR_5];

        for (VAR_6 = 0; VAR_6 < VAR_12->numresolutions; VAR_6++) {
            opj_tcd_resolution_t *VAR_13 = &VAR_12->resolutions[VAR_6];

            for (VAR_7 = 0; VAR_7 < VAR_13->numbands; VAR_7++) {
                opj_tcd_band_t *VAR_14 = &VAR_13->bands[VAR_7];


                if (FUNC_0(VAR_14)) {
                    continue;
                }

                for (VAR_8 = 0; VAR_8 < VAR_13->pw * VAR_13->ph; VAR_8++) {
                    opj_tcd_precinct_t *VAR_15 = &VAR_14->precincts[VAR_8];

                    for (VAR_9 = 0; VAR_9 < VAR_15->cw * VAR_15->ch; VAR_9++) {
                        opj_tcd_cblk_enc_t *VAR_16 = &VAR_15->cblks.enc[VAR_9];
                        opj_tcd_layer_t *VAR_17 = &VAR_16->layers[VAR_2];
                        OPJ_UINT32 VAR_18;

                        if (VAR_2 == 0) {
                            VAR_16->numpassesinlayers = 0;
                        }

                        VAR_18 = VAR_16->numpassesinlayers;

                        if (VAR_3 < 0) {

                            VAR_18 = VAR_16->totalpasses;
                        } else {
                            for (VAR_10 = VAR_16->numpassesinlayers; VAR_10 < VAR_16->totalpasses; VAR_10++) {
                                OPJ_UINT32 VAR_19;
                                OPJ_FLOAT64 VAR_20;
                                opj_tcd_pass_t *VAR_21 = &VAR_16->passes[VAR_10];

                                if (VAR_18 == 0) {
                                    VAR_19 = VAR_21->rate;
                                    VAR_20 = VAR_21->distortiondec;
                                } else {
                                    VAR_19 = VAR_21->rate - VAR_16->passes[VAR_18 - 1].rate;
                                    VAR_20 = VAR_21->distortiondec - VAR_16->passes[VAR_18 - 1].distortiondec;
                                }

                                if (!VAR_19) {
                                    if (VAR_20 != 0) {
                                        VAR_18 = VAR_10 + 1;
                                    }
                                    continue;
                                }
                                if (VAR_3 - (VAR_20 / VAR_19) <
                                        VAR_0) {
                                    VAR_18 = VAR_10 + 1;
                                }
                            }
                        }

                        VAR_17->numpasses = VAR_18 - VAR_16->numpassesinlayers;

                        if (!VAR_17->numpasses) {
                            VAR_17->disto = 0;
                            continue;
                        }

                        if (VAR_16->numpassesinlayers == 0) {
                            VAR_17->len = VAR_16->passes[VAR_18 - 1].rate;
                            VAR_17->data = VAR_16->data;
                            VAR_17->disto = VAR_16->passes[VAR_18 - 1].distortiondec;
                        } else {
                            VAR_17->len = VAR_16->passes[VAR_18 - 1].rate - VAR_16->passes[VAR_16->numpassesinlayers -
                                         1].rate;
                            VAR_17->data = VAR_16->data + VAR_16->passes[VAR_16->numpassesinlayers - 1].rate;
                            VAR_17->disto = VAR_16->passes[VAR_18 - 1].distortiondec -
                                           VAR_16->passes[VAR_16->numpassesinlayers - 1].distortiondec;
                        }

                        VAR_11->distolayer[VAR_2] += VAR_17->disto;

                        if (VAR_4) {
                            VAR_16->numpassesinlayers = VAR_18;
                        }
                    }
                }
            }
        }
    }
}

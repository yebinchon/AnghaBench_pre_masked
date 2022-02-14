
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* resolutions; } ;
typedef TYPE_2__ opj_tcd_tilecomp_t ;
struct TYPE_10__ {size_t numbands; size_t pw; size_t ph; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; TYPE_6__* bands; } ;
typedef TYPE_3__ opj_tcd_resolution_t ;
struct TYPE_8__ {TYPE_5__* dec; } ;
struct TYPE_11__ {size_t cw; size_t ch; TYPE_1__ cblks; } ;
typedef TYPE_4__ opj_tcd_precinct_t ;
struct TYPE_12__ {int * decoded_data; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_5__ opj_tcd_cblk_dec_t ;
struct TYPE_13__ {int bandno; scalar_t__ y0; scalar_t__ x0; TYPE_4__* precincts; } ;
typedef TYPE_6__ opj_tcd_band_t ;
typedef int opj_sparse_array_int32_t ;
typedef size_t OPJ_UINT32 ;


 int VAR_0 ;
 int * FUNC_0 (size_t,size_t,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,size_t,size_t,size_t,int *,int,size_t,int ) ;
 int FUNC_3 (size_t,int) ;

__attribute__((used)) static opj_sparse_array_int32_t* FUNC_4(
    opj_tcd_tilecomp_t* VAR_1,
    OPJ_UINT32 VAR_2)
{
    opj_tcd_resolution_t* VAR_3 = &(VAR_1->resolutions[VAR_2 - 1]);
    OPJ_UINT32 VAR_4 = (OPJ_UINT32)(VAR_3->x1 - VAR_3->x0);
    OPJ_UINT32 VAR_5 = (OPJ_UINT32)(VAR_3->y1 - VAR_3->y0);
    OPJ_UINT32 VAR_6, VAR_7, VAR_8, VAR_9;
    opj_sparse_array_int32_t* VAR_10 = FUNC_0(
                                       VAR_4, VAR_5, FUNC_3(VAR_4, 64), FUNC_3(VAR_5, 64));
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
        opj_tcd_resolution_t* VAR_11 = &VAR_1->resolutions[VAR_6];

        for (VAR_7 = 0; VAR_7 < VAR_11->numbands; ++VAR_7) {
            opj_tcd_band_t* VAR_12 = &VAR_11->bands[VAR_7];

            for (VAR_8 = 0; VAR_8 < VAR_11->pw * VAR_11->ph; ++VAR_8) {
                opj_tcd_precinct_t* VAR_13 = &VAR_12->precincts[VAR_8];
                for (VAR_9 = 0; VAR_9 < VAR_13->cw * VAR_13->ch; ++VAR_9) {
                    opj_tcd_cblk_dec_t* VAR_14 = &VAR_13->cblks.dec[VAR_9];
                    if (VAR_14->decoded_data != ((void*)0)) {
                        OPJ_UINT32 VAR_15 = (OPJ_UINT32)(VAR_14->x0 - VAR_12->x0);
                        OPJ_UINT32 VAR_16 = (OPJ_UINT32)(VAR_14->y0 - VAR_12->y0);
                        OPJ_UINT32 VAR_17 = (OPJ_UINT32)(VAR_14->x1 - VAR_14->x0);
                        OPJ_UINT32 VAR_18 = (OPJ_UINT32)(VAR_14->y1 - VAR_14->y0);

                        if (VAR_12->bandno & 1) {
                            opj_tcd_resolution_t* VAR_19 = &VAR_1->resolutions[VAR_6 - 1];
                            VAR_15 += (OPJ_UINT32)(VAR_19->x1 - VAR_19->x0);
                        }
                        if (VAR_12->bandno & 2) {
                            opj_tcd_resolution_t* VAR_20 = &VAR_1->resolutions[VAR_6 - 1];
                            VAR_16 += (OPJ_UINT32)(VAR_20->y1 - VAR_20->y0);
                        }

                        if (!FUNC_2(VAR_10, VAR_15, VAR_16,
                                                          VAR_15 + VAR_17, VAR_16 + VAR_18,
                                                          VAR_14->decoded_data,
                                                          1, VAR_17, VAR_0)) {
                            FUNC_1(VAR_10);
                            return ((void*)0);
                        }
                    }
                }
            }
        }
    }

    return VAR_10;
}

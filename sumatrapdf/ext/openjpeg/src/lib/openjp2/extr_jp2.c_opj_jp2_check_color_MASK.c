
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* jp2_pclr; TYPE_1__* jp2_cdef; } ;
typedef TYPE_3__ opj_jp2_color_t ;
struct TYPE_12__ {unsigned int cmp; int mtyp; int pcol; } ;
typedef TYPE_4__ opj_jp2_cmap_comp_t ;
struct TYPE_13__ {unsigned int cn; unsigned int asoc; } ;
typedef TYPE_5__ opj_jp2_cdef_info_t ;
struct TYPE_14__ {unsigned int numcomps; } ;
typedef TYPE_6__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_10__ {size_t nr_channels; TYPE_4__* cmap; } ;
struct TYPE_9__ {size_t n; TYPE_5__* info; } ;
typedef unsigned int OPJ_UINT32 ;
typedef size_t OPJ_UINT16 ;
typedef int OPJ_BYTE ;
typedef unsigned int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (unsigned int*) ;

__attribute__((used)) static OPJ_BOOL FUNC_3(opj_image_t *VAR_4, opj_jp2_color_t *VAR_5,
                                    opj_event_mgr_t *VAR_6)
{
    OPJ_UINT16 VAR_7;


    if (VAR_5->jp2_cdef) {
        opj_jp2_cdef_info_t *VAR_8 = VAR_5->jp2_cdef->info;
        OPJ_UINT16 VAR_9 = VAR_5->jp2_cdef->n;
        OPJ_UINT32 VAR_10 =
            VAR_4->numcomps;


        if (VAR_5->jp2_pclr && VAR_5->jp2_pclr->cmap) {
            VAR_10 = (OPJ_UINT32)VAR_5->jp2_pclr->nr_channels;
        }

        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            if (VAR_8[VAR_7].cn >= VAR_10) {
                FUNC_1(VAR_6, VAR_0, "Invalid component index %d (>= %d).\n",
                              VAR_8[VAR_7].cn, VAR_10);
                return VAR_2;
            }
            if (VAR_8[VAR_7].asoc == 65535U) {
                continue;
            }

            if (VAR_8[VAR_7].asoc > 0 && (OPJ_UINT32)(VAR_8[VAR_7].asoc - 1) >= VAR_10) {
                FUNC_1(VAR_6, VAR_0, "Invalid component index %d (>= %d).\n",
                              VAR_8[VAR_7].asoc - 1, VAR_10);
                return VAR_2;
            }
        }



        while (VAR_10 > 0) {
            for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7) {
                if ((OPJ_UINT32)VAR_8[VAR_7].cn == (VAR_10 - 1U)) {
                    break;
                }
            }
            if (VAR_7 == VAR_9) {
                FUNC_1(VAR_6, VAR_0, "Incomplete channel definitions.\n");
                return VAR_2;
            }
            --VAR_10;
        }
    }



    if (VAR_5->jp2_pclr && VAR_5->jp2_pclr->cmap) {
        OPJ_UINT16 VAR_11 = VAR_5->jp2_pclr->nr_channels;
        opj_jp2_cmap_comp_t *VAR_12 = VAR_5->jp2_pclr->cmap;
        OPJ_BOOL *VAR_13, VAR_14 = VAR_3;


        for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
            if (VAR_12[VAR_7].cmp >= VAR_4->numcomps) {
                FUNC_1(VAR_6, VAR_0, "Invalid component index %d (>= %d).\n",
                              VAR_12[VAR_7].cmp, VAR_4->numcomps);
                VAR_14 = VAR_2;
            }
        }

        VAR_13 = (OPJ_BOOL *) FUNC_0(VAR_11, sizeof(OPJ_BOOL));
        if (!VAR_13) {
            FUNC_1(VAR_6, VAR_0, "Unexpected OOM.\n");
            return VAR_2;
        }

        for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
            OPJ_BYTE VAR_15 = VAR_12[VAR_7].mtyp;
            OPJ_BYTE VAR_16 = VAR_12[VAR_7].pcol;

            if (VAR_15 != 0 && VAR_15 != 1) {
                FUNC_1(VAR_6, VAR_0,
                              "Invalid value for cmap[%d].mtyp = %d.\n", VAR_7,
                              VAR_15);
                VAR_14 = VAR_2;
            } else if (VAR_16 >= VAR_11) {
                FUNC_1(VAR_6, VAR_0,
                              "Invalid component/palette index for direct mapping %d.\n", VAR_16);
                VAR_14 = VAR_2;
            } else if (VAR_13[VAR_16] && VAR_15 == 1) {
                FUNC_1(VAR_6, VAR_0, "Component %d is mapped twice.\n", VAR_16);
                VAR_14 = VAR_2;
            } else if (VAR_15 == 0 && VAR_16 != 0) {


                FUNC_1(VAR_6, VAR_0, "Direct use at #%d however pcol=%d.\n", VAR_7,
                              VAR_16);
                VAR_14 = VAR_2;
            } else if (VAR_15 == 1 && VAR_16 != VAR_7) {


                FUNC_1(VAR_6, VAR_0,
                              "Implementation limitation: for palette mapping, "
                              "pcol[%d] should be equal to %d, but is equal "
                              "to %d.\n", VAR_7, VAR_7, VAR_16);
                VAR_14 = VAR_2;
            } else {
                VAR_13[VAR_16] = VAR_3;
            }
        }

        for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
            if (!VAR_13[VAR_7] && VAR_12[VAR_7].mtyp != 0) {
                FUNC_1(VAR_6, VAR_0, "Component %d doesn't have a mapping.\n",
                              VAR_7);
                VAR_14 = VAR_2;
            }
        }

        if (1 && VAR_14 && (VAR_4->numcomps == 1U)) {
            for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
                if (!VAR_13[VAR_7]) {
                    VAR_14 = 0U;
                    FUNC_1(VAR_6, VAR_1,
                                  "Component mapping seems wrong. Trying to correct.\n", VAR_7);
                    break;
                }
            }
            if (!VAR_14) {
                VAR_14 = VAR_3;
                for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
                    VAR_12[VAR_7].mtyp = 1U;
                    VAR_12[VAR_7].pcol = (OPJ_BYTE) VAR_7;
                }
            }
        }
        FUNC_2(VAR_13);
        if (!VAR_14) {
            return VAR_2;
        }
    }

    return VAR_3;
}

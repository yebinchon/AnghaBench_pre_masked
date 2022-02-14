
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* jp2_cdef; } ;
struct TYPE_16__ {int numcl; int* cl; int numcomps; int bpc; int C; int meth; int enumcs; int jpip_on; scalar_t__ approx; scalar_t__ precedence; TYPE_1__ color; TYPE_4__* comps; scalar_t__ IPR; scalar_t__ UnkC; scalar_t__ w; scalar_t__ h; scalar_t__ minversion; void* brand; int j2k; } ;
typedef TYPE_3__ opj_jp2_t ;
struct TYPE_17__ {int bpcc; } ;
typedef TYPE_4__ opj_jp2_comps_t ;
struct TYPE_18__ {TYPE_6__* info; void* n; } ;
typedef TYPE_5__ opj_jp2_cdef_t ;
struct TYPE_19__ {unsigned int typ; unsigned int asoc; void* cn; } ;
typedef TYPE_6__ opj_jp2_cdef_info_t ;
struct TYPE_20__ {int numcomps; int color_space; TYPE_2__* comps; scalar_t__ icc_profile_len; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
typedef TYPE_7__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_21__ {int jpip_on; } ;
typedef TYPE_8__ opj_cparameters_t ;
struct TYPE_15__ {int prec; int sgnd; scalar_t__ alpha; } ;
typedef int OPJ_UINT32 ;
typedef void* OPJ_UINT16 ;
typedef scalar_t__ OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_8__*,TYPE_7__*,int *) ;
 scalar_t__ FUNC_2 (int) ;

OPJ_BOOL FUNC_3(opj_jp2_t *VAR_5,
                               opj_cparameters_t *VAR_6,
                               opj_image_t *VAR_7,
                               opj_event_mgr_t * VAR_8)
{
    OPJ_UINT32 VAR_9;
    OPJ_UINT32 VAR_10;
    OPJ_UINT32 VAR_11;
    OPJ_UINT32 VAR_12;
    OPJ_UINT32 VAR_13 = 0U;
    OPJ_UINT32 VAR_14 = 0U;


    if (!VAR_5 || !VAR_6 || !VAR_7) {
        return VAR_3;
    }





    if (VAR_7->numcomps < 1 || VAR_7->numcomps > 16384) {
        FUNC_0(VAR_8, VAR_0,
                      "Invalid number of components specified while setting up JP2 encoder\n");
        return VAR_3;
    }

    if (FUNC_1(VAR_5->j2k, VAR_6, VAR_7,
                              VAR_8) == VAR_3) {
        return VAR_3;
    }






    VAR_5->brand = VAR_2;
    VAR_5->minversion = 0;
    VAR_5->numcl = 1;
    VAR_5->cl = (OPJ_UINT32*) FUNC_2(VAR_5->numcl * sizeof(OPJ_UINT32));
    if (!VAR_5->cl) {
        FUNC_0(VAR_8, VAR_0,
                      "Not enough memory when setup the JP2 encoder\n");
        return VAR_3;
    }
    VAR_5->cl[0] = VAR_2;



    VAR_5->numcomps = VAR_7->numcomps;
    VAR_5->comps = (opj_jp2_comps_t*) FUNC_2(VAR_5->numcomps * sizeof(
                     opj_jp2_comps_t));
    if (!VAR_5->comps) {
        FUNC_0(VAR_8, VAR_0,
                      "Not enough memory when setup the JP2 encoder\n");

        return VAR_3;
    }

    VAR_5->h = VAR_7->y1 - VAR_7->y0;
    VAR_5->w = VAR_7->x1 - VAR_7->x0;

    VAR_10 = VAR_7->comps[0].prec - 1;
    VAR_11 = VAR_7->comps[0].sgnd;
    VAR_5->bpc = VAR_10 + (VAR_11 << 7);
    for (VAR_9 = 1; VAR_9 < VAR_7->numcomps; VAR_9++) {
        OPJ_UINT32 VAR_15 = VAR_7->comps[VAR_9].prec - 1;
        VAR_11 = VAR_7->comps[VAR_9].sgnd;
        if (VAR_10 != VAR_15) {
            VAR_5->bpc = 255;
        }
    }
    VAR_5->C = 7;
    VAR_5->UnkC = 0;
    VAR_5->IPR = 0;


    for (VAR_9 = 0; VAR_9 < VAR_7->numcomps; VAR_9++) {
        VAR_5->comps[VAR_9].bpcc = VAR_7->comps[VAR_9].prec - 1 + (VAR_7->comps[VAR_9].sgnd << 7);
    }


    if (VAR_7->icc_profile_len) {
        VAR_5->meth = 2;
        VAR_5->enumcs = 0;
    } else {
        VAR_5->meth = 1;
        if (VAR_7->color_space == 1) {
            VAR_5->enumcs = 16;
        } else if (VAR_7->color_space == 2) {
            VAR_5->enumcs = 17;
        } else if (VAR_7->color_space == 3) {
            VAR_5->enumcs = 18;
        }
    }




    VAR_12 = 0U;
    for (VAR_9 = 0; VAR_9 < VAR_7->numcomps; VAR_9++) {
        if (VAR_7->comps[VAR_9].alpha != 0) {
            VAR_12++;
            VAR_14 = VAR_9;
        }
    }
    if (VAR_12 == 1U) {
        switch (VAR_5->enumcs) {
        case 16:
        case 18:
            VAR_13 = 3;
            break;
        case 17:
            VAR_13 = 1;
            break;
        default:
            VAR_12 = 0U;
            break;
        }
        if (VAR_12 == 0U) {
            FUNC_0(VAR_8, VAR_1,
                          "Alpha channel specified but unknown enumcs. No cdef box will be created.\n");
        } else if (VAR_7->numcomps < (VAR_13 + 1)) {
            FUNC_0(VAR_8, VAR_1,
                          "Alpha channel specified but not enough image components for an automatic cdef box creation.\n");
            VAR_12 = 0U;
        } else if ((OPJ_UINT32)VAR_14 < VAR_13) {
            FUNC_0(VAR_8, VAR_1,
                          "Alpha channel position conflicts with color channel. No cdef box will be created.\n");
            VAR_12 = 0U;
        }
    } else if (VAR_12 > 1) {
        FUNC_0(VAR_8, VAR_1,
                      "Multiple alpha channels specified. No cdef box will be created.\n");
    }
    if (VAR_12 == 1U) {
        VAR_5->color.jp2_cdef = (opj_jp2_cdef_t*)FUNC_2(sizeof(opj_jp2_cdef_t));
        if (!VAR_5->color.jp2_cdef) {
            FUNC_0(VAR_8, VAR_0,
                          "Not enough memory to setup the JP2 encoder\n");
            return VAR_3;
        }


        VAR_5->color.jp2_cdef->info = (opj_jp2_cdef_info_t*) FUNC_2(
                                        VAR_7->numcomps * sizeof(opj_jp2_cdef_info_t));
        if (!VAR_5->color.jp2_cdef->info) {

            FUNC_0(VAR_8, VAR_0,
                          "Not enough memory to setup the JP2 encoder\n");
            return VAR_3;
        }
        VAR_5->color.jp2_cdef->n = (OPJ_UINT16)
                                 VAR_7->numcomps;
        for (VAR_9 = 0U; VAR_9 < VAR_13; VAR_9++) {
            VAR_5->color.jp2_cdef->info[VAR_9].cn = (OPJ_UINT16)
                                              VAR_9;
            VAR_5->color.jp2_cdef->info[VAR_9].typ = 0U;
            VAR_5->color.jp2_cdef->info[VAR_9].asoc = (OPJ_UINT16)(VAR_9 +
                                                1U);
        }
        for (; VAR_9 < VAR_7->numcomps; VAR_9++) {
            if (VAR_7->comps[VAR_9].alpha != 0) {
                VAR_5->color.jp2_cdef->info[VAR_9].cn = (OPJ_UINT16)
                                                  VAR_9;
                VAR_5->color.jp2_cdef->info[VAR_9].typ = 1U;
                VAR_5->color.jp2_cdef->info[VAR_9].asoc =
                    0U;
            } else {

                VAR_5->color.jp2_cdef->info[VAR_9].cn = (OPJ_UINT16)
                                                  VAR_9;
                VAR_5->color.jp2_cdef->info[VAR_9].typ = 65535U;
                VAR_5->color.jp2_cdef->info[VAR_9].asoc = 65535U;
            }
        }
    }

    VAR_5->precedence = 0;
    VAR_5->approx = 0;

    VAR_5->jpip_on = VAR_6->jpip_on;

    return VAR_4;
}

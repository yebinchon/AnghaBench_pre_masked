
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


struct TYPE_12__ {void** data; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_13__ {TYPE_3__* image; TYPE_2__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_14__ {int prec; int sgnd; } ;
typedef TYPE_6__ opj_image_comp_t ;
struct TYPE_11__ {scalar_t__ numcomps; TYPE_6__* comps; } ;
struct TYPE_10__ {TYPE_1__* tiles; } ;
struct TYPE_9__ {TYPE_4__* comps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef void* OPJ_INT32 ;
typedef int OPJ_INT16 ;
typedef int OPJ_CHAR ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;

OPJ_BOOL FUNC_1(opj_tcd_t *VAR_2,
                                OPJ_BYTE * VAR_3,
                                OPJ_SIZE_T VAR_4)
{
    OPJ_UINT32 VAR_5;
    OPJ_SIZE_T VAR_6;
    OPJ_SIZE_T VAR_7 = 0;
    opj_image_comp_t * VAR_8 = 00;
    opj_tcd_tilecomp_t * VAR_9 = 00;
    OPJ_UINT32 VAR_10, VAR_11;
    OPJ_SIZE_T VAR_12;

    VAR_7 = FUNC_0(VAR_2);
    if (VAR_7 != VAR_4) {
        return VAR_0;
    }

    VAR_9 = VAR_2->tcd_image->tiles->comps;
    VAR_8 = VAR_2->image->comps;
    for (VAR_5 = 0; VAR_5 < VAR_2->image->numcomps; ++VAR_5) {
        VAR_10 = VAR_8->prec >> 3;
        VAR_11 = VAR_8->prec & 7;
        VAR_12 = (OPJ_SIZE_T)(VAR_9->x1 - VAR_9->x0) *
                    (OPJ_SIZE_T)(VAR_9->y1 - VAR_9->y0);

        if (VAR_11) {
            ++VAR_10;
        }

        if (VAR_10 == 3) {
            VAR_10 = 4;
        }

        switch (VAR_10) {
        case 1: {
            OPJ_CHAR * VAR_13 = (OPJ_CHAR *) VAR_3;
            OPJ_INT32 * VAR_14 = VAR_9->data;

            if (VAR_8->sgnd) {
                for (VAR_6 = 0; VAR_6 < VAR_12; ++VAR_6) {
                    *(VAR_14++) = (OPJ_INT32)(*(VAR_13++));
                }
            } else {
                for (VAR_6 = 0; VAR_6 < VAR_12; ++VAR_6) {
                    *(VAR_14++) = (*(VAR_13++)) & 0xff;
                }
            }

            VAR_3 = (OPJ_BYTE*) VAR_13;
        }
        break;
        case 2: {
            OPJ_INT32 * VAR_15 = VAR_9->data;
            OPJ_INT16 * VAR_16 = (OPJ_INT16 *) VAR_3;

            if (VAR_8->sgnd) {
                for (VAR_6 = 0; VAR_6 < VAR_12; ++VAR_6) {
                    *(VAR_15++) = (OPJ_INT32)(*(VAR_16++));
                }
            } else {
                for (VAR_6 = 0; VAR_6 < VAR_12; ++VAR_6) {
                    *(VAR_15++) = (*(VAR_16++)) & 0xffff;
                }
            }

            VAR_3 = (OPJ_BYTE*) VAR_16;
        }
        break;
        case 4: {
            OPJ_INT32 * VAR_17 = (OPJ_INT32 *) VAR_3;
            OPJ_INT32 * VAR_18 = VAR_9->data;

            for (VAR_6 = 0; VAR_6 < VAR_12; ++VAR_6) {
                *(VAR_18++) = (OPJ_INT32)(*(VAR_17++));
            }

            VAR_3 = (OPJ_BYTE*) VAR_17;
        }
        break;
        }

        ++VAR_8;
        ++VAR_9;
    }

    return VAR_1;
}

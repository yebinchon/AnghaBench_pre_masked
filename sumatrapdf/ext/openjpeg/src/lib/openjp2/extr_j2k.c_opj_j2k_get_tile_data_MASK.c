
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int opj_tcd_tilecomp_t ;
struct TYPE_11__ {TYPE_2__* tcd_image; TYPE_4__* image; } ;
typedef TYPE_3__ opj_tcd_t ;
struct TYPE_12__ {scalar_t__ numcomps; TYPE_5__* comps; } ;
typedef TYPE_4__ opj_image_t ;
struct TYPE_13__ {int* data; int sgnd; } ;
typedef TYPE_5__ opj_image_comp_t ;
struct TYPE_10__ {TYPE_1__* tiles; } ;
struct TYPE_9__ {int * comps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef void* OPJ_INT16 ;
typedef int OPJ_CHAR ;
typedef int OPJ_BYTE ;


 int FUNC_0 (TYPE_4__*,int *,TYPE_5__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(opj_tcd_t * VAR_0, OPJ_BYTE * VAR_1)
{
    OPJ_UINT32 VAR_2, VAR_3, VAR_4 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0->image->numcomps; ++VAR_2) {
        opj_image_t * VAR_5 = VAR_0->image;
        OPJ_INT32 * VAR_6;
        opj_tcd_tilecomp_t * VAR_7 = VAR_0->tcd_image->tiles->comps + VAR_2;
        opj_image_comp_t * VAR_8 = VAR_5->comps + VAR_2;
        OPJ_UINT32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
                   VAR_14, VAR_15, VAR_16;

        FUNC_0(VAR_5,
                                VAR_7,
                                VAR_8,
                                &VAR_9,
                                &VAR_10,
                                &VAR_11,
                                &VAR_12,
                                &VAR_13,
                                &VAR_14,
                                &VAR_15,
                                &VAR_16);

        VAR_6 = VAR_8->data + VAR_16;

        switch (VAR_9) {
        case 1: {
            OPJ_CHAR * VAR_17 = (OPJ_CHAR*) VAR_1;
            if (VAR_8->sgnd) {
                for (VAR_3 = 0; VAR_3 < VAR_11; ++VAR_3) {
                    for (VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4) {
                        *(VAR_17) = (OPJ_CHAR)(*VAR_6);
                        ++VAR_17;
                        ++VAR_6;
                    }
                    VAR_6 += VAR_15;
                }
            } else {
                for (VAR_3 = 0; VAR_3 < VAR_11; ++VAR_3) {
                    for (VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4) {
                        *(VAR_17) = (OPJ_CHAR)((*VAR_6) & 0xff);
                        ++VAR_17;
                        ++VAR_6;
                    }
                    VAR_6 += VAR_15;
                }
            }

            VAR_1 = (OPJ_BYTE*) VAR_17;
        }
        break;
        case 2: {
            OPJ_INT16 * VAR_18 = (OPJ_INT16 *) VAR_1;
            if (VAR_8->sgnd) {
                for (VAR_3 = 0; VAR_3 < VAR_11; ++VAR_3) {
                    for (VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4) {
                        *(VAR_18++) = (OPJ_INT16)(*(VAR_6++));
                    }
                    VAR_6 += VAR_15;
                }
            } else {
                for (VAR_3 = 0; VAR_3 < VAR_11; ++VAR_3) {
                    for (VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4) {
                        *(VAR_18++) = (OPJ_INT16)((*(VAR_6++)) & 0xffff);
                    }
                    VAR_6 += VAR_15;
                }
            }

            VAR_1 = (OPJ_BYTE*) VAR_18;
        }
        break;
        case 4: {
            OPJ_INT32 * VAR_19 = (OPJ_INT32 *) VAR_1;
            for (VAR_3 = 0; VAR_3 < VAR_11; ++VAR_3) {
                for (VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4) {
                    *(VAR_19++) = *(VAR_6++);
                }
                VAR_6 += VAR_15;
            }

            VAR_1 = (OPJ_BYTE*) VAR_19;
        }
        break;
        }
    }
}

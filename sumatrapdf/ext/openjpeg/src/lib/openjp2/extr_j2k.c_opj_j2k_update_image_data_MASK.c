
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int minimum_num_resolutions; scalar_t__* data; scalar_t__* data_win; TYPE_5__* resolutions; } ;
typedef TYPE_3__ opj_tcd_tilecomp_t ;
struct TYPE_13__ {scalar_t__ whole_tile_decoding; TYPE_6__* image; TYPE_2__* tcd_image; } ;
typedef TYPE_4__ opj_tcd_t ;
struct TYPE_14__ {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; scalar_t__ win_x0; scalar_t__ win_x1; scalar_t__ win_y1; scalar_t__ win_y0; } ;
typedef TYPE_5__ opj_tcd_resolution_t ;
struct TYPE_15__ {scalar_t__ numcomps; TYPE_7__* comps; } ;
typedef TYPE_6__ opj_image_t ;
struct TYPE_16__ {int resno_decoded; scalar_t__ w; scalar_t__ h; scalar_t__* data; int factor; int y0; int x0; } ;
typedef TYPE_7__ opj_image_comp_t ;
struct TYPE_11__ {TYPE_1__* tiles; } ;
struct TYPE_10__ {TYPE_3__* comps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static OPJ_BOOL FUNC_5(opj_tcd_t * VAR_3,
        opj_image_t* VAR_4)
{
    OPJ_UINT32 VAR_5, VAR_6;
    OPJ_UINT32 VAR_7, VAR_8;
    OPJ_UINT32 VAR_9, VAR_10;
    OPJ_INT32 VAR_11, VAR_12, VAR_13, VAR_14;
    OPJ_SIZE_T VAR_15;
    OPJ_UINT32 VAR_16, VAR_17;
    OPJ_UINT32 VAR_18, VAR_19, VAR_20, VAR_21;
    OPJ_SIZE_T VAR_22;

    opj_image_comp_t * VAR_23 = 00;
    opj_image_comp_t * VAR_24 = 00;

    opj_tcd_tilecomp_t * VAR_25 = 00;
    opj_image_t * VAR_26 = 00;
    OPJ_INT32 * VAR_27;

    VAR_25 = VAR_3->tcd_image->tiles->comps;
    VAR_26 = VAR_3->image;
    VAR_23 = VAR_26->comps;

    VAR_24 = VAR_4->comps;

    for (VAR_5 = 0; VAR_5 < VAR_26->numcomps;
            VAR_5++, ++VAR_24, ++VAR_23, ++VAR_25) {
        OPJ_INT32 VAR_28, VAR_29, VAR_30, VAR_31;
        OPJ_UINT32 VAR_32;
        const OPJ_INT32* VAR_33;


        VAR_24->resno_decoded = VAR_23->resno_decoded;

        if (VAR_3->whole_tile_decoding) {
            opj_tcd_resolution_t* VAR_34 = VAR_25->resolutions +
                                          VAR_23->resno_decoded;
            VAR_28 = VAR_34->x0;
            VAR_30 = VAR_34->y0;
            VAR_29 = VAR_34->x1;
            VAR_31 = VAR_34->y1;
            VAR_32 = (OPJ_UINT32)(
                                  VAR_25->resolutions[VAR_25->minimum_num_resolutions - 1].x1 -
                                  VAR_25->resolutions[VAR_25->minimum_num_resolutions - 1].x0);
            VAR_33 = VAR_25->data;
        } else {
            opj_tcd_resolution_t* VAR_35 = VAR_25->resolutions +
                                          VAR_23->resno_decoded;
            VAR_28 = (OPJ_INT32)VAR_35->win_x0;
            VAR_30 = (OPJ_INT32)VAR_35->win_y0;
            VAR_29 = (OPJ_INT32)VAR_35->win_x1;
            VAR_31 = (OPJ_INT32)VAR_35->win_y1;
            VAR_32 = VAR_35->win_x1 - VAR_35->win_x0;
            VAR_33 = VAR_25->data_win;
        }

        if (VAR_33 == ((void*)0)) {

            continue;
        }

        VAR_7 = (OPJ_UINT32)(VAR_29 - VAR_28);
        VAR_8 = (OPJ_UINT32)(VAR_31 - VAR_30);
        VAR_18 = FUNC_4(VAR_24->x0, VAR_24->factor);
        VAR_19 = FUNC_4(VAR_24->y0, VAR_24->factor);
        VAR_20 = VAR_18 +
                    VAR_24->w;
        VAR_21 = VAR_19 + VAR_24->h;
        FUNC_0(VAR_28 >= 0);
        FUNC_0(VAR_29 >= 0);
        if (VAR_18 < (OPJ_UINT32)VAR_28) {
            VAR_16 = (OPJ_UINT32)VAR_28 - VAR_18;
            VAR_11 = 0;

            if (VAR_20 >= (OPJ_UINT32)VAR_29) {
                VAR_9 = VAR_7;
                VAR_13 = 0;
            } else {
                VAR_9 = VAR_20 - (OPJ_UINT32)VAR_28 ;
                VAR_13 = (OPJ_INT32)(VAR_7 - VAR_9);
            }
        } else {
            VAR_16 = 0U;
            VAR_11 = (OPJ_INT32)VAR_18 - VAR_28;

            if (VAR_20 >= (OPJ_UINT32)VAR_29) {
                VAR_9 = VAR_7 - (OPJ_UINT32)VAR_11;
                VAR_13 = 0;
            } else {
                VAR_9 = VAR_24->w ;
                VAR_13 = VAR_29 - (OPJ_INT32)VAR_20;
            }
        }

        if (VAR_19 < (OPJ_UINT32)VAR_30) {
            VAR_17 = (OPJ_UINT32)VAR_30 - VAR_19;
            VAR_12 = 0;

            if (VAR_21 >= (OPJ_UINT32)VAR_31) {
                VAR_10 = VAR_8;
                VAR_14 = 0;
            } else {
                VAR_10 = VAR_21 - (OPJ_UINT32)VAR_30 ;
                VAR_14 = (OPJ_INT32)(VAR_8 - VAR_10);
            }
        } else {
            VAR_17 = 0U;
            VAR_12 = (OPJ_INT32)VAR_19 - VAR_30;

            if (VAR_21 >= (OPJ_UINT32)VAR_31) {
                VAR_10 = VAR_8 - (OPJ_UINT32)VAR_12;
                VAR_14 = 0;
            } else {
                VAR_10 = VAR_24->h ;
                VAR_14 = VAR_31 - (OPJ_INT32)VAR_21;
            }
        }

        if ((VAR_11 < 0) || (VAR_12 < 0) || (VAR_13 < 0) ||
                (VAR_14 < 0)) {
            return VAR_0;
        }

        if ((OPJ_INT32)VAR_9 < 0 || (OPJ_INT32)VAR_10 < 0) {
            return VAR_0;
        }



        VAR_15 = (OPJ_SIZE_T)VAR_11 + (OPJ_SIZE_T)VAR_12
                             * (OPJ_SIZE_T)VAR_32;


        VAR_22 = (OPJ_SIZE_T)VAR_16 + (OPJ_SIZE_T)VAR_17
                              * (OPJ_SIZE_T)VAR_24->w;


        if (VAR_24->data == ((void*)0) &&
                VAR_15 == 0 && VAR_22 == 0 &&
                VAR_32 == VAR_24->w &&
                VAR_9 == VAR_24->w &&
                VAR_10 == VAR_24->h) {


            if (VAR_3->whole_tile_decoding) {
                VAR_24->data = VAR_25->data;
                VAR_25->data = ((void*)0);
            } else {
                VAR_24->data = VAR_25->data_win;
                VAR_25->data_win = ((void*)0);
            }
            continue;
        } else if (VAR_24->data == ((void*)0)) {
            OPJ_SIZE_T VAR_36 = VAR_24->w;
            OPJ_SIZE_T VAR_37 = VAR_24->h;

            if ((VAR_37 == 0U) || (VAR_36 > (VAR_2 / VAR_37)) ||
                    VAR_36 * VAR_37 > VAR_2 / sizeof(OPJ_INT32)) {

                return VAR_0;
            }
            VAR_24->data = (OPJ_INT32*) FUNC_3(VAR_36 * VAR_37 *
                                    sizeof(OPJ_INT32));
            if (! VAR_24->data) {
                return VAR_0;
            }

            if (VAR_24->w != VAR_9 ||
                    VAR_24->h != VAR_10) {
                FUNC_2(VAR_24->data, 0,
                       (OPJ_SIZE_T)VAR_24->w * VAR_24->h * sizeof(OPJ_INT32));
            }
        }


        VAR_27 = VAR_24->data + VAR_22;

        {
            const OPJ_INT32 * VAR_38 = VAR_33;
            VAR_38 += VAR_15;

            for (VAR_6 = 0; VAR_6 < VAR_10; ++VAR_6) {
                FUNC_1(VAR_27, VAR_38, VAR_9 * sizeof(OPJ_INT32));
                VAR_27 += VAR_24->w;
                VAR_38 += VAR_32;
            }
        }


    }

    return VAR_1;
}

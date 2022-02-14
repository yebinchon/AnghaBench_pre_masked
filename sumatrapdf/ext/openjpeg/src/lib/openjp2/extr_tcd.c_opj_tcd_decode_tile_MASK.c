
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_29__ {TYPE_10__* tccps; } ;
typedef TYPE_6__ opj_tcp_t ;
struct TYPE_30__ {int minimum_num_resolutions; int data_size_needed; scalar_t__ win_x0; scalar_t__ win_y0; scalar_t__ win_x1; scalar_t__ win_y1; size_t numresolutions; int * data_win; TYPE_9__* resolutions; scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_7__ opj_tcd_tilecomp_t ;
struct TYPE_31__ {size_t tcd_tileno; size_t win_x0; size_t win_y0; size_t win_x1; size_t win_y1; void** used_component; TYPE_4__* image; TYPE_3__* tcd_image; void* whole_tile_decoding; TYPE_5__* cp; TYPE_6__* tcp; } ;
typedef TYPE_8__ opj_tcd_t ;
struct TYPE_32__ {int win_x0; int win_y0; int win_x1; int win_y1; size_t pw; size_t ph; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_9__ opj_tcd_resolution_t ;
struct TYPE_21__ {int * prch; int * prcw; } ;
typedef TYPE_10__ opj_tccp_t ;
typedef int opj_packet_info_t ;
struct TYPE_22__ {int resno_decoded; int dy; int dx; } ;
typedef TYPE_11__ opj_image_comp_t ;
typedef int opj_event_mgr_t ;
typedef int opj_codestream_index_t ;
struct TYPE_28__ {TYPE_6__* tcps; } ;
struct TYPE_27__ {size_t numcomps; TYPE_11__* comps; } ;
struct TYPE_26__ {TYPE_2__* tiles; } ;
struct TYPE_25__ {TYPE_7__* comps; } ;
struct TYPE_24__ {size_t* pw; size_t* ph; int * packet; int * pdy; int * pdx; } ;
struct TYPE_23__ {size_t numlayers; scalar_t__ packno; TYPE_1__* tile; scalar_t__ numcomps; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_SIZE_T ;
typedef int OPJ_INT32 ;
typedef int OPJ_BYTE ;
typedef void* OPJ_BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*,size_t) ;
 int FUNC_10 (TYPE_8__*,int *) ;
 int FUNC_11 (TYPE_8__*,int *) ;
 int FUNC_12 (TYPE_8__*,int *,size_t*,size_t,int *,int *) ;
 int FUNC_13 (size_t,int ) ;
 void* FUNC_14 (scalar_t__,int) ;
 void* FUNC_15 (size_t,int ) ;
 void* FUNC_16 (size_t,int ) ;
 TYPE_12__* VAR_4 ;

OPJ_BOOL FUNC_17(opj_tcd_t *VAR_5,
                             OPJ_UINT32 VAR_6,
                             OPJ_UINT32 VAR_7,
                             OPJ_UINT32 VAR_8,
                             OPJ_UINT32 VAR_9,
                             OPJ_UINT32 VAR_10,
                             const OPJ_UINT32 *VAR_11,
                             OPJ_BYTE *VAR_12,
                             OPJ_UINT32 VAR_13,
                             OPJ_UINT32 VAR_14,
                             opj_codestream_index_t *VAR_15,
                             opj_event_mgr_t *VAR_16
                            )
{
    OPJ_UINT32 VAR_17;
    OPJ_UINT32 VAR_18;

    VAR_5->tcd_tileno = VAR_14;
    VAR_5->tcp = &(VAR_5->cp->tcps[VAR_14]);
    VAR_5->win_x0 = VAR_6;
    VAR_5->win_y0 = VAR_7;
    VAR_5->win_x1 = VAR_8;
    VAR_5->win_y1 = VAR_9;
    VAR_5->whole_tile_decoding = VAR_2;

    FUNC_3(VAR_5->used_component);
    VAR_5->used_component = ((void*)0);

    if (VAR_10) {
        OPJ_BOOL* VAR_19 = (OPJ_BOOL*) FUNC_1(sizeof(OPJ_BOOL),
                                   VAR_5->image->numcomps);
        if (VAR_19 == ((void*)0)) {
            return VAR_1;
        }
        for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
            VAR_19[ VAR_11[VAR_18] ] = VAR_2;
        }

        VAR_5->used_component = VAR_19;
    }

    for (VAR_18 = 0; VAR_18 < VAR_5->image->numcomps; VAR_18++) {
        if (VAR_5->used_component != ((void*)0) && !VAR_5->used_component[VAR_18]) {
            continue;
        }

        if (!FUNC_9(VAR_5, VAR_18)) {
            VAR_5->whole_tile_decoding = VAR_1;
            break;
        }
    }

    if (VAR_5->whole_tile_decoding) {
        for (VAR_18 = 0; VAR_18 < VAR_5->image->numcomps; VAR_18++) {
            opj_tcd_tilecomp_t* VAR_20 = &(VAR_5->tcd_image->tiles->comps[VAR_18]);
            opj_tcd_resolution_t *VAR_21 = &
                                          (VAR_20->resolutions[VAR_20->minimum_num_resolutions - 1]);
            OPJ_SIZE_T VAR_22;


            OPJ_SIZE_T VAR_23 = (OPJ_SIZE_T)(VAR_21->x1 - VAR_21->x0);
            OPJ_SIZE_T VAR_24 = (OPJ_SIZE_T)(VAR_21->y1 - VAR_21->y0);

            if (VAR_5->used_component != ((void*)0) && !VAR_5->used_component[VAR_18]) {
                continue;
            }


            if (VAR_24 > 0 && VAR_23 > VAR_3 / VAR_24) {
                FUNC_2(VAR_16, VAR_0,
                              "Size of tile data exceeds system limits\n");
                return VAR_1;
            }
            VAR_22 = VAR_23 * VAR_24;

            if (VAR_3 / sizeof(OPJ_UINT32) < VAR_22) {
                FUNC_2(VAR_16, VAR_0,
                              "Size of tile data exceeds system limits\n");
                return VAR_1;
            }
            VAR_22 *= sizeof(OPJ_UINT32);

            VAR_20->data_size_needed = VAR_22;

            if (!FUNC_0(VAR_20)) {
                FUNC_2(VAR_16, VAR_0,
                              "Size of tile data exceeds system limits\n");
                return VAR_1;
            }
        }
    } else {



        for (VAR_18 = 0; VAR_18 < VAR_5->image->numcomps; VAR_18++) {
            OPJ_UINT32 VAR_25;
            opj_tcd_tilecomp_t* VAR_26 = &(VAR_5->tcd_image->tiles->comps[VAR_18]);
            opj_image_comp_t* VAR_27 = &(VAR_5->image->comps[VAR_18]);

            if (VAR_5->used_component != ((void*)0) && !VAR_5->used_component[VAR_18]) {
                continue;
            }



            VAR_26->win_x0 = FUNC_15(
                                (OPJ_UINT32)VAR_26->x0,
                                FUNC_13(VAR_5->win_x0, VAR_27->dx));
            VAR_26->win_y0 = FUNC_15(
                                (OPJ_UINT32)VAR_26->y0,
                                FUNC_13(VAR_5->win_y0, VAR_27->dy));
            VAR_26->win_x1 = FUNC_16(
                                (OPJ_UINT32)VAR_26->x1,
                                FUNC_13(VAR_5->win_x1, VAR_27->dx));
            VAR_26->win_y1 = FUNC_16(
                                (OPJ_UINT32)VAR_26->y1,
                                FUNC_13(VAR_5->win_y1, VAR_27->dy));
            if (VAR_26->win_x1 < VAR_26->win_x0 ||
                    VAR_26->win_y1 < VAR_26->win_y0) {



                FUNC_2(VAR_16, VAR_0,
                              "Invalid tilec->win_xxx values\n");
                return VAR_1;
            }

            for (VAR_25 = 0; VAR_25 < VAR_26->numresolutions; ++VAR_25) {
                opj_tcd_resolution_t *VAR_28 = VAR_26->resolutions + VAR_25;
                VAR_28->win_x0 = FUNC_14(VAR_26->win_x0,
                                                   VAR_26->numresolutions - 1 - VAR_25);
                VAR_28->win_y0 = FUNC_14(VAR_26->win_y0,
                                                   VAR_26->numresolutions - 1 - VAR_25);
                VAR_28->win_x1 = FUNC_14(VAR_26->win_x1,
                                                   VAR_26->numresolutions - 1 - VAR_25);
                VAR_28->win_y1 = FUNC_14(VAR_26->win_y1,
                                                   VAR_26->numresolutions - 1 - VAR_25);
            }
        }
    }
    VAR_17 = 0;
    if (! FUNC_12(VAR_5, VAR_12, &VAR_17, VAR_13, VAR_15,
                            VAR_16)) {
        return VAR_1;
    }





    if (! FUNC_11(VAR_5, VAR_16)) {
        return VAR_1;
    }





    if (!VAR_5->whole_tile_decoding) {
        for (VAR_18 = 0; VAR_18 < VAR_5->image->numcomps; VAR_18++) {
            opj_tcd_tilecomp_t* VAR_29 = &(VAR_5->tcd_image->tiles->comps[VAR_18]);
            opj_image_comp_t* VAR_30 = &(VAR_5->image->comps[VAR_18]);
            opj_tcd_resolution_t *VAR_31 = VAR_29->resolutions + VAR_30->resno_decoded;
            OPJ_SIZE_T VAR_32 = VAR_31->win_x1 - VAR_31->win_x0;
            OPJ_SIZE_T VAR_33 = VAR_31->win_y1 - VAR_31->win_y0;
            OPJ_SIZE_T VAR_34;

            FUNC_5(VAR_29->data_win);
            VAR_29->data_win = ((void*)0);

            if (VAR_5->used_component != ((void*)0) && !VAR_5->used_component[VAR_18]) {
                continue;
            }

            if (VAR_32 > 0 && VAR_33 > 0) {
                if (VAR_32 > VAR_3 / VAR_33) {
                    FUNC_2(VAR_16, VAR_0,
                                  "Size of tile data exceeds system limits\n");
                    return VAR_1;
                }
                VAR_34 = VAR_32 * VAR_33;
                if (VAR_34 > VAR_3 / sizeof(OPJ_INT32)) {
                    FUNC_2(VAR_16, VAR_0,
                                  "Size of tile data exceeds system limits\n");
                    return VAR_1;
                }
                VAR_34 *= sizeof(OPJ_INT32);

                VAR_29->data_win = (OPJ_INT32*) FUNC_4(VAR_34);
                if (VAR_29->data_win == ((void*)0)) {
                    FUNC_2(VAR_16, VAR_0,
                                  "Size of tile data exceeds system limits\n");
                    return VAR_1;
                }
            }
        }
    }




    if
    (! FUNC_8(VAR_5)) {
        return VAR_1;
    }




    if
    (! FUNC_10(VAR_5, VAR_16)) {
        return VAR_1;
    }



    if
    (! FUNC_7(VAR_5)) {
        return VAR_1;
    }




    return VAR_2;
}

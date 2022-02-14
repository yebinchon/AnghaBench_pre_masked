
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int opj_stream_private_t ;
struct TYPE_19__ {scalar_t__ m_tile_ind_to_dec; } ;
struct TYPE_20__ {TYPE_1__ m_decoder; } ;
struct TYPE_21__ {int tw; int th; int tdx; scalar_t__ tx0; int tdy; scalar_t__ ty0; } ;
struct TYPE_23__ {TYPE_14__* m_private_image; int m_procedure_list; TYPE_2__ m_specific_param; TYPE_14__* m_output_image; TYPE_3__ m_cp; } ;
typedef TYPE_5__ opj_j2k_t ;
struct TYPE_24__ {int numcomps; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; TYPE_7__* comps; } ;
typedef TYPE_6__ opj_image_t ;
struct TYPE_25__ {int x0; int y0; int w; int h; int * data; scalar_t__ factor; scalar_t__ dy; scalar_t__ dx; } ;
typedef TYPE_7__ opj_image_comp_t ;
typedef int opj_event_mgr_t ;
struct TYPE_22__ {scalar_t__ factor; } ;
struct TYPE_18__ {int numcomps; scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; TYPE_4__* comps; } ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,TYPE_14__*) ;
 int FUNC_1 (int *,int ,char*,...) ;
 TYPE_14__* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_14__*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_5__*,int ,int *,int *) ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,int *) ;

OPJ_BOOL FUNC_10(opj_j2k_t *VAR_2,
                          opj_stream_private_t *VAR_3,
                          opj_image_t* VAR_4,
                          opj_event_mgr_t * VAR_5,
                          OPJ_UINT32 VAR_6)
{
    OPJ_UINT32 VAR_7;
    OPJ_UINT32 VAR_8, VAR_9;
    opj_image_comp_t* VAR_10;

    if (!VAR_4) {
        FUNC_1(VAR_5, VAR_0, "We need an image previously created.\n");
        return VAR_1;
    }

    if (VAR_4->numcomps < VAR_2->m_private_image->numcomps) {
        FUNC_1(VAR_5, VAR_0,
                      "Image has less components than codestream.\n");
        return VAR_1;
    }

    if ( (VAR_6 >= VAR_2->m_cp.tw * VAR_2->m_cp.th)) {
        FUNC_1(VAR_5, VAR_0,
                      "Tile index provided by the user is incorrect %d (max = %d) \n", VAR_6,
                      (VAR_2->m_cp.tw * VAR_2->m_cp.th) - 1);
        return VAR_1;
    }


    VAR_8 = VAR_6 % VAR_2->m_cp.tw;
    VAR_9 = VAR_6 / VAR_2->m_cp.tw;

    VAR_4->x0 = VAR_8 * VAR_2->m_cp.tdx + VAR_2->m_cp.tx0;
    if (VAR_4->x0 < VAR_2->m_private_image->x0) {
        VAR_4->x0 = VAR_2->m_private_image->x0;
    }
    VAR_4->x1 = (VAR_8 + 1) * VAR_2->m_cp.tdx + VAR_2->m_cp.tx0;
    if (VAR_4->x1 > VAR_2->m_private_image->x1) {
        VAR_4->x1 = VAR_2->m_private_image->x1;
    }

    VAR_4->y0 = VAR_9 * VAR_2->m_cp.tdy + VAR_2->m_cp.ty0;
    if (VAR_4->y0 < VAR_2->m_private_image->y0) {
        VAR_4->y0 = VAR_2->m_private_image->y0;
    }
    VAR_4->y1 = (VAR_9 + 1) * VAR_2->m_cp.tdy + VAR_2->m_cp.ty0;
    if (VAR_4->y1 > VAR_2->m_private_image->y1) {
        VAR_4->y1 = VAR_2->m_private_image->y1;
    }

    VAR_10 = VAR_4->comps;
    for (VAR_7 = 0; VAR_7 < VAR_2->m_private_image->numcomps; ++VAR_7) {
        OPJ_INT32 VAR_11, VAR_12;

        VAR_10->factor = VAR_2->m_private_image->comps[VAR_7].factor;

        VAR_10->x0 = (OPJ_UINT32)FUNC_5((OPJ_INT32)VAR_4->x0,
                         (OPJ_INT32)VAR_10->dx);
        VAR_10->y0 = (OPJ_UINT32)FUNC_5((OPJ_INT32)VAR_4->y0,
                         (OPJ_INT32)VAR_10->dy);
        VAR_11 = FUNC_5((OPJ_INT32)VAR_4->x1, (OPJ_INT32)VAR_10->dx);
        VAR_12 = FUNC_5((OPJ_INT32)VAR_4->y1, (OPJ_INT32)VAR_10->dy);

        VAR_10->w = (OPJ_UINT32)(FUNC_6(VAR_11,
                                     (OPJ_INT32)VAR_10->factor) - FUNC_6((OPJ_INT32)VAR_10->x0,
                                             (OPJ_INT32)VAR_10->factor));
        VAR_10->h = (OPJ_UINT32)(FUNC_6(VAR_12,
                                     (OPJ_INT32)VAR_10->factor) - FUNC_6((OPJ_INT32)VAR_10->y0,
                                             (OPJ_INT32)VAR_10->factor));

        VAR_10++;
    }

    if (VAR_4->numcomps > VAR_2->m_private_image->numcomps) {



        for (VAR_7 = VAR_2->m_private_image->numcomps; VAR_7 < VAR_4->numcomps;
                ++VAR_7) {
            FUNC_3(VAR_4->comps[VAR_7].data);
            VAR_4->comps[VAR_7].data = ((void*)0);
        }
        VAR_4->numcomps = VAR_2->m_private_image->numcomps;
    }


    if (VAR_2->m_output_image) {
        FUNC_4(VAR_2->m_output_image);
    }


    VAR_2->m_output_image = FUNC_2();
    if (!(VAR_2->m_output_image)) {
        return VAR_1;
    }
    FUNC_0(VAR_4, VAR_2->m_output_image);

    VAR_2->m_specific_param.m_decoder.m_tile_ind_to_dec = (OPJ_INT32)VAR_6;


    if (!FUNC_9(VAR_2, VAR_5)) {
        return VAR_1;
    }


    if (! FUNC_7(VAR_2, VAR_2->m_procedure_list, VAR_3, VAR_5)) {
        FUNC_4(VAR_2->m_private_image);
        VAR_2->m_private_image = ((void*)0);
        return VAR_1;
    }


    return FUNC_8(VAR_2, VAR_4);
}

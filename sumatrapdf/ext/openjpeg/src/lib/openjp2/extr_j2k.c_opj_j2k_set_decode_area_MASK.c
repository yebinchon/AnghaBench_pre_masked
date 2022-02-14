
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ m_state; size_t m_start_tile_x; size_t m_start_tile_y; int m_end_tile_x; int m_end_tile_y; int m_discard_tiles; } ;
struct TYPE_18__ {TYPE_5__ m_decoder; } ;
struct TYPE_15__ {int m_reduce; } ;
struct TYPE_16__ {TYPE_3__ m_dec; } ;
struct TYPE_21__ {int tw; int th; size_t tx0; size_t tdx; size_t ty0; size_t tdy; TYPE_4__ m_specific_param; TYPE_1__* tcps; } ;
struct TYPE_19__ {TYPE_6__ m_specific_param; TYPE_9__ m_cp; TYPE_8__* m_private_image; } ;
typedef TYPE_7__ opj_j2k_t ;
struct TYPE_20__ {size_t numcomps; size_t x0; size_t y0; size_t x1; size_t y1; TYPE_2__* comps; } ;
typedef TYPE_8__ opj_image_t ;
typedef int opj_event_mgr_t ;
typedef TYPE_9__ opj_cp_t ;
struct TYPE_14__ {int factor; } ;
struct TYPE_13__ {int * m_data; } ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef scalar_t__ OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int *) ;

OPJ_BOOL FUNC_3(opj_j2k_t *VAR_5,
                                 opj_image_t* VAR_6,
                                 OPJ_INT32 VAR_7, OPJ_INT32 VAR_8,
                                 OPJ_INT32 VAR_9, OPJ_INT32 VAR_10,
                                 opj_event_mgr_t * VAR_11)
{
    opj_cp_t * VAR_12 = &(VAR_5->m_cp);
    opj_image_t * VAR_13 = VAR_5->m_private_image;
    OPJ_BOOL VAR_14;
    OPJ_UINT32 VAR_15;

    if (VAR_5->m_cp.tw == 1 && VAR_5->m_cp.th == 1 &&
            VAR_5->m_cp.tcps[0].m_data != ((void*)0)) {


    }

    else if (VAR_5->m_specific_param.m_decoder.m_state != VAR_3) {
        FUNC_0(VAR_11, VAR_0,
                      "Need to decode the main header before begin to decode the remaining codestream.\n");
        return VAR_4;
    }



    for (VAR_15 = 0; VAR_15 < VAR_6->numcomps; ++VAR_15) {
        VAR_6->comps[VAR_15].factor = VAR_5->m_cp.m_specific_param.m_dec.m_reduce;
    }

    if (!VAR_7 && !VAR_8 && !VAR_9 && !VAR_10) {
        FUNC_0(VAR_11, VAR_1,
                      "No decoded area parameters, set the decoded area to the whole image\n");

        VAR_5->m_specific_param.m_decoder.m_start_tile_x = 0;
        VAR_5->m_specific_param.m_decoder.m_start_tile_y = 0;
        VAR_5->m_specific_param.m_decoder.m_end_tile_x = VAR_12->tw;
        VAR_5->m_specific_param.m_decoder.m_end_tile_y = VAR_12->th;

        VAR_6->x0 = VAR_13->x0;
        VAR_6->y0 = VAR_13->y0;
        VAR_6->x1 = VAR_13->x1;
        VAR_6->y1 = VAR_13->y1;

        return FUNC_2(VAR_6, VAR_11);
    }





    if (VAR_7 < 0) {
        FUNC_0(VAR_11, VAR_0,
                      "Left position of the decoded area (region_x0=%d) should be >= 0.\n",
                      VAR_7);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_7 > VAR_13->x1) {
        FUNC_0(VAR_11, VAR_0,
                      "Left position of the decoded area (region_x0=%d) is outside the image area (Xsiz=%d).\n",
                      VAR_7, VAR_13->x1);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_7 < VAR_13->x0) {
        FUNC_0(VAR_11, VAR_2,
                      "Left position of the decoded area (region_x0=%d) is outside the image area (XOsiz=%d).\n",
                      VAR_7, VAR_13->x0);
        VAR_5->m_specific_param.m_decoder.m_start_tile_x = 0;
        VAR_6->x0 = VAR_13->x0;
    } else {
        VAR_5->m_specific_param.m_decoder.m_start_tile_x = ((OPJ_UINT32)VAR_7 -
                VAR_12->tx0) / VAR_12->tdx;
        VAR_6->x0 = (OPJ_UINT32)VAR_7;
    }


    if (VAR_8 < 0) {
        FUNC_0(VAR_11, VAR_0,
                      "Up position of the decoded area (region_y0=%d) should be >= 0.\n",
                      VAR_8);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_8 > VAR_13->y1) {
        FUNC_0(VAR_11, VAR_0,
                      "Up position of the decoded area (region_y0=%d) is outside the image area (Ysiz=%d).\n",
                      VAR_8, VAR_13->y1);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_8 < VAR_13->y0) {
        FUNC_0(VAR_11, VAR_2,
                      "Up position of the decoded area (region_y0=%d) is outside the image area (YOsiz=%d).\n",
                      VAR_8, VAR_13->y0);
        VAR_5->m_specific_param.m_decoder.m_start_tile_y = 0;
        VAR_6->y0 = VAR_13->y0;
    } else {
        VAR_5->m_specific_param.m_decoder.m_start_tile_y = ((OPJ_UINT32)VAR_8 -
                VAR_12->ty0) / VAR_12->tdy;
        VAR_6->y0 = (OPJ_UINT32)VAR_8;
    }


    if (VAR_9 <= 0) {
        FUNC_0(VAR_11, VAR_0,
                      "Right position of the decoded area (region_x1=%d) should be > 0.\n",
                      VAR_9);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_9 < VAR_13->x0) {
        FUNC_0(VAR_11, VAR_0,
                      "Right position of the decoded area (region_x1=%d) is outside the image area (XOsiz=%d).\n",
                      VAR_9, VAR_13->x0);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_9 > VAR_13->x1) {
        FUNC_0(VAR_11, VAR_2,
                      "Right position of the decoded area (region_x1=%d) is outside the image area (Xsiz=%d).\n",
                      VAR_9, VAR_13->x1);
        VAR_5->m_specific_param.m_decoder.m_end_tile_x = VAR_12->tw;
        VAR_6->x1 = VAR_13->x1;
    } else {
        VAR_5->m_specific_param.m_decoder.m_end_tile_x = (OPJ_UINT32)FUNC_1(
                    VAR_9 - (OPJ_INT32)VAR_12->tx0, (OPJ_INT32)VAR_12->tdx);
        VAR_6->x1 = (OPJ_UINT32)VAR_9;
    }


    if (VAR_10 <= 0) {
        FUNC_0(VAR_11, VAR_0,
                      "Bottom position of the decoded area (region_y1=%d) should be > 0.\n",
                      VAR_10);
        return VAR_4;
    } else if ((OPJ_UINT32)VAR_10 < VAR_13->y0) {
        FUNC_0(VAR_11, VAR_0,
                      "Bottom position of the decoded area (region_y1=%d) is outside the image area (YOsiz=%d).\n",
                      VAR_10, VAR_13->y0);
        return VAR_4;
    }
    if ((OPJ_UINT32)VAR_10 > VAR_13->y1) {
        FUNC_0(VAR_11, VAR_2,
                      "Bottom position of the decoded area (region_y1=%d) is outside the image area (Ysiz=%d).\n",
                      VAR_10, VAR_13->y1);
        VAR_5->m_specific_param.m_decoder.m_end_tile_y = VAR_12->th;
        VAR_6->y1 = VAR_13->y1;
    } else {
        VAR_5->m_specific_param.m_decoder.m_end_tile_y = (OPJ_UINT32)FUNC_1(
                    VAR_10 - (OPJ_INT32)VAR_12->ty0, (OPJ_INT32)VAR_12->tdy);
        VAR_6->y1 = (OPJ_UINT32)VAR_10;
    }


    VAR_5->m_specific_param.m_decoder.m_discard_tiles = 1;

    VAR_14 = FUNC_2(VAR_6, VAR_11);

    if (VAR_14) {
        FUNC_0(VAR_11, VAR_1, "Setting decoding area to %d,%d,%d,%d\n",
                      VAR_6->x0, VAR_6->y0, VAR_6->x1, VAR_6->y1);
    }

    return VAR_14;
}

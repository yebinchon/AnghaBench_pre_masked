
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
typedef int opj_stream_private_t ;
struct TYPE_12__ {TYPE_5__* m_tcd; } ;
typedef TYPE_4__ opj_j2k_t ;
typedef int opj_event_mgr_t ;
struct TYPE_13__ {TYPE_3__* tcd_image; TYPE_1__* image; } ;
struct TYPE_11__ {TYPE_2__* tiles; } ;
struct TYPE_10__ {int * comps; } ;
struct TYPE_9__ {scalar_t__ numcomps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,int *,int *) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int *,int *) ;
 int FUNC_4 (TYPE_5__*,int *,scalar_t__) ;

OPJ_BOOL FUNC_5(opj_j2k_t * VAR_3,
                            OPJ_UINT32 VAR_4,
                            OPJ_BYTE * VAR_5,
                            OPJ_UINT32 VAR_6,
                            opj_stream_private_t *VAR_7,
                            opj_event_mgr_t * VAR_8)
{
    if (! FUNC_3(VAR_3, VAR_4, VAR_7, VAR_8)) {
        FUNC_1(VAR_8, VAR_0,
                      "Error while opj_j2k_pre_write_tile with tile index = %d\n", VAR_4);
        return VAR_1;
    } else {
        OPJ_UINT32 VAR_9;

        for (VAR_9 = 0; VAR_9 < VAR_3->m_tcd->image->numcomps; ++VAR_9) {
            opj_tcd_tilecomp_t* VAR_10 = VAR_3->m_tcd->tcd_image->tiles->comps + VAR_9;

            if (! FUNC_0(VAR_10)) {
                FUNC_1(VAR_8, VAR_0, "Error allocating tile component data.");
                return VAR_1;
            }
        }


        if (! FUNC_4(VAR_3->m_tcd, VAR_5, VAR_6)) {
            FUNC_1(VAR_8, VAR_0,
                          "Size mismatch between tile data and sent data.");
            return VAR_1;
        }
        if (! FUNC_2(VAR_3, VAR_7, VAR_8)) {
            FUNC_1(VAR_8, VAR_0,
                          "Error while opj_j2k_post_write_tile with tile index = %d\n", VAR_4);
            return VAR_1;
        }
    }

    return VAR_2;
}

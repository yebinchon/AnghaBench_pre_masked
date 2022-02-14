
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opj_tcd_tilecomp_t ;
struct TYPE_9__ {scalar_t__ numcomps; int * comps; } ;
typedef TYPE_3__ opj_tcd_tile_t ;
struct TYPE_10__ {TYPE_2__* tcp; TYPE_1__* tcd_image; } ;
typedef TYPE_4__ opj_tcd_t ;
struct TYPE_11__ {int qmfbid; } ;
typedef TYPE_5__ opj_tccp_t ;
struct TYPE_8__ {TYPE_5__* tccps; } ;
struct TYPE_7__ {TYPE_3__* tiles; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static OPJ_BOOL FUNC_2(opj_tcd_t *VAR_2)
{
    opj_tcd_tile_t * VAR_3 = VAR_2->tcd_image->tiles;
    opj_tcd_tilecomp_t * VAR_4 = VAR_2->tcd_image->tiles->comps;
    opj_tccp_t * VAR_5 = VAR_2->tcp->tccps;
    OPJ_UINT32 VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3->numcomps; ++VAR_6) {
        if (VAR_5->qmfbid == 1) {
            if (! FUNC_0(VAR_4)) {
                return VAR_0;
            }
        } else if (VAR_5->qmfbid == 0) {
            if (! FUNC_1(VAR_4)) {
                return VAR_0;
            }
        }

        ++VAR_4;
        ++VAR_5;
    }

    return VAR_1;
}

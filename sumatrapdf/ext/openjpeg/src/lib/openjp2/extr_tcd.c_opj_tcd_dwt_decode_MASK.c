
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int opj_tcd_tilecomp_t ;
struct TYPE_14__ {size_t numcomps; int * comps; } ;
typedef TYPE_4__ opj_tcd_tile_t ;
struct TYPE_15__ {int * used_component; TYPE_2__* image; TYPE_1__* tcp; TYPE_3__* tcd_image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_16__ {int qmfbid; } ;
typedef TYPE_6__ opj_tccp_t ;
struct TYPE_17__ {scalar_t__ resno_decoded; } ;
typedef TYPE_7__ opj_image_comp_t ;
struct TYPE_13__ {TYPE_4__* tiles; } ;
struct TYPE_12__ {TYPE_7__* comps; } ;
struct TYPE_11__ {TYPE_6__* tccps; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int *,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int *,scalar_t__) ;

__attribute__((used)) static OPJ_BOOL FUNC_2(opj_tcd_t *VAR_2)
{
    OPJ_UINT32 VAR_3;
    opj_tcd_tile_t * VAR_4 = VAR_2->tcd_image->tiles;
    opj_tcd_tilecomp_t * VAR_5 = VAR_4->comps;
    opj_tccp_t * VAR_6 = VAR_2->tcp->tccps;
    opj_image_comp_t * VAR_7 = VAR_2->image->comps;

    for (VAR_3 = 0; VAR_3 < VAR_4->numcomps;
            VAR_3++, ++VAR_5, ++VAR_7, ++VAR_6) {
        if (VAR_2->used_component != ((void*)0) && !VAR_2->used_component[VAR_3]) {
            continue;
        }

        if (VAR_6->qmfbid == 1) {
            if (! FUNC_0(VAR_2, VAR_5,
                                 VAR_7->resno_decoded + 1)) {
                return VAR_0;
            }
        } else {
            if (! FUNC_1(VAR_2, VAR_5,
                                      VAR_7->resno_decoded + 1)) {
                return VAR_0;
            }
        }

    }

    return VAR_1;
}

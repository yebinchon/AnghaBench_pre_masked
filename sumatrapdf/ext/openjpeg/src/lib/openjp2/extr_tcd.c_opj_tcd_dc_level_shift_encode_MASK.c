
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int* data; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_4__ opj_tcd_tilecomp_t ;
struct TYPE_13__ {scalar_t__ numcomps; TYPE_4__* comps; } ;
typedef TYPE_5__ opj_tcd_tile_t ;
struct TYPE_14__ {TYPE_3__* image; TYPE_2__* tcp; TYPE_1__* tcd_image; } ;
typedef TYPE_6__ opj_tcd_t ;
struct TYPE_15__ {int qmfbid; int m_dc_level_shift; } ;
typedef TYPE_7__ opj_tccp_t ;
typedef int opj_image_comp_t ;
struct TYPE_11__ {int * comps; } ;
struct TYPE_10__ {TYPE_7__* tccps; } ;
struct TYPE_9__ {TYPE_5__* tiles; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_SIZE_T ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;

__attribute__((used)) static OPJ_BOOL FUNC_0(opj_tcd_t *VAR_1)
{
    OPJ_UINT32 VAR_2;
    opj_tcd_tilecomp_t * VAR_3 = 00;
    opj_tccp_t * VAR_4 = 00;
    opj_image_comp_t * VAR_5 = 00;
    opj_tcd_tile_t * VAR_6;
    OPJ_SIZE_T VAR_7, VAR_8;
    OPJ_INT32 * VAR_9;

    VAR_6 = VAR_1->tcd_image->tiles;
    VAR_3 = VAR_6->comps;
    VAR_4 = VAR_1->tcp->tccps;
    VAR_5 = VAR_1->image->comps;

    for (VAR_2 = 0; VAR_2 < VAR_6->numcomps; VAR_2++) {
        VAR_9 = VAR_3->data;
        VAR_7 = (OPJ_SIZE_T)(VAR_3->x1 - VAR_3->x0) *
                    (OPJ_SIZE_T)(VAR_3->y1 - VAR_3->y0);

        if (VAR_4->qmfbid == 1) {
            for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
                *VAR_9 -= VAR_4->m_dc_level_shift ;
                ++VAR_9;
            }
        } else {
            for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
                *VAR_9 = (*VAR_9 - VAR_4->m_dc_level_shift) * (1 << 11);
                ++VAR_9;
            }
        }

        ++VAR_5;
        ++VAR_4;
        ++VAR_3;
    }

    return VAR_0;
}

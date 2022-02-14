
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


typedef int opj_thread_pool_t ;
typedef int opj_tcd_tilecomp_t ;
struct TYPE_14__ {int numcomps; int * comps; } ;
typedef TYPE_4__ opj_tcd_tile_t ;
struct TYPE_15__ {int * thread_pool; int tp_pos; TYPE_1__* tcd_image; TYPE_7__* cp; TYPE_6__* image; } ;
typedef TYPE_5__ opj_tcd_t ;
struct TYPE_16__ {int numcomps; } ;
typedef TYPE_6__ opj_image_t ;
struct TYPE_12__ {int m_tp_pos; } ;
struct TYPE_13__ {TYPE_2__ m_enc; } ;
struct TYPE_17__ {TYPE_3__ m_specific_param; } ;
typedef TYPE_7__ opj_cp_t ;
struct TYPE_11__ {TYPE_4__* tiles; } ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

OPJ_BOOL FUNC_1(opj_tcd_t *VAR_2,
                      opj_image_t * VAR_3,
                      opj_cp_t * VAR_4,
                      opj_thread_pool_t* VAR_5)
{
    VAR_2->image = VAR_3;
    VAR_2->cp = VAR_4;

    VAR_2->tcd_image->tiles = (opj_tcd_tile_t *) FUNC_0(1,
                              sizeof(opj_tcd_tile_t));
    if (! VAR_2->tcd_image->tiles) {
        return VAR_0;
    }

    VAR_2->tcd_image->tiles->comps = (opj_tcd_tilecomp_t *) FUNC_0(
                                         VAR_3->numcomps, sizeof(opj_tcd_tilecomp_t));
    if (! VAR_2->tcd_image->tiles->comps) {
        return VAR_0;
    }

    VAR_2->tcd_image->tiles->numcomps = VAR_3->numcomps;
    VAR_2->tp_pos = VAR_4->m_specific_param.m_enc.m_tp_pos;
    VAR_2->thread_pool = VAR_5;

    return VAR_1;
}

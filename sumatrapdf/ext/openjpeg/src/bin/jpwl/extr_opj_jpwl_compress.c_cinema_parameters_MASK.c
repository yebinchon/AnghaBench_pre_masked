
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cp_tdx; int cp_tdy; char tp_flag; int tp_on; int cblockw_init; int cblockh_init; int csty; int roi_compno; int subsampling_dx; int subsampling_dy; int irreversible; int prog_order; scalar_t__ image_offset_y0; scalar_t__ image_offset_x0; scalar_t__ cp_ty0; scalar_t__ cp_tx0; int tile_size_on; } ;
typedef TYPE_1__ opj_cparameters_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(opj_cparameters_t *VAR_2)
{
    VAR_2->tile_size_on = VAR_1;
    VAR_2->cp_tdx = 1;
    VAR_2->cp_tdy = 1;


    VAR_2->tp_flag = 'C';
    VAR_2->tp_on = 1;


    VAR_2->cp_tx0 = 0;
    VAR_2->cp_ty0 = 0;
    VAR_2->image_offset_x0 = 0;
    VAR_2->image_offset_y0 = 0;


    VAR_2->cblockw_init = 32;
    VAR_2->cblockh_init = 32;
    VAR_2->csty |= 0x01;


    VAR_2->prog_order = VAR_0;


    VAR_2->roi_compno = -1;

    VAR_2->subsampling_dx = 1;
    VAR_2->subsampling_dy = 1;


    VAR_2->irreversible = 1;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ jp2_has_colr; } ;
struct TYPE_8__ {int ignore_pclr_cmap_cdef; TYPE_1__ color; int j2k; } ;
typedef TYPE_2__ opj_jp2_t ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_3__ opj_dparameters_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;

void FUNC_1(opj_jp2_t *VAR_1, opj_dparameters_t *VAR_2)
{

    FUNC_0(VAR_1->j2k, VAR_2);


    VAR_1->color.jp2_has_colr = 0;
    VAR_1->ignore_pclr_cmap_cdef = VAR_2->flags &
                                 VAR_0;
}

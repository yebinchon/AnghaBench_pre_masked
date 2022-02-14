
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int opj_tcd_tilecomp_t ;
struct TYPE_3__ {int thread_pool; scalar_t__ whole_tile_decoding; } ;
typedef TYPE_1__ opj_tcd_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;

OPJ_BOOL FUNC_2(opj_tcd_t *VAR_0, opj_tcd_tilecomp_t* VAR_1,
                        OPJ_UINT32 VAR_2)
{
    if (VAR_0->whole_tile_decoding) {
        return FUNC_1(VAR_0->thread_pool, VAR_1, VAR_2);
    } else {
        return FUNC_0(VAR_1, VAR_2);
    }
}

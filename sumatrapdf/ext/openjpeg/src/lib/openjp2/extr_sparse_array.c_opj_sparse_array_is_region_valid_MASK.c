
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_1__ opj_sparse_array_int32_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BOOL ;



OPJ_BOOL FUNC_0(const opj_sparse_array_int32_t* VAR_0,
        OPJ_UINT32 VAR_1,
        OPJ_UINT32 VAR_2,
        OPJ_UINT32 VAR_3,
        OPJ_UINT32 VAR_4)
{
    return !(VAR_1 >= VAR_0->width || VAR_3 <= VAR_1 || VAR_3 > VAR_0->width ||
             VAR_2 >= VAR_0->height || VAR_4 <= VAR_2 || VAR_4 > VAR_0->height);
}

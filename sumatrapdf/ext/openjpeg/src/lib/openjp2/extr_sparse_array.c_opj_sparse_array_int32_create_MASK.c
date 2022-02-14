
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ block_count_hor; scalar_t__ block_count_ver; int ** data_blocks; scalar_t__ block_height; scalar_t__ block_width; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ opj_sparse_array_int32_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_INT32 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (scalar_t__,scalar_t__) ;

opj_sparse_array_int32_t* FUNC_3(OPJ_UINT32 VAR_0,
        OPJ_UINT32 VAR_1,
        OPJ_UINT32 VAR_2,
        OPJ_UINT32 VAR_3)
{
    opj_sparse_array_int32_t* VAR_4;

    if (VAR_0 == 0 || VAR_1 == 0 || VAR_2 == 0 || VAR_3 == 0) {
        return ((void*)0);
    }
    if (VAR_2 > ((OPJ_UINT32)~0U) / VAR_3 / sizeof(OPJ_INT32)) {
        return ((void*)0);
    }

    VAR_4 = (opj_sparse_array_int32_t*) FUNC_0(1,
            sizeof(opj_sparse_array_int32_t));
    VAR_4->width = VAR_0;
    VAR_4->height = VAR_1;
    VAR_4->block_width = VAR_2;
    VAR_4->block_height = VAR_3;
    VAR_4->block_count_hor = FUNC_2(VAR_0, VAR_2);
    VAR_4->block_count_ver = FUNC_2(VAR_1, VAR_3);
    if (VAR_4->block_count_hor > ((OPJ_UINT32)~0U) / VAR_4->block_count_ver) {
        FUNC_1(VAR_4);
        return ((void*)0);
    }
    VAR_4->data_blocks = (OPJ_INT32**) FUNC_0(sizeof(OPJ_INT32*),
                      VAR_4->block_count_hor * VAR_4->block_count_ver);
    if (VAR_4->data_blocks == ((void*)0)) {
        FUNC_1(VAR_4);
        return ((void*)0);
    }

    return VAR_4;
}

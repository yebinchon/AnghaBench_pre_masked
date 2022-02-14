
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_2; int member_1; } ;
typedef TYPE_1__ ZSTD_frameParameters ;
typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx ;


 size_t FUNC_0 (int *,void*,size_t,void const*,size_t,int const*,TYPE_1__ const) ;

size_t FUNC_1(ZSTD_CCtx* VAR_0,
                                void* VAR_1, size_t VAR_2,
                                const void* VAR_3, size_t VAR_4,
                                const ZSTD_CDict* VAR_5)
{
    ZSTD_frameParameters const VAR_6 = { 1 , 0 , 0 };
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}

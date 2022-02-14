
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_frameParameters ;
typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,int ,size_t) ;
 size_t FUNC_2 (int *,void*,size_t,void const*,size_t) ;

size_t FUNC_3(ZSTD_CCtx* VAR_0,
                                void* VAR_1, size_t VAR_2,
                                const void* VAR_3, size_t VAR_4,
                                const ZSTD_CDict* VAR_5, ZSTD_frameParameters VAR_6)
{
    FUNC_0 (FUNC_1(VAR_0, VAR_5, VAR_6, VAR_4));
    return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

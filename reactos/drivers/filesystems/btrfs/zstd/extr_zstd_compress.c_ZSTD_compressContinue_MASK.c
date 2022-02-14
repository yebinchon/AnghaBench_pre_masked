
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 size_t FUNC_1 (int *,void*,size_t,void const*,size_t,int,int ) ;

size_t FUNC_2 (ZSTD_CCtx* VAR_0,
                              void* VAR_1, size_t VAR_2,
                        const void* VAR_3, size_t VAR_4)
{
    FUNC_0(5, "ZSTD_compressContinue (srcSize=%u)", (U32)VAR_4);
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1 , 0 );
}

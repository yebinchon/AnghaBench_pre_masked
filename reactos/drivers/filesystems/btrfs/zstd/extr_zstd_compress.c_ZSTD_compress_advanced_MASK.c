
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int *,void*,size_t,void const*,size_t,void const*,size_t,TYPE_1__) ;

size_t FUNC_4 (ZSTD_CCtx* VAR_0,
                               void* VAR_1, size_t VAR_2,
                         const void* VAR_3, size_t VAR_4,
                         const void* VAR_5,size_t VAR_6,
                               ZSTD_parameters VAR_7)
{
    FUNC_1(4, "ZSTD_compress_advanced");
    FUNC_0(FUNC_2(VAR_7.cParams));
    return FUNC_3(VAR_0,
                                  VAR_1, VAR_2,
                                  VAR_3, VAR_4,
                                  VAR_5, VAR_6,
                                  VAR_7);
}

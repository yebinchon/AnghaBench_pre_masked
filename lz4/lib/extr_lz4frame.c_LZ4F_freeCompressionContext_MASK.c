
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tmpBuff; scalar_t__ lz4CtxPtr; } ;
typedef int LZ4F_errorCode_t ;
typedef scalar_t__ LZ4F_compressionContext_t ;
typedef TYPE_1__ LZ4F_cctx_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

LZ4F_errorCode_t FUNC_1(LZ4F_compressionContext_t VAR_1)
{
    LZ4F_cctx_t* const VAR_2 = (LZ4F_cctx_t*)VAR_1;

    if (VAR_2 != ((void*)0)) {
       FUNC_0(VAR_2->lz4CtxPtr);
       FUNC_0(VAR_2->tmpBuff);
       FUNC_0(VAR_1);
    }

    return VAR_0;
}

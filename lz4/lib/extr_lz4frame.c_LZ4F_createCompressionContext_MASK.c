
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int version; scalar_t__ cStage; } ;
typedef int LZ4F_errorCode_t ;
typedef scalar_t__ LZ4F_compressionContext_t ;
typedef TYPE_1__ LZ4F_cctx_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

LZ4F_errorCode_t FUNC_2(LZ4F_compressionContext_t* VAR_2, unsigned VAR_3)
{
    LZ4F_cctx_t* const VAR_4 = (LZ4F_cctx_t*)FUNC_0(sizeof(LZ4F_cctx_t));
    if (VAR_4==((void*)0)) return FUNC_1(VAR_0);

    VAR_4->version = VAR_3;
    VAR_4->cStage = 0;

    *VAR_2 = (LZ4F_compressionContext_t)VAR_4;

    return VAR_1;
}

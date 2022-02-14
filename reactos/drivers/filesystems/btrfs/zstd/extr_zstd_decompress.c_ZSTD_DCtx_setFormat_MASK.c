
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ZSTD_format_e ;
struct TYPE_3__ {scalar_t__ streamStage; scalar_t__ format; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int,char*,unsigned int) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_2(ZSTD_DCtx* VAR_2, ZSTD_format_e VAR_3)
{
    FUNC_0(4, "ZSTD_DCtx_setFormat : %u", (unsigned)VAR_3);
    if (VAR_2->streamStage != VAR_1) return FUNC_1(VAR_0);
    VAR_2->format = VAR_3;
    return 0;
}

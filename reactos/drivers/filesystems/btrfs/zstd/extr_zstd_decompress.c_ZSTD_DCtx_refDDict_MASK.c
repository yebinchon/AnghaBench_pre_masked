
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_DDict ;
struct TYPE_3__ {scalar_t__ streamStage; int const* ddict; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_1(ZSTD_DCtx* VAR_2, const ZSTD_DDict* VAR_3)
{
    if (VAR_2->streamStage != VAR_1) return FUNC_0(VAR_0);
    VAR_2->ddict = VAR_3;
    return 0;
}

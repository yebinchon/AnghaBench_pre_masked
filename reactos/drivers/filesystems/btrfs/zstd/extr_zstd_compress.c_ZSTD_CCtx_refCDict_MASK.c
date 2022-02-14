
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_CDict ;
struct TYPE_3__ {scalar_t__ streamStage; int prefixDict; int const* cdict; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_2(ZSTD_CCtx* VAR_2, const ZSTD_CDict* VAR_3)
{
    if (VAR_2->streamStage != VAR_1) return FUNC_0(VAR_0);
    VAR_2->cdict = VAR_3;
    FUNC_1(&VAR_2->prefixDict, 0, sizeof(VAR_2->prefixDict));
    return 0;
}

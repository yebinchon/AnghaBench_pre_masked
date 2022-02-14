
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int contentSizeFlag; } ;
struct TYPE_9__ {TYPE_1__ fParams; } ;
struct TYPE_8__ {int cdict; TYPE_3__ requestedParams; } ;
typedef TYPE_2__ ZSTD_CStream ;
typedef TYPE_3__ ZSTD_CCtx_params ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (TYPE_2__*,int *,int ,int ,int ,TYPE_3__,unsigned long long) ;

size_t FUNC_2(ZSTD_CStream* VAR_2, unsigned long long VAR_3)
{
    ZSTD_CCtx_params VAR_4 = VAR_2->requestedParams;
    FUNC_0(4, "ZSTD_resetCStream: pledgedSrcSize = %u", (U32)VAR_3);
    if (VAR_3==0) VAR_3 = VAR_0;
    VAR_4.fParams.contentSizeFlag = 1;
    return FUNC_1(VAR_2, ((void*)0), 0, VAR_1, VAR_2->cdict, VAR_4, VAR_3);
}

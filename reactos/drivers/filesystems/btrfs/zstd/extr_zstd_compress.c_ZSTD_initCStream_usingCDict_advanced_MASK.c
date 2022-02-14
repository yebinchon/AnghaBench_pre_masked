
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_frameParameters ;
struct TYPE_7__ {int fParams; int cParams; } ;
struct TYPE_6__ {TYPE_2__ requestedParams; } ;
typedef TYPE_1__ ZSTD_CStream ;
typedef int ZSTD_CDict ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 size_t FUNC_3 (TYPE_1__*,int *,int ,int const*,TYPE_2__,unsigned long long) ;
 int VAR_0 ;

size_t FUNC_4(ZSTD_CStream* VAR_1,
                                            const ZSTD_CDict* VAR_2,
                                            ZSTD_frameParameters VAR_3,
                                            unsigned long long VAR_4)
{
    FUNC_0(4, "ZSTD_initCStream_usingCDict_advanced");
    if (!VAR_2) return FUNC_1(VAR_0);
    { ZSTD_CCtx_params VAR_5 = VAR_1->requestedParams;
        VAR_5.cParams = FUNC_2(VAR_2);
        VAR_5.fParams = VAR_3;
        return FUNC_3(VAR_1,
                                ((void*)0), 0, VAR_2,
                                VAR_5, VAR_4);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ZSTD_frameParameters ;
typedef int ZSTD_CDict ;
struct TYPE_9__ {int windowLog; } ;
struct TYPE_7__ {int fParams; TYPE_3__ cParams; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;
struct TYPE_8__ {TYPE_1__ requestedParams; } ;
typedef TYPE_2__ ZSTD_CCtx ;
typedef int U32 ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,int const) ;
 int FUNC_3 (unsigned long long const,unsigned int) ;
 unsigned long long const VAR_0 ;
 size_t FUNC_4 (TYPE_2__* const,int *,int ,int ,int ,int const* const,TYPE_1__,unsigned long long const,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_5 (int const* const) ;
 int FUNC_6 (int const) ;
 int VAR_3 ;
 int VAR_4 ;

size_t FUNC_7(
    ZSTD_CCtx* const VAR_5, const ZSTD_CDict* const VAR_6,
    ZSTD_frameParameters const VAR_7, unsigned long long const VAR_8)
{
    FUNC_0(4, "ZSTD_compressBegin_usingCDict_advanced");
    if (VAR_6==((void*)0)) return FUNC_1(VAR_4);
    { ZSTD_CCtx_params VAR_9 = VAR_5->requestedParams;
        VAR_9.cParams = FUNC_5(VAR_6);




        if (VAR_8 != VAR_0) {
            U32 const VAR_10 = (U32)FUNC_3(VAR_8, 1U << 19);
            U32 const VAR_11 = VAR_10 > 1 ? FUNC_6(VAR_10 - 1) + 1 : 1;
            VAR_9.cParams.windowLog = FUNC_2(VAR_9.cParams.windowLog, VAR_11);
        }
        VAR_9.fParams = VAR_7;
        return FUNC_4(VAR_5,
                                           ((void*)0), 0, VAR_1, VAR_2,
                                           VAR_6,
                                           VAR_9, VAR_8,
                                           VAR_3);
    }
}

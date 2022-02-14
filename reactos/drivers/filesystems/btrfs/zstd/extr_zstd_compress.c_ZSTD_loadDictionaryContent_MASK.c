
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int const* const base; } ;
struct TYPE_12__ {TYPE_3__ window; void* nextToUpdate; int cParams; void* loadedDictEnd; } ;
typedef TYPE_1__ ZSTD_matchState_t ;
typedef int ZSTD_dictTableLoadMethod_e ;
struct TYPE_11__ {int strategy; } ;
struct TYPE_13__ {TYPE_10__ cParams; scalar_t__ forceWindow; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
typedef void* U32 ;
typedef int BYTE ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_10__,int ) ;





 int FUNC_1 (TYPE_1__*,int const* const,int ) ;
 int FUNC_2 (TYPE_1__*,int const* const,int ) ;

 int FUNC_3 (TYPE_1__*,int const* const) ;


 int FUNC_4 (TYPE_1__*,int const* const,int const* const) ;
 int FUNC_5 (TYPE_3__*,void const*,size_t) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static size_t FUNC_7(ZSTD_matchState_t* VAR_1,
                                         ZSTD_CCtx_params const* VAR_2,
                                         const void* VAR_3, size_t VAR_4,
                                         ZSTD_dictTableLoadMethod_e VAR_5)
{
    const BYTE* const VAR_6 = (const BYTE*) VAR_3;
    const BYTE* const VAR_7 = VAR_6 + VAR_4;

    FUNC_5(&VAR_1->window, VAR_3, VAR_4);
    VAR_1->loadedDictEnd = VAR_2->forceWindow ? 0 : (U32)(VAR_7 - VAR_1->window.base);


    FUNC_0(VAR_2->cParams, VAR_1->cParams);

    if (VAR_4 <= VAR_0) return 0;

    switch(VAR_2->cParams.strategy)
    {
    case 131:
        FUNC_2(VAR_1, VAR_7, VAR_5);
        break;
    case 132:
        FUNC_1(VAR_1, VAR_7, VAR_5);
        break;

    case 130:
    case 129:
    case 128:
        if (VAR_4 >= VAR_0)
            FUNC_3(VAR_1, VAR_7-VAR_0);
        break;

    case 135:
    case 134:
    case 133:
        if (VAR_4 >= VAR_0)
            FUNC_4(VAR_1, VAR_7-VAR_0, VAR_7);
        break;

    default:
        FUNC_6(0);
    }

    VAR_1->nextToUpdate = (U32)(VAR_7 - VAR_1->window.base);
    return 0;
}

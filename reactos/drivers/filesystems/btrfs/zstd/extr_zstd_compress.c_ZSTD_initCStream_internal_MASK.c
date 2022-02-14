
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int const* cdict; int const* cdictLocal; int customMem; scalar_t__ staticSize; } ;
typedef TYPE_1__ ZSTD_CStream ;
typedef int ZSTD_CDict ;
struct TYPE_9__ {int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int const* FUNC_3 (void const*,size_t,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_2__*,unsigned long long,size_t) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (TYPE_1__*,int *,int ,int ,int const*,TYPE_2__,unsigned long long) ;
 int FUNC_9 (int) ;
 int VAR_2 ;

size_t FUNC_10(ZSTD_CStream* VAR_3,
                    const void* VAR_4, size_t VAR_5, const ZSTD_CDict* VAR_6,
                    ZSTD_CCtx_params VAR_7, unsigned long long VAR_8)
{
    FUNC_0(4, "ZSTD_initCStream_internal");
    VAR_7.cParams = FUNC_5(&VAR_7, VAR_8, VAR_5);
    FUNC_9(!FUNC_7(FUNC_2(VAR_7.cParams)));
    FUNC_9(!((VAR_4) && (VAR_6)));

    if (VAR_4 && VAR_5 >= 8) {
        FUNC_0(4, "loading dictionary of size %u", (U32)VAR_5);
        if (VAR_3->staticSize) {

            return FUNC_1(VAR_2);
        }
        FUNC_4(VAR_3->cdictLocal);
        VAR_3->cdictLocal = FUNC_3(VAR_4, VAR_5,
                                            VAR_1, VAR_0,
                                            VAR_7.cParams, VAR_3->customMem);
        VAR_3->cdict = VAR_3->cdictLocal;
        if (VAR_3->cdictLocal == ((void*)0)) return FUNC_1(VAR_2);
    } else {
        if (VAR_6) {
            VAR_7.cParams = FUNC_6(VAR_6);
        }
        FUNC_4(VAR_3->cdictLocal);
        VAR_3->cdictLocal = ((void*)0);
        VAR_3->cdict = VAR_6;
    }

    return FUNC_8(VAR_3, ((void*)0), 0, VAR_0, VAR_3->cdict, VAR_7, VAR_8);
}

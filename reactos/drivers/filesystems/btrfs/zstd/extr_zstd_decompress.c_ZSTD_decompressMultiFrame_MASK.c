
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ZSTD_DDict ;
struct TYPE_7__ {scalar_t__ staticSize; } ;
typedef TYPE_1__ ZSTD_DCtx ;
typedef int U32 ;
typedef void BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (void const*) ;
 void* FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 int FUNC_6 (TYPE_1__*,void*) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_1__*,void const*,size_t) ;
 size_t FUNC_9 (TYPE_1__*,void*,size_t,void const**,size_t*) ;
 size_t FUNC_10 (void*,size_t,void const*,size_t const,void const*,size_t) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_11 (void const*,size_t) ;
 size_t VAR_4 ;
 scalar_t__ FUNC_12 (size_t const) ;
 scalar_t__ FUNC_13 (size_t const) ;
 scalar_t__ FUNC_14 (void const*,size_t) ;
 size_t VAR_5 ;
 int FUNC_15 (int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static size_t FUNC_16(ZSTD_DCtx* VAR_8,
                                        void* VAR_9, size_t VAR_10,
                                  const void* VAR_11, size_t VAR_12,
                                  const void* VAR_13, size_t VAR_14,
                                  const ZSTD_DDict* VAR_15)
{
    void* const VAR_16 = VAR_9;
    int VAR_17 = 0;

    FUNC_1(5, "ZSTD_decompressMultiFrame");
    FUNC_15(VAR_13==((void*)0) || VAR_15==((void*)0));

    if (VAR_15) {
        VAR_13 = FUNC_4(VAR_15);
        VAR_14 = FUNC_5(VAR_15);
    }

    while (VAR_12 >= VAR_4) {
        { U32 const VAR_18 = FUNC_3(VAR_11);
            FUNC_1(4, "reading magic number %08X (expecting %08X)",
                        (U32)VAR_18, (U32)VAR_1);
            if ((VAR_18 & 0xFFFFFFF0U) == VAR_2) {
                size_t VAR_19;
                if (VAR_12 < VAR_5)
                    return FUNC_2(VAR_7);
                VAR_19 = FUNC_3((const BYTE*)VAR_11 + VAR_0)
                              + VAR_5;
                if (VAR_12 < VAR_19) return FUNC_2(VAR_7);

                VAR_11 = (const BYTE *)VAR_11 + VAR_19;
                VAR_12 -= VAR_19;
                continue;
        } }

        if (VAR_15) {

            FUNC_0(FUNC_7(VAR_8, VAR_15));
        } else {


            FUNC_0(FUNC_8(VAR_8, VAR_13, VAR_14));
        }
        FUNC_6(VAR_8, VAR_9);

        { const size_t VAR_20 = FUNC_9(VAR_8, VAR_9, VAR_10,
                                                    &VAR_11, &VAR_12);
            if ( (FUNC_12(VAR_20) == VAR_3)
              && (VAR_17==1) ) {
                return FUNC_2(VAR_7);
            }
            if (FUNC_13(VAR_20)) return VAR_20;

            VAR_9 = (BYTE*)VAR_9 + VAR_20;
            VAR_10 -= VAR_20;
        }
        VAR_17 = 1;
    }

    if (VAR_12) return FUNC_2(VAR_7);

    return (BYTE*)VAR_9 - (BYTE*)VAR_16;
}

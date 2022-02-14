
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_longOffset_e ;
struct TYPE_8__ {unsigned long long windowSize; } ;
struct TYPE_9__ {int OFTptr; TYPE_1__ fParams; } ;
typedef TYPE_2__ ZSTD_DCtx ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,scalar_t__) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned long long VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_4 (TYPE_2__*,void const*,size_t) ;
 size_t FUNC_5 (TYPE_2__*,int*,int const*,size_t) ;
 size_t FUNC_6 (TYPE_2__*,void*,size_t,int const*,size_t,int,int const) ;
 size_t FUNC_7 (TYPE_2__*,void*,size_t,int const*,size_t,int,int const) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (size_t const) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_10(ZSTD_DCtx* VAR_3,
                            void* VAR_4, size_t VAR_5,
                      const void* VAR_6, size_t VAR_7, const int VAR_8)
{
    const BYTE* VAR_9 = (const BYTE*)VAR_6;






    ZSTD_longOffset_e const VAR_10 = (ZSTD_longOffset_e)(FUNC_2() && (!VAR_8 || VAR_3->fParams.windowSize > (1ULL << VAR_0)));
    FUNC_0(5, "ZSTD_decompressBlock_internal (size : %u)", (U32)VAR_7);

    if (VAR_7 >= VAR_1) return FUNC_1(VAR_2);


    { size_t const VAR_11 = FUNC_4(VAR_3, VAR_6, VAR_7);
        FUNC_0(5, "ZSTD_decodeLiteralsBlock : %u", (U32)VAR_11);
        if (FUNC_9(VAR_11)) return VAR_11;
        VAR_9 += VAR_11;
        VAR_7 -= VAR_11;
    }


    { int VAR_12;
        size_t const VAR_13 = FUNC_5(VAR_3, &VAR_12, VAR_9, VAR_7);
        if (FUNC_9(VAR_13)) return VAR_13;
        VAR_9 += VAR_13;
        VAR_7 -= VAR_13;

        if ( (!VAR_8 || VAR_3->fParams.windowSize > (1<<24))
          && (VAR_12>0) ) {
            U32 const VAR_14 = FUNC_8(VAR_3->OFTptr);
            U32 const VAR_15 = FUNC_3() ? 7 : 20;
            if (VAR_14 >= VAR_15)
                return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_9, VAR_7, VAR_12, VAR_10);
        }

        return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_9, VAR_7, VAR_12, VAR_10);
    }
}

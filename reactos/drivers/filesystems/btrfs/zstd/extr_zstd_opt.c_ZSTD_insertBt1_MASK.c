
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* base; scalar_t__* dictBase; int dictLimit; int lowLimit; } ;
struct TYPE_7__ {int hashLog; int chainLog; unsigned int searchLog; } ;
struct TYPE_6__ {int* hashTable; int* chainTable; TYPE_1__ window; TYPE_3__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int,char*,int const) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const) ;
 scalar_t__ FUNC_3 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 size_t FUNC_4 (scalar_t__ const* const,int const,int const) ;
 int FUNC_5 (int) ;

__attribute__((used)) static U32 FUNC_6(
                ZSTD_matchState_t* VAR_0,
                const BYTE* const VAR_1, const BYTE* const VAR_2,
                U32 const VAR_3, const int VAR_4)
{
    const ZSTD_compressionParameters* const VAR_5 = &VAR_0->cParams;
    U32* const VAR_6 = VAR_0->hashTable;
    U32 const VAR_7 = VAR_5->hashLog;
    size_t const VAR_8 = FUNC_4(VAR_1, VAR_7, VAR_3);
    U32* const VAR_9 = VAR_0->chainTable;
    U32 const VAR_10 = VAR_5->chainLog - 1;
    U32 const VAR_11 = (1 << VAR_10) - 1;
    U32 VAR_12 = VAR_6[VAR_8];
    size_t VAR_13=0, VAR_14=0;
    const BYTE* const VAR_15 = VAR_0->window.base;
    const BYTE* const VAR_16 = VAR_0->window.dictBase;
    const U32 VAR_17 = VAR_0->window.dictLimit;
    const BYTE* const VAR_18 = VAR_16 + VAR_17;
    const BYTE* const VAR_19 = VAR_15 + VAR_17;
    const BYTE* VAR_20;
    const U32 VAR_21 = (U32)(VAR_1-VAR_15);
    const U32 VAR_22 = VAR_11 >= VAR_21 ? 0 : VAR_21 - VAR_11;
    U32* VAR_23 = VAR_9 + 2*(VAR_21&VAR_11);
    U32* VAR_24 = VAR_23 + 1;
    U32 VAR_25;
    U32 const VAR_26 = VAR_0->window.lowLimit;
    U32 const VAR_27 = VAR_26 ? VAR_26 : 1;
    U32 VAR_28 = VAR_21+8+1;
    size_t VAR_29 = 8;
    U32 VAR_30 = 1U << VAR_5->searchLog;







    FUNC_0(8, "ZSTD_insertBt1 (%u)", VAR_21);

    FUNC_5(VAR_1 <= VAR_2-8);
    VAR_6[VAR_8] = VAR_21;

    while (VAR_30-- && (VAR_12 >= VAR_27)) {
        U32* const VAR_31 = VAR_9 + 2*(VAR_12 & VAR_11);
        size_t VAR_32 = FUNC_1(VAR_13, VAR_14);
        FUNC_5(VAR_12 < VAR_21);
        if (!VAR_4 || (VAR_12+VAR_32 >= VAR_17)) {
            FUNC_5(VAR_12+VAR_32 >= VAR_17);
            VAR_20 = VAR_15 + VAR_12;
            VAR_32 += FUNC_2(VAR_1+VAR_32, VAR_20+VAR_32, VAR_2);
        } else {
            VAR_20 = VAR_16 + VAR_12;
            VAR_32 += FUNC_3(VAR_1+VAR_32, VAR_20+VAR_32, VAR_2, VAR_18, VAR_19);
            if (VAR_12+VAR_32 >= VAR_17)
                VAR_20 = VAR_15 + VAR_12;
        }

        if (VAR_32 > VAR_29) {
            VAR_29 = VAR_32;
            if (VAR_32 > VAR_28 - VAR_12)
                VAR_28 = VAR_12 + (U32)VAR_32;
        }

        if (VAR_1+VAR_32 == VAR_2) {
            break;
        }

        if (VAR_20[VAR_32] < VAR_1[VAR_32]) {

            *VAR_23 = VAR_12;
            VAR_13 = VAR_32;
            if (VAR_12 <= VAR_22) { VAR_23=&VAR_25; break; }
            VAR_23 = VAR_31+1;
            VAR_12 = VAR_31[1];
        } else {

            *VAR_24 = VAR_12;
            VAR_14 = VAR_32;
            if (VAR_12 <= VAR_22) { VAR_24=&VAR_25; break; }
            VAR_24 = VAR_31;
            VAR_12 = VAR_31[0];
    } }

    *VAR_23 = *VAR_24 = 0;
    if (VAR_29 > 384) return FUNC_1(192, (U32)(VAR_29 - 384));
    FUNC_5(VAR_28 > VAR_21 + 8);
    return VAR_28 - (VAR_21 + 8);
}

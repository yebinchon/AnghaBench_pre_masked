
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hashLog; int chainLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
struct TYPE_7__ {int* hashTable; int* chainTable; scalar_t__* base; scalar_t__* dictBase; int dictLimit; int lowLimit; int nextToUpdate; TYPE_2__ params; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 size_t FUNC_0 (size_t,size_t) ;
 int const VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const) ;
 scalar_t__ FUNC_2 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 size_t FUNC_3 (scalar_t__ const* const,int const,int const) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static size_t FUNC_5(ZSTD_CCtx *VAR_1, const BYTE *const VAR_2, const BYTE *const VAR_3, size_t *VAR_4, U32 VAR_5, const U32 VAR_6,
         U32 VAR_7)
{
 U32 *const VAR_8 = VAR_1->hashTable;
 U32 const VAR_9 = VAR_1->params.cParams.hashLog;
 size_t const VAR_10 = FUNC_3(VAR_2, VAR_9, VAR_6);
 U32 *const VAR_11 = VAR_1->chainTable;
 U32 const VAR_12 = VAR_1->params.cParams.chainLog - 1;
 U32 const VAR_13 = (1 << VAR_12) - 1;
 U32 VAR_14 = VAR_8[VAR_10];
 size_t VAR_15 = 0, VAR_16 = 0;
 const BYTE *const VAR_17 = VAR_1->base;
 const BYTE *const VAR_18 = VAR_1->dictBase;
 const U32 VAR_19 = VAR_1->dictLimit;
 const BYTE *const VAR_20 = VAR_18 + VAR_19;
 const BYTE *const VAR_21 = VAR_17 + VAR_19;
 const U32 VAR_22 = (U32)(VAR_2 - VAR_17);
 const U32 VAR_23 = VAR_13 >= VAR_22 ? 0 : VAR_22 - VAR_13;
 const U32 VAR_24 = VAR_1->lowLimit;
 U32 *VAR_25 = VAR_11 + 2 * (VAR_22 & VAR_13);
 U32 *VAR_26 = VAR_11 + 2 * (VAR_22 & VAR_13) + 1;
 U32 VAR_27 = VAR_22 + 8;
 U32 VAR_28;
 size_t VAR_29 = 0;

 VAR_8[VAR_10] = VAR_22;

 while (VAR_5-- && (VAR_14 > VAR_24)) {
  U32 *const VAR_30 = VAR_11 + 2 * (VAR_14 & VAR_13);
  size_t VAR_31 = FUNC_0(VAR_15, VAR_16);
  const BYTE *VAR_32;

  if ((!VAR_7) || (VAR_14 + VAR_31 >= VAR_19)) {
   VAR_32 = VAR_17 + VAR_14;
   if (VAR_32[VAR_31] == VAR_2[VAR_31])
    VAR_31 += FUNC_1(VAR_2 + VAR_31 + 1, VAR_32 + VAR_31 + 1, VAR_3) + 1;
  } else {
   VAR_32 = VAR_18 + VAR_14;
   VAR_31 += FUNC_2(VAR_2 + VAR_31, VAR_32 + VAR_31, VAR_3, VAR_20, VAR_21);
   if (VAR_14 + VAR_31 >= VAR_19)
    VAR_32 = VAR_17 + VAR_14;
  }

  if (VAR_31 > VAR_29) {
   if (VAR_31 > VAR_27 - VAR_14)
    VAR_27 = VAR_14 + (U32)VAR_31;
   if ((4 * (int)(VAR_31 - VAR_29)) > (int)(FUNC_4(VAR_22 - VAR_14 + 1) - FUNC_4((U32)VAR_4[0] + 1)))
    VAR_29 = VAR_31, *VAR_4 = VAR_0 + VAR_22 - VAR_14;
   if (VAR_2 + VAR_31 == VAR_3)
    break;
  }

  if (VAR_32[VAR_31] < VAR_2[VAR_31]) {

   *VAR_25 = VAR_14;
   VAR_15 = VAR_31;
   if (VAR_14 <= VAR_23) {
    VAR_25 = &VAR_28;
    break;
   }
   VAR_25 = VAR_30 + 1;
   VAR_14 = VAR_30[1];
  } else {

   *VAR_26 = VAR_14;
   VAR_16 = VAR_31;
   if (VAR_14 <= VAR_23) {
    VAR_26 = &VAR_28;
    break;
   }
   VAR_26 = VAR_30;
   VAR_14 = VAR_30[0];
  }
 }

 *VAR_25 = *VAR_26 = 0;

 VAR_1->nextToUpdate = (VAR_27 > VAR_22 + 8) ? VAR_27 - 8 : VAR_22 + 1;
 return VAR_29;
}

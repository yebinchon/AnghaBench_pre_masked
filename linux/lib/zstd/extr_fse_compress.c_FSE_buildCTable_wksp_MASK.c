
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_2__ {unsigned int deltaNbBits; unsigned int deltaFindState; } ;
typedef TYPE_1__ FSE_symbolCompressionTransform ;
typedef size_t FSE_FUNCTION_TYPE ;
typedef int FSE_CTable ;


 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (short const) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int const) ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_4(FSE_CTable *VAR_3, const short *VAR_4, unsigned VAR_5, unsigned VAR_6, void *VAR_7, size_t VAR_8)
{
 U32 const VAR_9 = 1 << VAR_6;
 U32 const VAR_10 = VAR_9 - 1;
 void *const VAR_11 = VAR_3;
 U16 *const VAR_12 = ((U16 *)VAR_11) + 2;
 void *const VAR_13 = ((U32 *)VAR_11) + 1 + (VAR_6 ? VAR_9 >> 1 : 1);
 FSE_symbolCompressionTransform *const VAR_14 = (FSE_symbolCompressionTransform *)(VAR_13);
 U32 const VAR_15 = FUNC_3(VAR_9);
 U32 VAR_16 = VAR_9 - 1;

 U32 *VAR_17;
 FSE_FUNCTION_TYPE *VAR_18;
 size_t VAR_19 = 0;

 VAR_17 = (U32 *)VAR_7 + VAR_19;
 VAR_19 += VAR_0 + 2;
 VAR_18 = (FSE_FUNCTION_TYPE *)((U32 *)VAR_7 + VAR_19);
 VAR_19 += FUNC_0(sizeof(FSE_FUNCTION_TYPE) * ((size_t)1 << VAR_6), sizeof(U32)) >> 2;

 if ((VAR_19 << 2) > VAR_8)
  return FUNC_2(VAR_2);
 VAR_7 = (U32 *)VAR_7 + VAR_19;
 VAR_8 -= (VAR_19 << 2);


 VAR_12[-2] = (U16)VAR_6;
 VAR_12[-1] = (U16)VAR_5;





 {
  U32 VAR_20;
  VAR_17[0] = 0;
  for (VAR_20 = 1; VAR_20 <= VAR_5 + 1; VAR_20++) {
   if (VAR_4[VAR_20 - 1] == -1) {
    VAR_17[VAR_20] = VAR_17[VAR_20 - 1] + 1;
    VAR_18[VAR_16--] = (FSE_FUNCTION_TYPE)(VAR_20 - 1);
   } else {
    VAR_17[VAR_20] = VAR_17[VAR_20 - 1] + VAR_4[VAR_20 - 1];
   }
  }
  VAR_17[VAR_5 + 1] = VAR_9 + 1;
 }


 {
  U32 VAR_21 = 0;
  U32 VAR_22;
  for (VAR_22 = 0; VAR_22 <= VAR_5; VAR_22++) {
   int VAR_23;
   for (VAR_23 = 0; VAR_23 < VAR_4[VAR_22]; VAR_23++) {
    VAR_18[VAR_21] = (FSE_FUNCTION_TYPE)VAR_22;
    VAR_21 = (VAR_21 + VAR_15) & VAR_10;
    while (VAR_21 > VAR_16)
     VAR_21 = (VAR_21 + VAR_15) & VAR_10;
   }
  }

  if (VAR_21 != 0)
   return FUNC_2(VAR_1);
 }


 {
  U32 VAR_24;
  for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
   FSE_FUNCTION_TYPE VAR_25 = VAR_18[VAR_24];
   VAR_12[VAR_17[VAR_25]++] = (U16)(VAR_9 + VAR_24);
  }
 }


 {
  unsigned VAR_26 = 0;
  unsigned VAR_27;
  for (VAR_27 = 0; VAR_27 <= VAR_5; VAR_27++) {
   switch (VAR_4[VAR_27]) {
   case 0: break;

   case -1:
   case 1:
    VAR_14[VAR_27].deltaNbBits = (VAR_6 << 16) - (1 << VAR_6);
    VAR_14[VAR_27].deltaFindState = VAR_26 - 1;
    VAR_26++;
    break;
   default: {
    U32 const VAR_28 = VAR_6 - FUNC_1(VAR_4[VAR_27] - 1);
    U32 const VAR_29 = VAR_4[VAR_27] << VAR_28;
    VAR_14[VAR_27].deltaNbBits = (VAR_28 << 16) - VAR_29;
    VAR_14[VAR_27].deltaFindState = VAR_26 - VAR_4[VAR_27];
    VAR_26 += VAR_4[VAR_27];
   }
   }
  }
 }

 return 0;
}

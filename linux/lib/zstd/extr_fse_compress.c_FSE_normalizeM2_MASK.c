
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef size_t U32 ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const,size_t) ;

__attribute__((used)) static size_t FUNC_2(short *VAR_1, U32 VAR_2, const unsigned *VAR_3, size_t VAR_4, U32 VAR_5)
{
 short const VAR_6 = -2;
 U32 VAR_7;
 U32 VAR_8 = 0;
 U32 VAR_9;


 U32 const VAR_10 = (U32)(VAR_4 >> VAR_2);
 U32 VAR_11 = (U32)((VAR_4 * 3) >> (VAR_2 + 1));

 for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {
  if (VAR_3[VAR_7] == 0) {
   VAR_1[VAR_7] = 0;
   continue;
  }
  if (VAR_3[VAR_7] <= VAR_10) {
   VAR_1[VAR_7] = -1;
   VAR_8++;
   VAR_4 -= VAR_3[VAR_7];
   continue;
  }
  if (VAR_3[VAR_7] <= VAR_11) {
   VAR_1[VAR_7] = 1;
   VAR_8++;
   VAR_4 -= VAR_3[VAR_7];
   continue;
  }

  VAR_1[VAR_7] = VAR_6;
 }
 VAR_9 = (1 << VAR_2) - VAR_8;

 if ((VAR_4 / VAR_9) > VAR_11) {

  VAR_11 = (U32)((VAR_4 * 3) / (VAR_9 * 2));
  for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {
   if ((VAR_1[VAR_7] == VAR_6) && (VAR_3[VAR_7] <= VAR_11)) {
    VAR_1[VAR_7] = 1;
    VAR_8++;
    VAR_4 -= VAR_3[VAR_7];
    continue;
   }
  }
  VAR_9 = (1 << VAR_2) - VAR_8;
 }

 if (VAR_8 == VAR_5 + 1) {



  U32 VAR_12 = 0, VAR_13 = 0;
  for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++)
   if (VAR_3[VAR_7] > VAR_13)
    VAR_12 = VAR_7, VAR_13 = VAR_3[VAR_7];
  VAR_1[VAR_12] += (short)VAR_9;
  return 0;
 }

 if (VAR_4 == 0) {

  for (VAR_7 = 0; VAR_9 > 0; VAR_7 = (VAR_7 + 1) % (VAR_5 + 1))
   if (VAR_1[VAR_7] > 0)
    VAR_9--, VAR_1[VAR_7]++;
  return 0;
 }

 {
  U64 const VAR_14 = 62 - VAR_2;
  U64 const VAR_15 = (1ULL << (VAR_14 - 1)) - 1;
  U64 const VAR_16 = FUNC_1((((U64)1 << VAR_14) * VAR_9) + VAR_15, (U32)VAR_4);
  U64 VAR_17 = VAR_15;
  for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {
   if (VAR_1[VAR_7] == VAR_6) {
    U64 const VAR_18 = VAR_17 + (VAR_3[VAR_7] * VAR_16);
    U32 const VAR_19 = (U32)(VAR_17 >> VAR_14);
    U32 const VAR_20 = (U32)(VAR_18 >> VAR_14);
    U32 const VAR_21 = VAR_20 - VAR_19;
    if (VAR_21 < 1)
     return FUNC_0(VAR_0);
    VAR_1[VAR_7] = (short)VAR_21;
    VAR_17 = VAR_18;
   }
  }
 }

 return 0;
}

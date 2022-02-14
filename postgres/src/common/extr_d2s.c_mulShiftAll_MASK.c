
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int int32 ;


 int FUNC_0 (int const,int const,int const) ;
 int FUNC_1 (int,int const,int*) ;

__attribute__((used)) static inline uint64
FUNC_2(uint64 VAR_0, const uint64 *const VAR_1, const int32 VAR_2,
   uint64 *const VAR_3, uint64 *const VAR_4, const uint32 VAR_5)
{
 VAR_0 <<= 1;

 uint64 VAR_6;
 const uint64 VAR_7 = FUNC_1(VAR_0, VAR_1[0], &VAR_6);
 uint64 VAR_8;
 const uint64 VAR_9 = VAR_6 + FUNC_1(VAR_0, VAR_1[1], &VAR_8);

 VAR_8 += VAR_9 < VAR_6;

 const uint64 VAR_10 = VAR_7 + VAR_1[0];
 const uint64 VAR_11 = VAR_9 + VAR_1[1] + (VAR_10 < VAR_7);
 const uint64 VAR_12 = VAR_8 + (VAR_11 < VAR_9);

 *VAR_3 = FUNC_0(VAR_11, VAR_12, VAR_2 - 64 - 1);

 if (VAR_5 == 1)
 {
  const uint64 VAR_13 = VAR_7 - VAR_1[0];
  const uint64 VAR_14 = VAR_9 - VAR_1[1] - (VAR_13 > VAR_7);
  const uint64 VAR_15 = VAR_8 - (VAR_14 > VAR_9);

  *VAR_4 = FUNC_0(VAR_14, VAR_15, VAR_2 - 64 - 1);
 }
 else
 {
  const uint64 VAR_16 = VAR_7 + VAR_7;
  const uint64 VAR_17 = VAR_9 + VAR_9 + (VAR_16 < VAR_7);
  const uint64 VAR_18 = VAR_8 + VAR_8 + (VAR_17 < VAR_9);
  const uint64 VAR_19 = VAR_16 - VAR_1[0];
  const uint64 VAR_20 = VAR_17 - VAR_1[1] - (VAR_19 > VAR_16);
  const uint64 VAR_21 = VAR_18 - (VAR_20 > VAR_17);

  *VAR_4 = FUNC_0(VAR_20, VAR_21, VAR_2 - 64);
 }

 return FUNC_0(VAR_9, VAR_8, VAR_2 - 64 - 1);
}

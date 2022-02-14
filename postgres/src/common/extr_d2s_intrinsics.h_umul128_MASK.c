
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;



__attribute__((used)) static inline uint64
FUNC_0(const uint64 VAR_0, const uint64 VAR_1, uint64 *const VAR_2)
{




 const uint32 VAR_3 = (uint32) VAR_0;
 const uint32 VAR_4 = (uint32) (VAR_0 >> 32);
 const uint32 VAR_5 = (uint32) VAR_1;
 const uint32 VAR_6 = (uint32) (VAR_1 >> 32);

 const uint64 VAR_7 = (uint64) VAR_3 * VAR_5;
 const uint64 VAR_8 = (uint64) VAR_3 * VAR_6;
 const uint64 VAR_9 = (uint64) VAR_4 * VAR_5;
 const uint64 VAR_10 = (uint64) VAR_4 * VAR_6;

 const uint32 VAR_11 = (uint32) VAR_7;
 const uint32 VAR_12 = (uint32) (VAR_7 >> 32);

 const uint64 VAR_13 = VAR_9 + VAR_12;
 const uint32 VAR_14 = (uint32) (VAR_13);
 const uint32 VAR_15 = (uint32) (VAR_13 >> 32);

 const uint64 VAR_16 = VAR_8 + VAR_14;
 const uint32 VAR_17 = (uint32) (VAR_16);
 const uint32 VAR_18 = (uint32) (VAR_16 >> 32);

 const uint64 VAR_19 = VAR_10 + VAR_15 + VAR_18;
 const uint64 VAR_20 = ((uint64) VAR_17 << 32) + VAR_11;

 *VAR_2 = VAR_19;
 return VAR_20;
}

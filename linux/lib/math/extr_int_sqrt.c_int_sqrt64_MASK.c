
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;

u32 FUNC_2(u64 VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4 = 0;

 if (VAR_1 <= VAR_0)
  return FUNC_1((unsigned long) VAR_1);

 VAR_3 = 1ULL << ((FUNC_0(VAR_1) - 1) & ~1ULL);
 while (VAR_3 != 0) {
  VAR_2 = VAR_4 + VAR_3;
  VAR_4 >>= 1;

  if (VAR_1 >= VAR_2) {
   VAR_1 -= VAR_2;
   VAR_4 += VAR_3;
  }
  VAR_3 >>= 2;
 }

 return VAR_4;
}

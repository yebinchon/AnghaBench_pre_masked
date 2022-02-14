
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0, uint64_t VAR_1)
{
 VAR_0 |= (VAR_1 & (0xffULL << 56));

 if (VAR_0 < VAR_1) {
  if (VAR_1 - VAR_0 > (1ULL << 55))
   VAR_0 += (1ULL << 56);
 } else {
  if (VAR_0 - VAR_1 > (1ULL << 55))
   VAR_0 -= (1ULL << 56);
 }

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



__attribute__((used)) static int FUNC_0(uint64_t VAR_0, uint64_t VAR_1)
{
 const uint64_t VAR_2 = (1ULL << 55);

 if (VAR_0 == VAR_1)
  return 0;

 if (VAR_0 < VAR_1) {
  if (VAR_1 - VAR_0 < VAR_2)
   return -1;
  else
   return 1;
 } else {
  if (VAR_0 - VAR_1 < VAR_2)
   return 1;
  else
   return -1;
 }
}

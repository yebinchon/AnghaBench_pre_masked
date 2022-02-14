
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static inline bool FUNC_0(uint8_t *VAR_0, long VAR_1)
{
 for (long VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2 * 4 + 3] != 0) {
   return 1;
  }
 }

 return 0;
}

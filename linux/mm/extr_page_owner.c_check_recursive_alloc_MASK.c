
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline bool FUNC_0(unsigned long *VAR_0,
      unsigned int VAR_1,
      unsigned long VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   return 1;
 }
 return 0;
}

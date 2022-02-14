
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static inline int FUNC_0(u8 *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;


 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_0[VAR_3] < VAR_1[VAR_3])
   return -1;
  else if (VAR_0[VAR_3] > VAR_1[VAR_3])
   return 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static inline size_t FUNC_0(u8 *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;

 while (VAR_2 < VAR_1) {
  u8 VAR_3 = VAR_0[0];

  if (VAR_3 == 0)
   return VAR_2;

  VAR_2 += VAR_3 + 1;
  VAR_0 += VAR_3 + 1;
 }

 return VAR_1;
}

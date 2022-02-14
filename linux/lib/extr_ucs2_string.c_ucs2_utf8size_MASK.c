
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs2_char_t ;
typedef int u16 ;



unsigned long
FUNC_0(const ucs2_char_t *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2 = 0;

 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
  u16 VAR_3 = VAR_0[VAR_1];

  if (VAR_3 >= 0x800)
   VAR_2 += 3;
  else if (VAR_3 >= 0x80)
   VAR_2 += 2;
  else
   VAR_2 += 1;
 }

 return VAR_2;
}

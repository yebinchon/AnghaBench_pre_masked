
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8 ;
typedef int tmsize_t ;


 size_t* VAR_0 ;

void
FUNC_0(uint8* VAR_1, tmsize_t VAR_2)
{
 for (; VAR_2 > 8; VAR_2 -= 8) {
  VAR_1[0] = VAR_0[VAR_1[0]];
  VAR_1[1] = VAR_0[VAR_1[1]];
  VAR_1[2] = VAR_0[VAR_1[2]];
  VAR_1[3] = VAR_0[VAR_1[3]];
  VAR_1[4] = VAR_0[VAR_1[4]];
  VAR_1[5] = VAR_0[VAR_1[5]];
  VAR_1[6] = VAR_0[VAR_1[6]];
  VAR_1[7] = VAR_0[VAR_1[7]];
  VAR_1 += 8;
 }
 while (VAR_2-- > 0) {
  *VAR_1 = VAR_0[*VAR_1];
  VAR_1++;
 }
}

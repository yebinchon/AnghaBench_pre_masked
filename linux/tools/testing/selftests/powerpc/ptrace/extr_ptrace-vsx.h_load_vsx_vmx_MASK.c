
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(unsigned long *VAR_2, unsigned long *VAR_3,
  unsigned long VAR_4[][2])
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_3[VAR_5] = VAR_2[1 + 2 * VAR_5];

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4[VAR_5][0] = VAR_2[64 + 2 * VAR_5];
  VAR_4[VAR_5][1] = VAR_2[65 + 2 * VAR_5];
 }
}

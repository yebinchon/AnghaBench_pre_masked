
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char*** VAR_0 ;
 scalar_t__ FUNC_0 (float,unsigned char,int) ;

void FUNC_1(int VAR_1, int VAR_2, int VAR_3, float VAR_4)
{
   int VAR_5;
   for (VAR_5=0; VAR_5 < 3; ++VAR_5)
      VAR_0[VAR_2][VAR_1][VAR_5] = (unsigned char) (FUNC_0(VAR_4, VAR_0[VAR_2][VAR_1][VAR_5], VAR_3)+0.5);
}

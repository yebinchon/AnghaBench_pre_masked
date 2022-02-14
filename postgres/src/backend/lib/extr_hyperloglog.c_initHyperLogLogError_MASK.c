
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int hyperLogLogState ;
typedef int Size ;


 int FUNC_0 (int *,int) ;
 double FUNC_1 (double) ;

void
FUNC_2(hyperLogLogState *VAR_0, double VAR_1)
{
 uint8 VAR_2 = 4;

 while (VAR_2 < 16)
 {
  double VAR_3 = (Size) 1 << VAR_2;

  if (1.04 / FUNC_1(VAR_3) < VAR_1)
   break;
  VAR_2++;
 }

 FUNC_0(VAR_0, VAR_2);
}

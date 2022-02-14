
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long) ;

void FUNC_1(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_0;
 unsigned long VAR_6 = VAR_3 & ~(VAR_5 - 1);
 unsigned long VAR_7 = (VAR_3 + VAR_4 - 1) & ~(VAR_5 - 1);

 while (1) {
  FUNC_0(VAR_2, VAR_6);
  FUNC_0(VAR_1, VAR_6);
  if (VAR_6 == VAR_7)
   break;
  VAR_6 += VAR_5;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (unsigned int const) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(unsigned long *VAR_1, unsigned int VAR_2, int VAR_3)
{
 unsigned long *VAR_4 = VAR_1 + FUNC_2(VAR_2);
 const unsigned int VAR_5 = VAR_2 + VAR_3;
 int VAR_6 = VAR_0 - (VAR_2 % VAR_0);
 unsigned long VAR_7 = FUNC_0(VAR_2);

 while (VAR_3 - VAR_6 >= 0) {
  *VAR_4 &= ~VAR_7;
  VAR_3 -= VAR_6;
  VAR_6 = VAR_0;
  VAR_7 = ~0UL;
  VAR_4++;
 }
 if (VAR_3) {
  VAR_7 &= FUNC_1(VAR_5);
  *VAR_4 &= ~VAR_7;
 }
}

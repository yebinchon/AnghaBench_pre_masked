
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long*,int ,unsigned int) ;

void FUNC_2(unsigned long *VAR_1, const unsigned long *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7 = VAR_3/VAR_0, VAR_8 = VAR_3 % VAR_0;
 for (VAR_5 = VAR_6 - VAR_7 - 1; VAR_5 >= 0; --VAR_5) {
  unsigned long VAR_9, VAR_10;





  if (VAR_8 && VAR_5 > 0)
   VAR_10 = VAR_2[VAR_5 - 1] >> (VAR_0 - VAR_8);
  else
   VAR_10 = 0;
  VAR_9 = VAR_2[VAR_5] << VAR_8;
  VAR_1[VAR_5 + VAR_7] = VAR_10 | VAR_9;
 }
 if (VAR_7)
  FUNC_1(VAR_1, 0, VAR_7*sizeof(unsigned long));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long const FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;

int FUNC_1(unsigned long *VAR_1, const unsigned long *VAR_2,
   const unsigned long *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = VAR_4/VAR_0;
 unsigned long VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_7 |= (VAR_1[VAR_5] = VAR_2[VAR_5] & VAR_3[VAR_5]);
 if (VAR_4 % VAR_0)
  VAR_7 |= (VAR_1[VAR_5] = VAR_2[VAR_5] & VAR_3[VAR_5] &
      FUNC_0(VAR_4));
 return VAR_7 != 0;
}

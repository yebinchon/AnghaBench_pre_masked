
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long*,int ,unsigned int) ;

void FUNC_3(unsigned long *VAR_1, const unsigned long *VAR_2,
   unsigned VAR_3, unsigned VAR_4)
{
 unsigned VAR_5, VAR_6 = FUNC_1(VAR_4);
 unsigned VAR_7 = VAR_3/VAR_0, VAR_8 = VAR_3 % VAR_0;
 unsigned long VAR_9 = FUNC_0(VAR_4);
 for (VAR_5 = 0; VAR_7 + VAR_5 < VAR_6; ++VAR_5) {
  unsigned long VAR_10, VAR_11;





  if (!VAR_8 || VAR_7 + VAR_5 + 1 >= VAR_6)
   VAR_10 = 0;
  else {
   VAR_10 = VAR_2[VAR_7 + VAR_5 + 1];
   if (VAR_7 + VAR_5 + 1 == VAR_6 - 1)
    VAR_10 &= VAR_9;
   VAR_10 <<= (VAR_0 - VAR_8);
  }
  VAR_11 = VAR_2[VAR_7 + VAR_5];
  if (VAR_7 + VAR_5 == VAR_6 - 1)
   VAR_11 &= VAR_9;
  VAR_11 >>= VAR_8;
  VAR_1[VAR_5] = VAR_11 | VAR_10;
 }
 if (VAR_7)
  FUNC_2(&VAR_1[VAR_6 - VAR_7], 0, VAR_7*sizeof(unsigned long));
}

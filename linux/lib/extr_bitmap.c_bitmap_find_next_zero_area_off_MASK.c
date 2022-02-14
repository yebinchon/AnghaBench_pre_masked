
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;

unsigned long FUNC_3(unsigned long *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2,
          unsigned int VAR_3,
          unsigned long VAR_4,
          unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
again:
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);


 VAR_6 = FUNC_0(VAR_6 + VAR_5, VAR_4) - VAR_5;

 VAR_7 = VAR_6 + VAR_3;
 if (VAR_7 > VAR_1)
  return VAR_7;
 VAR_8 = FUNC_1(VAR_0, VAR_7, VAR_6);
 if (VAR_8 < VAR_7) {
  VAR_2 = VAR_8 + 1;
  goto again;
 }
 return VAR_6;
}

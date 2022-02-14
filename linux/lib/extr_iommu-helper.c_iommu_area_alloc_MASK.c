
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long*,unsigned long,unsigned long,unsigned int,unsigned long) ;
 int FUNC_2 (unsigned long*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned int,unsigned long,unsigned long) ;

unsigned long FUNC_4(unsigned long *VAR_0, unsigned long VAR_1,
          unsigned long VAR_2, unsigned int VAR_3,
          unsigned long VAR_4, unsigned long VAR_5,
          unsigned long VAR_6)
{
 unsigned long VAR_7;


 VAR_1 -= 1;
again:
 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_7 < VAR_1) {
  if (FUNC_3(VAR_7, VAR_3, VAR_4, VAR_5)) {
   VAR_2 = FUNC_0(VAR_4 + VAR_7, VAR_5) - VAR_4;
   goto again;
  }
  FUNC_2(VAR_0, VAR_7, VAR_3);
  return VAR_7;
 }
 return -1;
}

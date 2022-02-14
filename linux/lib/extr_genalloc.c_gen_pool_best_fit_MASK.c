
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int dummy; } ;


 unsigned long FUNC_0 (unsigned long*,unsigned long,int,unsigned int,int ) ;
 int FUNC_1 (unsigned long*,unsigned long,unsigned long) ;

unsigned long FUNC_2(unsigned long *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, unsigned int VAR_3, void *VAR_4,
  struct gen_pool *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_1;
 unsigned long VAR_8 = VAR_1 + 1;
 unsigned long VAR_9;

 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);

 while (VAR_9 < VAR_1) {
  int VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_9 + VAR_3);
  if ((VAR_10 - VAR_9) < VAR_8) {
   VAR_8 = VAR_10 - VAR_9;
   VAR_7 = VAR_9;
   if (VAR_8 == VAR_3)
    return VAR_7;
  }
  VAR_9 = FUNC_0(VAR_0, VAR_1,
         VAR_10 + 1, VAR_3, 0);
 }

 return VAR_7;
}

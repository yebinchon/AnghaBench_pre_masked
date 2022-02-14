
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

unsigned long FUNC_2(unsigned long VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_0 | VAR_1;

 if (!VAR_0 || !VAR_1)
  return VAR_2;

 VAR_1 >>= FUNC_0(VAR_1);
 if (VAR_1 == 1)
  return VAR_2 & -VAR_2;

 for (;;) {
  VAR_0 >>= FUNC_0(VAR_0);
  if (VAR_0 == 1)
   return VAR_2 & -VAR_2;
  if (VAR_0 == VAR_1)
   return VAR_0 << FUNC_0(VAR_2);

  if (VAR_0 < VAR_1)
   FUNC_1(VAR_0, VAR_1);
  VAR_0 -= VAR_1;
 }
}

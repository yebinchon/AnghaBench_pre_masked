
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_0)
{
 unsigned long VAR_1 = FUNC_0(VAR_0);

 while (VAR_1 > 1) {
  if ((VAR_0 % VAR_1) == 0)
   break;
  VAR_1--;
 }

 return VAR_1 == 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;

int FUNC_1(unsigned long VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_0; VAR_2 < VAR_1; VAR_2 += VAR_3) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_3 == 0)
   VAR_3 = 1;
 }
 return 0;
}

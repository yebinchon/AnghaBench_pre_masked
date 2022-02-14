
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(const unsigned int *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = VAR_2;

 while (VAR_5 > VAR_4) {
  VAR_3 = (VAR_4 + VAR_5) / 2u;

  if (VAR_0[VAR_3] > VAR_1)
   VAR_5 = VAR_3;
  else if (VAR_0[VAR_3] < VAR_1)
   VAR_4 = VAR_3 + 1;
  else
   return 1;
 }

 return 0;
}

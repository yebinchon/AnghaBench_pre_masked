
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;
 int* VAR_1 ;
 char const** VAR_2 ;
 int FUNC_0 (int*) ;

const char **
FUNC_1(int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = FUNC_0(VAR_1) / 2 - 1;
 while (VAR_4 <= VAR_5)
 {
  int VAR_6 = (VAR_4 + VAR_5) >> 1;
  if (VAR_3 < VAR_1[VAR_6 << 1])
   VAR_5 = VAR_6 - 1;
  else if (VAR_3 > VAR_1[VAR_6 << 1])
   VAR_4 = VAR_6 + 1;
  else
   return VAR_0 + VAR_1[(VAR_6 << 1) + 1];
 }
 return VAR_2;
}

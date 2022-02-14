
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char const*,int ) ;

int
FUNC_2(const char *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = FUNC_0(VAR_1) - 1;

 while (VAR_3 <= VAR_4)
 {
  int VAR_5 = (VAR_3 + VAR_4) >> 1;
  int VAR_6 = FUNC_1(VAR_2, VAR_1[VAR_5]);
  if (VAR_6 < 0)
   VAR_4 = VAR_5 - 1;
  else if (VAR_6 > 0)
   VAR_3 = VAR_5 + 1;
  else
   return VAR_0[VAR_5];
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += VAR_5)
 {

  for (VAR_5 = 1; VAR_5 < 127 && VAR_3+VAR_5 < VAR_2; VAR_5++)
   if (VAR_1[0] != VAR_1[VAR_5])
    break;
  if (VAR_5 > 1)
  {

   VAR_0[VAR_4++] = 257-VAR_5;
   VAR_0[VAR_4++] = VAR_1[0];
  }
  else
  {



   int VAR_6;


   for (; VAR_5 < 127 && VAR_3+VAR_5+2 < VAR_2; VAR_5++)
    if (VAR_1[VAR_5] == VAR_1[VAR_5+1] && VAR_1[VAR_5] == VAR_1[VAR_5+2])
     break;

   if (VAR_3 + VAR_5 + 2 >= VAR_2)
   {
    VAR_5 = VAR_2 - VAR_3;
    if (VAR_5 > 127)
     VAR_5 = 127;
   }
   VAR_0[VAR_4++] = VAR_5-1;
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   {
    VAR_0[VAR_4++] = VAR_1[VAR_6];
   }
  }
  VAR_1 += VAR_5;
 }

 return VAR_4;
}

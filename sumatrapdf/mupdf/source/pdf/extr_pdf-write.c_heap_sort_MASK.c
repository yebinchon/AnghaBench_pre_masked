
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(int *VAR_1, int VAR_2, const int *VAR_3, int (*VAR_4)(int, int))
{
 int VAR_5, VAR_6;
 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
 {

  VAR_6 = VAR_5;
  while (VAR_6 != 0)
  {
   int VAR_7;
   int VAR_8 = (VAR_6-1)>>1;
   if (VAR_4(VAR_3[VAR_1[VAR_8]], VAR_3[VAR_1[VAR_6]]))
    break;
   VAR_7 = VAR_1[VAR_8];
   VAR_1[VAR_8] = VAR_1[VAR_6];
   VAR_1[VAR_6] = VAR_7;
   VAR_6 = VAR_8;
  }
 }
 for (VAR_5 = VAR_2-1; VAR_5 > 0; VAR_5--)
 {


  int VAR_9 = VAR_1[0];
  VAR_1[0] = VAR_1[VAR_5];
  VAR_1[VAR_5] = VAR_9;


  VAR_6 = 0;
  while (1)
  {

   int VAR_10 = (VAR_6+1)*2-1;

   if (VAR_10 > VAR_5-1)
    break;

   if (VAR_10 < VAR_5-1 && VAR_4(VAR_3[VAR_1[VAR_10+1]], VAR_3[VAR_1[VAR_10]]))
    VAR_10++;


   if (VAR_4(VAR_3[VAR_1[VAR_6]], VAR_3[VAR_1[VAR_10]]))
    break;
   VAR_9 = VAR_1[VAR_10];
   VAR_1[VAR_10] = VAR_1[VAR_6];
   VAR_1[VAR_6] = VAR_9;
   VAR_6 = VAR_10;
  }
 }
}

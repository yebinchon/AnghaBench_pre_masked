
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32 ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,size_t) ;

char *
FUNC_2(char *VAR_0, int32 VAR_1, int32 VAR_2)
{
 char *VAR_3 = VAR_0;
 char *VAR_4 = &VAR_0[VAR_2];
 int32 VAR_5 = VAR_1;

 FUNC_0(VAR_2 > 0);





 if (VAR_5 < 0)
 {
  *VAR_3++ = '-';
  VAR_2--;






  while (VAR_2--)
  {
   int32 VAR_6 = VAR_5;
   int32 VAR_7;

   VAR_5 /= 10;
   VAR_7 = VAR_6 - VAR_5 * 10;
   VAR_3[VAR_2] = '0' - VAR_7;
  }
 }
 else
 {

  while (VAR_2--)
  {
   int32 VAR_8 = VAR_5;
   int32 VAR_9;

   VAR_5 /= 10;
   VAR_9 = VAR_8 - VAR_5 * 10;
   VAR_3[VAR_2] = '0' + VAR_9;
  }
 }






 if (VAR_5 != 0)
  return FUNC_1(VAR_0, VAR_1);


 return VAR_4;
}

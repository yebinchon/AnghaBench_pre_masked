
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;



char *
FUNC_0(char *VAR_0, int32 VAR_1)
{
 char *VAR_2;
 char *VAR_3;





 if (VAR_1 < 0)
 {
  *VAR_0++ = '-';


  VAR_2 = VAR_0;


  do
  {
   int32 VAR_4 = VAR_1;
   int32 VAR_5;

   VAR_1 /= 10;
   VAR_5 = VAR_4 - VAR_1 * 10;

   *VAR_0++ = '0' - VAR_5;
  } while (VAR_1 != 0);
 }
 else
 {

  VAR_2 = VAR_0;


  do
  {
   int32 VAR_6 = VAR_1;
   int32 VAR_7;

   VAR_1 /= 10;
   VAR_7 = VAR_6 - VAR_1 * 10;
   *VAR_0++ = '0' + VAR_7;
  } while (VAR_1 != 0);
 }


 VAR_3 = VAR_0--;


 while (VAR_2 < VAR_0)
 {
  char VAR_8 = *VAR_2;

  *VAR_2++ = *VAR_0;
  *VAR_0-- = VAR_8;
 }

 return VAR_3;
}

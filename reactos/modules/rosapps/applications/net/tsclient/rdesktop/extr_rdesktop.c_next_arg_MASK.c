
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;

char *
FUNC_2(char *VAR_0, char VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 char *VAR_4 = 0;


 if (*VAR_0 == (char) 0x00)
  return 0;

 VAR_3 = VAR_0;

 while ((VAR_2 = FUNC_0(VAR_3, VAR_1)))
 {
  VAR_4 = VAR_2 - 1;

  if (*VAR_4 == '\\' && (VAR_4 > VAR_0))
  {

   while (*(VAR_4 + 1) != (char) 0x00)
   {
    *VAR_4 = *(VAR_4 + 1);
    VAR_4++;
   }
   *VAR_4 = (char) 0x00;
   VAR_3 = VAR_2;
  }
  else
  {
   VAR_3 = VAR_2 + 1;
   break;
  }

 }


 if (VAR_2)
 {
  *VAR_2 = (char) 0x00;
  return ++VAR_2;
 }


 VAR_2 = VAR_0 + FUNC_1(VAR_0);
 return VAR_2;
}

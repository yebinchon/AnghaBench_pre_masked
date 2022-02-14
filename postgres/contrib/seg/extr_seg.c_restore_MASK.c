
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int,...) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(char *VAR_1, float VAR_2, int VAR_3)
{
 char VAR_4[25] = {
  '0', '0', '0', '0', '0',
  '0', '0', '0', '0', '0',
  '0', '0', '0', '0', '0',
  '0', '0', '0', '0', '0',
  '0', '0', '0', '0', '\0'
 };
 char *VAR_5;
 int VAR_6;
 int VAR_7,
    VAR_8,
    VAR_9;





 VAR_3 = FUNC_1(VAR_3, VAR_0);


 VAR_9 = (VAR_2 < 0 ? 1 : 0);


 FUNC_3(VAR_1, "%.*e", VAR_3 - 1, VAR_2);


 VAR_5 = FUNC_4(VAR_1, 'e');


 if (VAR_5 == ((void*)0))
  return FUNC_6(VAR_1);

 VAR_6 = FUNC_2(VAR_5 + 1);
 if (VAR_6 == 0)
 {

  *VAR_5 = '\0';
 }
 else
 {
  if (FUNC_0(VAR_6) <= 4)
  {




   for (VAR_5 = VAR_1 + VAR_9, VAR_7 = 10, VAR_8 = 0; *VAR_5 != 'e'; VAR_5++, VAR_7++)
   {
    VAR_4[VAR_7] = *VAR_5;
    if (*VAR_5 == '.')
    {
     VAR_8 = VAR_7--;
    }
   }
   if (VAR_8 == 0)
    VAR_8 = VAR_7--;


   if (VAR_6 > 0)
   {
    if (VAR_8 - 10 + VAR_6 >= VAR_3)
    {





     VAR_6 = VAR_8 - 10 + VAR_6 - VAR_3;
     VAR_4[10 + VAR_3] = '\0';


     if (VAR_3 > 1)
     {
      VAR_8 = 11;
      for (VAR_7 = 23; VAR_7 > VAR_8; VAR_7--)
       VAR_4[VAR_7] = VAR_4[VAR_7 - 1];
      VAR_4[VAR_8] = '.';
     }





     if (VAR_3 > 1)
      FUNC_3(&VAR_4[11 + VAR_3], "e%d", VAR_6 + VAR_3 - 1);
     else
      FUNC_3(&VAR_4[11], "e%d", VAR_6 + VAR_3 - 1);

     if (VAR_9)
     {
      VAR_4[9] = '-';
      FUNC_5(VAR_1, &VAR_4[9]);
     }
     else
      FUNC_5(VAR_1, &VAR_4[10]);
    }
    else
    {
     VAR_8 += VAR_6;
     for (VAR_7 = 23; VAR_7 > VAR_8; VAR_7--)
      VAR_4[VAR_7] = VAR_4[VAR_7 - 1];
     VAR_4[11 + VAR_3] = '\0';
     VAR_4[VAR_8] = '.';
     if (VAR_9)
     {
      VAR_4[9] = '-';
      FUNC_5(VAR_1, &VAR_4[9]);
     }
     else
      FUNC_5(VAR_1, &VAR_4[10]);
    }
   }
   else
   {
    VAR_8 += VAR_6 - 1;
    VAR_4[10 + VAR_3] = '\0';
    VAR_4[VAR_8] = '.';
    if (VAR_9)
    {
     VAR_4[VAR_8 - 2] = '-';
     FUNC_5(VAR_1, &VAR_4[VAR_8 - 2]);
    }
    else
     FUNC_5(VAR_1, &VAR_4[VAR_8 - 1]);
   }
  }





 }
 return FUNC_6(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void
FUNC_7(char *VAR_0)
{
 char *VAR_1,
      *VAR_2;
 char *VAR_3;
 bool VAR_4 = 0;
 int VAR_5;
 FUNC_6(VAR_0);




 VAR_1 = VAR_0;





 VAR_2 = VAR_1;
 for (; *VAR_1; VAR_1++, VAR_2++)
 {

  while (*VAR_1 == '/' && VAR_4)
   VAR_1++;
  if (VAR_2 != VAR_1)
   *VAR_2 = *VAR_1;
  VAR_4 = (*VAR_1 == '/');
 }
 *VAR_2 = '\0';
 VAR_3 = FUNC_0(VAR_0);
 VAR_5 = 0;
 for (;;)
 {
  int VAR_6 = FUNC_4(VAR_3);

  if (VAR_6 >= 2 && FUNC_2(VAR_3 + VAR_6 - 2, "/.") == 0)
   FUNC_5(VAR_0);
  else if (FUNC_2(VAR_3, ".") == 0)
  {

   if (VAR_5 > 0)
    *VAR_3 = '\0';
   break;
  }
  else if ((VAR_6 >= 3 && FUNC_2(VAR_3 + VAR_6 - 3, "/..") == 0) ||
     FUNC_2(VAR_3, "..") == 0)
  {
   FUNC_5(VAR_0);
   VAR_5++;
  }
  else if (VAR_5 > 0 && *VAR_3 != '\0')
  {

   FUNC_5(VAR_0);
   VAR_5--;

   if (*VAR_3 == '\0')
    FUNC_3(VAR_3, ".");
  }
  else
   break;
 }

 if (VAR_5 > 0)
 {





  while (--VAR_5 > 0)
   FUNC_1(VAR_0, "../");
  FUNC_1(VAR_0, "..");
 }
}

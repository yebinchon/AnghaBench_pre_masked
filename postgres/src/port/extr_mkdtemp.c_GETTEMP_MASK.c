
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_7, int *VAR_8, int VAR_9)
{
 char *VAR_10,
      *VAR_11;
 struct stat VAR_12;
 u_int VAR_13;






 static char VAR_14[2] = "aa";
 int VAR_15 = 0;

 FUNC_1(VAR_7 != ((void*)0));


 VAR_13 = FUNC_2();


 for (VAR_11 = VAR_7; *VAR_11; ++VAR_11)
  if (*VAR_11 == 'X')
   VAR_15++;
  else
   VAR_15 = 0;


 if (VAR_15 > 0)
 {
  *--VAR_11 = VAR_14[0];
  VAR_15--;
 }
 if (VAR_15 > 5)
 {
  *--VAR_11 = VAR_14[1];
  VAR_15--;
 }


 for (; VAR_15 > 0; VAR_15--)
 {
  *--VAR_11 = (VAR_13 % 10) + '0';
  VAR_13 /= 10;
 }


 if (VAR_14[0] != 'z')
  VAR_14[0]++;
 else
 {
  VAR_14[0] = 'a';
  if (VAR_14[1] != 'z')
   VAR_14[1]++;
  else
   VAR_14[1] = 'a';
 }





 for (VAR_10 = VAR_11 + 1;; --VAR_11)
 {
  if (VAR_11 <= VAR_7)
   break;
  if (*VAR_11 == '/')
  {
   int VAR_16;

   *VAR_11 = '\0';
   VAR_16 = FUNC_7(VAR_7, &VAR_12);
   *VAR_11 = '/';
   if (VAR_16 == -1)
    return VAR_8 == ((void*)0) && !VAR_9;
   if (!FUNC_0(VAR_12.st_mode))
   {
    VAR_6 = VAR_2;
    return VAR_8 == ((void*)0) && !VAR_9;
   }
   break;
  }
 }

 for (;;)
 {
  if (VAR_8)
  {
   if ((*VAR_8 =
     FUNC_6(VAR_7, VAR_3 | VAR_4 | VAR_5, 0600)) >= 0)
    return 1;
   if (VAR_6 != VAR_0)
    return 0;
  }
  else if (VAR_9)
  {
   if (FUNC_5(VAR_7, 0700) >= 0)
    return 1;
   if (VAR_6 != VAR_0)
    return 0;
  }
  else if (FUNC_4(VAR_7, &VAR_12))
   return VAR_6 == VAR_1 ? 1 : 0;


  for (VAR_11 = VAR_10;;)
  {
   if (!*VAR_11)
    return 0;
   if (*VAR_11 == 'z')
    *VAR_11++ = 'a';
   else
   {
    if (FUNC_3((unsigned char) *VAR_11))
     *VAR_11 = 'a';
    else
     ++*VAR_11;
    break;
   }
  }
 }

}

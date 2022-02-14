
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tztry {int dummy; } ;
struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char** FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,struct tztry*) ;
 int FUNC_5 (char*,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(char *VAR_4, char *VAR_5, struct tztry *VAR_6,
       int *VAR_7, char *VAR_8)
{
 int VAR_9 = FUNC_10(VAR_4);
 char **VAR_10;
 char **VAR_11;

 VAR_10 = FUNC_2(VAR_4);
 if (!VAR_10)
  return;

 for (VAR_11 = VAR_10; *VAR_11; VAR_11++)
 {
  char *VAR_12 = *VAR_11;
  struct stat VAR_13;


  if (VAR_12[0] == '.')
   continue;

  FUNC_5(VAR_4 + VAR_9, VAR_0 - VAR_9,
     "/%s", VAR_12);

  if (FUNC_6(VAR_4, &VAR_13) != 0)
  {




   VAR_4[VAR_9] = '\0';
   continue;
  }

  if (FUNC_0(VAR_13.st_mode))
  {

   FUNC_12(VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8);
  }
  else
  {

   int VAR_14 = FUNC_4(VAR_5, VAR_6);

   if (VAR_14 > *VAR_7)
   {
    *VAR_7 = VAR_14;
    FUNC_9(VAR_8, VAR_5, VAR_1 + 1);
   }
   else if (VAR_14 == *VAR_7)
   {

    int VAR_15 = (FUNC_11(VAR_5) -
          FUNC_11(VAR_8));

    if (VAR_15 > 0 ||
     (VAR_15 == 0 &&
      (FUNC_10(VAR_5) < FUNC_10(VAR_8) ||
       (FUNC_10(VAR_5) == FUNC_10(VAR_8) &&
        FUNC_7(VAR_5, VAR_8) < 0))))
     FUNC_9(VAR_8, VAR_5, VAR_1 + 1);
   }
  }


  VAR_4[VAR_9] = '\0';
 }

 FUNC_3(VAR_10);
}

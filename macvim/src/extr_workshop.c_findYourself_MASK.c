
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char*,char*) ;
 int FUNC_13 (int *,int *,int,int) ;

void
FUNC_14(
    char *VAR_3)
{
    char *VAR_4 = ((void*)0);
    char *VAR_5;
    char *VAR_6;

    if (*VAR_3 == '/')
 VAR_4 = FUNC_9(VAR_3);
    else if (*VAR_3 == '.' || FUNC_7(VAR_3, '/'))
    {
 VAR_4 = (char *) FUNC_4(VAR_0);
 if (FUNC_2(VAR_4, VAR_0) == ((void*)0))
     VAR_4[0] = VAR_1;
 FUNC_6(VAR_4, "/");
 FUNC_6(VAR_4, VAR_3);
    }
    else
    {
 VAR_5 = FUNC_3("PATH");
 if (VAR_5 != ((void*)0))
 {
     VAR_4 = (char *) FUNC_4(VAR_0);
     VAR_6 = FUNC_9(VAR_5);
     VAR_5 = FUNC_12(VAR_6, ":");
     do
     {
  FUNC_8(VAR_4, VAR_5);
  FUNC_6(VAR_4, "/");
  FUNC_6(VAR_4, VAR_3);
  if (FUNC_0(VAR_4, VAR_2) == 0)
      break;
     } while ((VAR_5 = FUNC_12(((void*)0), ":")) != ((void*)0));
     FUNC_1(VAR_6);
 }
    }

    if (VAR_4 != ((void*)0))
    {
 char VAR_7[VAR_0];




 (void)FUNC_13((char_u *)VAR_4, (char_u *)VAR_7, VAR_0, 1);
 VAR_5 = FUNC_11(VAR_7, '/');
 if (VAR_5 != ((void*)0))
     *VAR_5 = VAR_1;
 VAR_5 = FUNC_11(VAR_7, '/');
 if (VAR_5 != ((void*)0))
 {
     if (FUNC_10(VAR_5, "/bin", 4) == 0)
  FUNC_5(VAR_7);
     else if (FUNC_10(VAR_5, "/src", 4) == 0)
     {
  *VAR_5 = VAR_1;
  FUNC_5(VAR_7);
     }
 }
 FUNC_1(VAR_4);
    }
}

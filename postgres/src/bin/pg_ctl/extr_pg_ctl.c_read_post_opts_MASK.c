
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**) ;
 void* FUNC_3 (char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char** FUNC_4 (int ,int*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 if (VAR_3 == ((void*)0))
 {
  VAR_3 = "";
  if (VAR_1 == VAR_0)
  {
   char **VAR_6;
   int VAR_7;

   VAR_6 = FUNC_4(VAR_4, &VAR_7);
   if (VAR_6 == ((void*)0))
   {
    FUNC_6(FUNC_0("%s: could not read file \"%s\"\n"), VAR_5, VAR_4);
    FUNC_1(1);
   }
   else if (VAR_7 != 1)
   {
    FUNC_6(FUNC_0("%s: option file \"%s\" must have exactly one line\n"),
        VAR_5, VAR_4);
    FUNC_1(1);
   }
   else
   {
    char *VAR_8;
    char *VAR_9;

    VAR_8 = VAR_6[0];





    if ((VAR_9 = FUNC_5(VAR_8, " \"")) != ((void*)0))
    {
     *VAR_9 = '\0';
     VAR_3 = FUNC_3(VAR_9 + 1);
    }
    if (VAR_2 == ((void*)0))
     VAR_2 = FUNC_3(VAR_8);
   }


   FUNC_2(VAR_6);
  }
 }
}

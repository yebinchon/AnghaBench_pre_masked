
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,int,int,char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5;
 bool VAR_6 = 0;

 if (VAR_0 == ((void*)0))
  VAR_5 = "null";
 else if (!VAR_2)
  VAR_5 = VAR_0;
 else
 {
  VAR_5 = FUNC_0(FUNC_2(VAR_1) + 1, VAR_3);
  if (VAR_5 != ((void*)0))
  {
   FUNC_3(VAR_0, VAR_1, VAR_5);
   VAR_5[FUNC_2(VAR_1)] = '\0';
   VAR_6 = 1;
  }
  else
   VAR_5 = "no memory for logging of parameter";
 }

 FUNC_4("ecpg_free_params on line %d: parameter %d = %s\n",
    VAR_3, VAR_4, VAR_5);

 if (VAR_6)
  FUNC_1(VAR_5);
}

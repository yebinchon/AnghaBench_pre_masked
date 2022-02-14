
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int,char const*) ;

bool
FUNC_4(int VAR_1, const char *VAR_2, char **VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 if (VAR_3)
  *VAR_3 = ((void*)0);

 VAR_4 = FUNC_3(VAR_1, ((void*)0));
 if (!VAR_4)
  return 0;


 VAR_4 = FUNC_2(VAR_4);


 VAR_5 = FUNC_3(VAR_1, VAR_2);


 if (VAR_5 && VAR_3)
  *VAR_3 = FUNC_2(VAR_5);


 if (!FUNC_3(VAR_1, VAR_4))
  FUNC_0(VAR_0, "failed to restore old locale \"%s\"", VAR_4);
 FUNC_1(VAR_4);

 return (VAR_5 != ((void*)0));
}

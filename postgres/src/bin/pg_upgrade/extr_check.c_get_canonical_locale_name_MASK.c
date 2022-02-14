
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int,char const*) ;

__attribute__((used)) static char *
FUNC_4(int VAR_0, const char *VAR_1)
{
 char *VAR_2;
 char *VAR_3;


 VAR_2 = FUNC_3(VAR_0, ((void*)0));
 if (!VAR_2)
  FUNC_0("failed to get the current locale\n");


 VAR_2 = FUNC_2(VAR_2);


 VAR_3 = FUNC_3(VAR_0, VAR_1);

 if (!VAR_3)
  FUNC_0("failed to get system locale name for \"%s\"\n", VAR_1);

 VAR_3 = FUNC_2(VAR_3);


 if (!FUNC_3(VAR_0, VAR_2))
  FUNC_0("failed to restore old locale \"%s\"\n", VAR_2);

 FUNC_1(VAR_2);

 return VAR_3;
}

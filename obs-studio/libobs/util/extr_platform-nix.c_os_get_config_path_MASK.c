
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t,char*,char*,...) ;

int FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2)
{
 char *VAR_3 = FUNC_1("HOME");
 if (VAR_3 == ((void*)0))
  FUNC_0("Could not get $HOME\n");

 if (!VAR_2 || !*VAR_2)
  return FUNC_2(VAR_0, VAR_1, "%s", VAR_3);
 else
  return FUNC_2(VAR_0, VAR_1, "%s/.%s", VAR_3, VAR_2);

}

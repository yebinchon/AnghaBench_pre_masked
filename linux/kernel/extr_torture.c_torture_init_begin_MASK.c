
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;

bool FUNC_3(char *VAR_5, int VAR_6)
{
 FUNC_0(&VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2("torture_init_begin: Refusing %s init: %s running.\n",
    VAR_5, VAR_3);
  FUNC_2("torture_init_begin: One torture test at a time!\n");
  FUNC_1(&VAR_2);
  return 0;
 }
 VAR_3 = VAR_5;
 VAR_4 = VAR_6;
 VAR_1 = VAR_0;
 return 1;
}

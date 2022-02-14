
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;

int
FUNC_4(char *VAR_4)
{
 char *VAR_5;
 char VAR_6[256];
 int VAR_7;

 VAR_5 = FUNC_0("HOME");
 if (VAR_5 == ((void*)0))
  return -1;
 FUNC_3(VAR_6, "%s/.rdesktop/%s", VAR_5, VAR_4);
 VAR_7 = FUNC_1(VAR_6, VAR_1 | VAR_0, VAR_2 | VAR_3);
 if (VAR_7 == -1)
  FUNC_2(VAR_6);
 return VAR_7;
}

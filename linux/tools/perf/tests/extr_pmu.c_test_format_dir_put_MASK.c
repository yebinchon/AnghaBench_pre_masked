
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1)
{
 char VAR_2[VAR_0];
 FUNC_0(VAR_2, VAR_0, "rm -f %s/*\n", VAR_1);
 if (FUNC_1(VAR_2))
  return -1;

 FUNC_0(VAR_2, VAR_0, "rmdir %s\n", VAR_1);
 return FUNC_1(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4 = FUNC_1(VAR_1) + 4 + 1;


 VAR_3 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(VAR_3, "'\\x");
 FUNC_2(VAR_0, VAR_1, VAR_3 + 3);
 FUNC_3(VAR_3 + 3 + FUNC_1(VAR_1), "\'");

 return VAR_3;
}

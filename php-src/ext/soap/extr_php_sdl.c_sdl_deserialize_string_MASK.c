
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*,int,char**) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char* FUNC_3(char **VAR_1)
{
 char *VAR_2;
 int VAR_3;

 FUNC_0(VAR_3, VAR_1);
 if (VAR_3 == VAR_0) {
  return ((void*)0);
 } else {
  VAR_2 = FUNC_2(VAR_3+1);
  FUNC_1(VAR_2, VAR_3, VAR_1);
  VAR_2[VAR_3] = '\0';
  return VAR_2;
 }
}

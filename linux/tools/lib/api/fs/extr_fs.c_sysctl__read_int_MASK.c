
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;

int FUNC_3(const char *VAR_1, int *VAR_2)
{
 char VAR_3[VAR_0];
 const char *VAR_4 = FUNC_1();

 if (!VAR_4)
  return -1;

 FUNC_2(VAR_3, sizeof(VAR_3), "%s/sys/%s", VAR_4, VAR_1);

 return FUNC_0(VAR_3, VAR_2);
}

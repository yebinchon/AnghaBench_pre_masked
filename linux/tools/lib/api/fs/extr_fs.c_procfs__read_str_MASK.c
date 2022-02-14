
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int FUNC_0 (char*,char**,size_t*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;

int FUNC_3(const char *VAR_1, char **VAR_2, size_t *VAR_3)
{
 char VAR_4[VAR_0];
 const char *VAR_5 = FUNC_1();

 if (!VAR_5)
  return -1;

 FUNC_2(VAR_4, sizeof(VAR_4), "%s/%s", VAR_5, VAR_1);

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}

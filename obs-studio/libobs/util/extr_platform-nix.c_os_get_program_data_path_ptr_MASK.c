
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 size_t FUNC_1 (char*,size_t,char*,char const*) ;

char *FUNC_2(const char *VAR_0)
{
 size_t VAR_1 =
  FUNC_1(((void*)0), 0, "/usr/local/share/%s", !!VAR_0 ? VAR_0 : "");
 char *VAR_2 = FUNC_0(VAR_1 + 1);
 FUNC_1(VAR_2, VAR_1 + 1, "/usr/local/share/%s", !!VAR_0 ? VAR_0 : "");
 VAR_2[VAR_1] = 0;
 return VAR_2;
}

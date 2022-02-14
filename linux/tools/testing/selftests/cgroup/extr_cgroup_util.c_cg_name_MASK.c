
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_2(VAR_0) + FUNC_2(VAR_1) + 2;
 char *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_2, "%s/%s", VAR_0, VAR_1);

 return VAR_3;
}

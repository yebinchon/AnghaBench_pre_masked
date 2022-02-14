
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t,char*,char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_0) + FUNC_2(VAR_1) + 10;
 char *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4, VAR_3, "%s/%s_%d", VAR_0, VAR_1, VAR_2);

 return VAR_4;
}

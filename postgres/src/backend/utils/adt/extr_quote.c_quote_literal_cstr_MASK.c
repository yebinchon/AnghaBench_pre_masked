
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0);

 VAR_1 = FUNC_0(VAR_2 * 2 + 3 + 1);

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 VAR_1[VAR_3] = '\0';

 return VAR_1;
}

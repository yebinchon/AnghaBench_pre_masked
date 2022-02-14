
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int dummy; } ;
typedef enum warn { ____Placeholder_warn } warn ;


 int VAR_0 ;
 char* FUNC_0 (char const*,struct pg_tm const*,char*,char*,int*) ;

size_t
FUNC_1(char *VAR_1, size_t VAR_2, const char *VAR_3, const struct pg_tm *VAR_4)
{
 char *VAR_5;
 enum warn VAR_6 = VAR_0;

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_1 + VAR_2, &VAR_6);
 if (VAR_5 == VAR_1 + VAR_2)
  return 0;
 *VAR_5 = '\0';
 return VAR_5 - VAR_1;
}

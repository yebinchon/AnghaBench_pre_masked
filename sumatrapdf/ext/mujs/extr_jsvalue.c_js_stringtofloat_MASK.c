
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char const*,char**) ;
 double FUNC_1 (char const*,char**,int) ;

double FUNC_2(const char *VAR_0, char **VAR_1)
{
 char *VAR_2;
 double VAR_3;
 const char *VAR_4 = VAR_0;
 int VAR_5 = 0;
 if (*VAR_4 == '+' || *VAR_4 == '-') ++VAR_4;
 while (*VAR_4 >= '0' && *VAR_4 <= '9') ++VAR_4;
 if (*VAR_4 == '.') { ++VAR_4; VAR_5 = 1; }
 while (*VAR_4 >= '0' && *VAR_4 <= '9') ++VAR_4;
 if (*VAR_4 == 'e' || *VAR_4 == 'E') {
  ++VAR_4;
  if (*VAR_4 == '+' || *VAR_4 == '-') ++VAR_4;
  while (*VAR_4 >= '0' && *VAR_4 <= '9') ++VAR_4;
  VAR_5 = 1;
 }
 if (VAR_5 || VAR_4 - VAR_0 > 9)
  VAR_3 = FUNC_0(VAR_0, &VAR_2);
 else
  VAR_3 = FUNC_1(VAR_0, &VAR_2, 10);
 if (VAR_2 == VAR_4) {
  *VAR_1 = (char*)VAR_4;
  return VAR_3;
 }
 *VAR_1 = (char*)VAR_0;
 return 0;
}

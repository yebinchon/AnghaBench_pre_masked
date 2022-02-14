
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned long long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static unsigned long long FUNC_2(const char *VAR_1, char **VAR_2)
{
 if (*VAR_1 == '0') {
  *VAR_2 = (char *)VAR_1 + 1;
  return 0;
 } else if ('1' <= *VAR_1 && *VAR_1 <= '9') {
  unsigned long long VAR_3;

  VAR_0 = 0;
  VAR_3 = FUNC_1(VAR_1, VAR_2, 10);
  FUNC_0(VAR_0 == 0);
  return VAR_3;
 } else
  FUNC_0(0);
}

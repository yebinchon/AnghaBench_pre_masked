
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 long FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, const char **VAR_2)
{
 const char *VAR_3 = ((void*)0);
 VAR_0 = 0;
 long VAR_4 = FUNC_0(VAR_1, (char **)&VAR_3, 10);
 if (VAR_0 != 0 || VAR_3 == VAR_1 || VAR_3[0] != ':' ||
     VAR_4 < 0 || VAR_4 >= 24) {
  return -1;
 }

 VAR_3 += 1;
 VAR_0 = 0;
 long VAR_5 = FUNC_0(VAR_3, (char **)VAR_2, 10);
 if (VAR_0 != 0 || *VAR_2 == VAR_3 || VAR_5 < 0 || VAR_5 >= 60) {
  return -1;
 }

 return VAR_5 * 60 + VAR_4 * 3600;
}

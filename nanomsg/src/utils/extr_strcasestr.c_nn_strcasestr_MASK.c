
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

const char *
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2 = FUNC_1(VAR_1);

 while (*VAR_0 != '\0') {
  if (FUNC_0(VAR_0, VAR_1, VAR_2) == 0) {
   return VAR_0;
  }
  VAR_0++;
 }
 return (((void*)0));
}

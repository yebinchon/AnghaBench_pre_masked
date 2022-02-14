
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static inline int
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;


 if (*VAR_0 != *VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_0);
 if (FUNC_0(VAR_1) != VAR_2)
  return 0;


 while (VAR_2--)
 {
  if (*VAR_0++ != *VAR_1++)
   return 0;
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;

 while (*VAR_0 || *VAR_1)
 {
  if (FUNC_0(*VAR_0) && FUNC_0(*VAR_1))
  {
   VAR_2 = *VAR_0++ - '0';
   while (FUNC_0(*VAR_0))
    VAR_2 = VAR_2 * 10 + *VAR_0++ - '0';
   VAR_3 = *VAR_1++ - '0';
   while (FUNC_0(*VAR_1))
    VAR_3 = VAR_3 * 10 + *VAR_1++ - '0';
  }
  else
  {
   VAR_2 = FUNC_1(*VAR_0++);
   VAR_3 = FUNC_1(*VAR_1++);
  }
  if (VAR_2 < VAR_3)
   return -1;
  if (VAR_2 > VAR_3)
   return 1;
 }

 return 0;
}

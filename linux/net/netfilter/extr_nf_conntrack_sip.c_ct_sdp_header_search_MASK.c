
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,unsigned int) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1,
     const char *VAR_2, unsigned int VAR_3)
{
 for (VAR_1 -= VAR_3; VAR_0 < VAR_1; VAR_0++) {
  if (*VAR_0 == '\r' || *VAR_0 == '\n')
   break;
  if (FUNC_0(VAR_0, VAR_2, VAR_3) == 0)
   return VAR_0;
 }
 return ((void*)0);
}

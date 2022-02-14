
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(const char *VAR_0)
{
 const char *VAR_1;
 size_t VAR_2;

 for (VAR_2 = 0, VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++) {
  if (*VAR_1 == '\033')
   VAR_2++;
 }




 return ((size_t) (VAR_1 - VAR_0) - (VAR_2 * 4));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(const char *VAR_0, size_t VAR_1, int VAR_2)
{
 while (VAR_1--) {
  if (*VAR_0 == (char)VAR_2)
   return (char *)VAR_0;
  if (*VAR_0++ == '\0')
   break;
 }
 return ((void*)0);
}

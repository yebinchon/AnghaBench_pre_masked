
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, char *VAR_1)
{
 while (VAR_0 < VAR_1)
 {
  if (VAR_0[0] == '\n' || VAR_0[0] == '\r')
   return VAR_0;
  ++VAR_0;
 }
 return VAR_0;
}

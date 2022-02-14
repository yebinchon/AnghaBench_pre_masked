
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, unsigned long *VAR_1)
{

 while (VAR_0[0]) {
  VAR_0++;
  if ((*VAR_1)-- <= 1)
   return ((void*)0);
 }


 while (!VAR_0[0]) {
  VAR_0++;
  if ((*VAR_1)-- <= 1)
   return ((void*)0);
 }
 return VAR_0;
}

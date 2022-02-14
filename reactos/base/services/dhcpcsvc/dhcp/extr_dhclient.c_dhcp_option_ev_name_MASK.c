
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dhcp_option {char* name; } ;



int
FUNC_0(char *VAR_0, size_t VAR_1, struct dhcp_option *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_2->name[VAR_3]; VAR_3++) {
  if (VAR_3 + 1 == VAR_1)
   return 0;
  if (VAR_2->name[VAR_3] == '-')
   VAR_0[VAR_3] = '_';
  else
   VAR_0[VAR_3] = VAR_2->name[VAR_3];
 }

 VAR_0[VAR_3] = 0;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int* flag; int val; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_1[])
{
 int VAR_2;

 FUNC_0(" Usage: %s --cgroup <cgroup_path>\n", VAR_1[0]);
 FUNC_0(" options:\n");
 for (VAR_2 = 0; VAR_0[VAR_2].name != 0; VAR_2++) {
  FUNC_0(" --%-12s", VAR_0[VAR_2].name);
  if (VAR_0[VAR_2].flag != ((void*)0))
   FUNC_0(" flag (internal value:%d)\n",
    *VAR_0[VAR_2].flag);
  else
   FUNC_0(" -%c\n", VAR_0[VAR_2].val);
 }
 FUNC_0("\n");
}

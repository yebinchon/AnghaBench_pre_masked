
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int* flag; int val; } ;


 char* VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_2[])
{
 int VAR_3;

 FUNC_1("\nDOCUMENTATION:\n%s\n", VAR_0);
 FUNC_1(" Usage: %s (options-see-below)\n", VAR_2[0]);
 FUNC_1(" Listing options:\n");
 for (VAR_3 = 0; VAR_1[VAR_3].name != 0; VAR_3++) {
  FUNC_1(" --%-12s", VAR_1[VAR_3].name);
  if (VAR_1[VAR_3].flag != ((void*)0))
   FUNC_1(" flag (internal value:%d)",
    *VAR_1[VAR_3].flag);
  else
   FUNC_1(" short-option: -%c",
    VAR_1[VAR_3].val);
  FUNC_1("\n");
 }
 FUNC_1("\n");
 FUNC_0();
}

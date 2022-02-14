
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_object {int dummy; } ;
struct TYPE_2__ {char* name; int* flag; int val; } ;


 char* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct bpf_object*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_2[], struct bpf_object *VAR_3)
{
 int VAR_4;

 FUNC_1("\nDOCUMENTATION:\n%s\n", VAR_0);
 FUNC_1("\n");
 FUNC_1(" Usage: %s (options-see-below)\n", VAR_2[0]);
 FUNC_1(" Listing options:\n");
 for (VAR_4 = 0; VAR_1[VAR_4].name != 0; VAR_4++) {
  FUNC_1(" --%-12s", VAR_1[VAR_4].name);
  if (VAR_1[VAR_4].flag != ((void*)0))
   FUNC_1(" flag (internal value:%d)",
    *VAR_1[VAR_4].flag);
  else
   FUNC_1(" short-option: -%c",
    VAR_1[VAR_4].val);
  FUNC_1("\n");
 }
 FUNC_1("\n Programs to be used for --progname:\n");
 FUNC_0(VAR_3);
 FUNC_1("\n");
}

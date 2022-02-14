
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ gamma_method_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(const gamma_method_t *VAR_1)
{
 FUNC_1(FUNC_0("Available adjustment methods:\n"), VAR_0);
 for (int VAR_2 = 0; VAR_1[VAR_2].name != ((void*)0); VAR_2++) {
  FUNC_2("  %s\n", VAR_1[VAR_2].name);
 }

 FUNC_1("\n", VAR_0);
 FUNC_1(FUNC_0("Specify colon-separated options with"
  " `-m METHOD:OPTIONS'.\n"), VAR_0);

 FUNC_1(FUNC_0("Try `-m METHOD:help' for help.\n"), VAR_0);
}

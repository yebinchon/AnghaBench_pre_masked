
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t index; struct TYPE_5__* p_next; } ;
struct TYPE_4__ {int optc; int argc; TYPE_2__* list; } ;
typedef TYPE_1__ CMDLINE_ARGS ;
typedef TYPE_2__ CMDLINE_ARG ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(CMDLINE_ARGS* VAR_0, char* VAR_1[])
{
 CMDLINE_ARG* VAR_2;

 FUNC_0("   Number of times option was specified: %d\n", VAR_0->optc);
 FUNC_0("   Number of Arguments:                  %d\n", VAR_0->argc);

 if(VAR_0->argc > 0)
 {
  FUNC_0("   Argument List: ");

  for(VAR_2=VAR_0->list; VAR_2 != ((void*)0); VAR_2=VAR_2->p_next)
   FUNC_0("%s ", VAR_1[VAR_2->index]);
 }

 FUNC_0("\n");
}

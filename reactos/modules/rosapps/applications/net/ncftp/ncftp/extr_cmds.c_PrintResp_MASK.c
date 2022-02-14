
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* first; } ;
struct TYPE_4__ {char* line; struct TYPE_4__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2(LineListPtr VAR_0)
{
 LinePtr VAR_1;

 if (VAR_0 != ((void*)0)) {
  for (VAR_1 = VAR_0->first; VAR_1 != ((void*)0); VAR_1 = VAR_1->next) {
   if ((VAR_1 == VAR_0->first) && (FUNC_0(VAR_1->line, "CWD command", 11) == 0))
    continue;
   (void) FUNC_1("%s\n", VAR_1->line);
  }
 }
}

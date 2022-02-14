
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* first; } ;
struct TYPE_6__ {char* line; struct TYPE_6__* next; } ;
struct TYPE_5__ {int printMode; int codeType; TYPE_3__ msg; } ;
typedef TYPE_1__* ResponsePtr ;
typedef TYPE_2__* LinePtr ;
typedef TYPE_3__* LineListPtr ;
typedef int * FTPCIPtr ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(const FTPCIPtr VAR_2, ResponsePtr VAR_3)
{
 LinePtr VAR_4;
 LineListPtr VAR_5;

 VAR_0 = (VAR_2 != ((void*)0));
 if ((VAR_3->printMode & VAR_1) != 0)
  return;
 VAR_5 = &VAR_3->msg;
 for (VAR_4 = VAR_5->first; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  if ((VAR_4 == VAR_5->first) && (VAR_3->codeType == 2)) {
   if (FUNC_0(VAR_4->line, "CWD command", 11) == 0)
    continue;
   if (VAR_4->line[0] == '"')
    continue;
  }
  (void) FUNC_1("%s\n", VAR_4->line);
 }
}

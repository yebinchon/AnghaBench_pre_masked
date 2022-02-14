
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ event_T ;
struct TYPE_5__ {struct TYPE_5__* next; int reg_prog; int * pat; struct TYPE_5__* cmd; struct TYPE_5__* cmds; } ;
typedef TYPE_1__ AutoPat ;
typedef TYPE_1__ AutoCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2()
{
    AutoPat *VAR_5, **VAR_6;
    AutoCmd *VAR_7, **VAR_8;
    event_T VAR_9;

    if (VAR_3 || !VAR_2)
 return;


    for (VAR_9 = (event_T)0; (int)VAR_9 < (int)VAR_1;
         VAR_9 = (event_T)((int)VAR_9 + 1))
    {

 VAR_6 = &(VAR_4[(int)VAR_9]);
 for (VAR_5 = *VAR_6; VAR_5 != ((void*)0); VAR_5 = *VAR_6)
 {

     VAR_8 = &(VAR_5->cmds);
     for (VAR_7 = *VAR_8; VAR_7 != ((void*)0); VAR_7 = *VAR_8)
     {


  if (VAR_5->pat == ((void*)0) || VAR_7->cmd == ((void*)0))
  {
      *VAR_8 = VAR_7->next;
      FUNC_0(VAR_7->cmd);
      FUNC_0(VAR_7);
  }
  else
      VAR_8 = &(VAR_7->next);
     }


     if (VAR_5->pat == ((void*)0))
     {
  *VAR_6 = VAR_5->next;
  FUNC_1(VAR_5->reg_prog);
  FUNC_0(VAR_5);
     }
     else
  VAR_6 = &(VAR_5->next);
 }
    }

    VAR_2 = VAR_0;
}

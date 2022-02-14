
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pgwstr; struct TYPE_5__* wstr; struct TYPE_5__* state; struct TYPE_5__* prev; } ;
typedef TYPE_1__ TParserPosition ;
typedef TYPE_1__ TParser ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(TParser *VAR_1)
{
 while (VAR_1->state)
 {
  TParserPosition *VAR_2 = VAR_1->state->prev;

  FUNC_1(VAR_1->state);
  VAR_1->state = VAR_2;
 }

 if (VAR_1->wstr)
  FUNC_1(VAR_1->wstr);
 if (VAR_1->pgwstr)
  FUNC_1(VAR_1->pgwstr);




 FUNC_1(VAR_1);
}

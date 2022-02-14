
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int have_lobound; scalar_t__ lobound; int have_hibound; scalar_t__ hibound; struct TYPE_3__* next; int * var; } ;
typedef scalar_t__ Selectivity ;
typedef TYPE_1__ RangeQueryClause ;
typedef int Node ;
typedef int Expr ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(RangeQueryClause **VAR_0, Node *VAR_1,
      bool VAR_2, bool VAR_3, Selectivity VAR_4)
{
 RangeQueryClause *VAR_5;
 Node *VAR_6;
 bool VAR_7;

 if (VAR_2)
 {
  VAR_6 = FUNC_1((Expr *) VAR_1);
  VAR_7 = !VAR_3;
 }
 else
 {
  VAR_6 = FUNC_2((Expr *) VAR_1);
  VAR_7 = VAR_3;
 }

 for (VAR_5 = *VAR_0; VAR_5; VAR_5 = VAR_5->next)
 {




  if (!FUNC_0(VAR_6, VAR_5->var))
   continue;

  if (VAR_7)
  {
   if (!VAR_5->have_lobound)
   {
    VAR_5->have_lobound = 1;
    VAR_5->lobound = VAR_4;
   }
   else
   {







    if (VAR_5->lobound > VAR_4)
     VAR_5->lobound = VAR_4;
   }
  }
  else
  {
   if (!VAR_5->have_hibound)
   {
    VAR_5->have_hibound = 1;
    VAR_5->hibound = VAR_4;
   }
   else
   {







    if (VAR_5->hibound > VAR_4)
     VAR_5->hibound = VAR_4;
   }
  }
  return;
 }


 VAR_5 = (RangeQueryClause *) FUNC_3(sizeof(RangeQueryClause));
 VAR_5->var = VAR_6;
 if (VAR_7)
 {
  VAR_5->have_lobound = 1;
  VAR_5->have_hibound = 0;
  VAR_5->lobound = VAR_4;
 }
 else
 {
  VAR_5->have_lobound = 0;
  VAR_5->have_hibound = 1;
  VAR_5->hibound = VAR_4;
 }
 VAR_5->next = *VAR_0;
 *VAR_0 = VAR_5;
}

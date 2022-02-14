
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ printTableFooter ;
struct TYPE_6__ {int ncolumns; int nrows; TYPE_3__* opt; TYPE_1__* footers; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_7__ {int tuples_only; } ;
typedef int FILE ;


 int * FUNC_0 (int,TYPE_3__*) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_1(const printTableContent *VAR_1, int VAR_2, bool VAR_3,
     FILE **VAR_4, bool *VAR_5)
{
 if (*VAR_4 == VAR_0)
 {
  int VAR_6;

  if (VAR_3)
   VAR_6 = (VAR_1->ncolumns + 1) * VAR_1->nrows;
  else
   VAR_6 = VAR_1->nrows + 1;

  if (!VAR_1->opt->tuples_only)
  {
   printTableFooter *VAR_7;





   for (VAR_7 = VAR_1->footers; VAR_7; VAR_7 = VAR_7->next)
    VAR_6++;
  }

  *VAR_4 = FUNC_0(VAR_6 + VAR_2, VAR_1->opt);
  *VAR_5 = (*VAR_4 != VAR_0);
 }
 else
  *VAR_5 = 0;
}

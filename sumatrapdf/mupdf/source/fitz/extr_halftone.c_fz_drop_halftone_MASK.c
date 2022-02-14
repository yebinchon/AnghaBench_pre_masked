
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int * comp; int refs; } ;
typedef TYPE_1__ fz_halftone ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(fz_context *VAR_0, fz_halftone *VAR_1)
{
 int VAR_2;
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  for (VAR_2 = 0; VAR_2 < VAR_1->n; VAR_2++)
   FUNC_1(VAR_0, VAR_1->comp[VAR_2]);
  FUNC_2(VAR_0, VAR_1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_separations; int * cs; struct TYPE_5__** name; int refs; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(fz_context *VAR_0, fz_separations *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1, &VAR_1->refs))
 {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->num_separations; VAR_2++)
  {
   FUNC_2(VAR_0, VAR_1->name[VAR_2]);
   FUNC_0(VAR_0, VAR_1->cs[VAR_2]);
  }
  FUNC_2(VAR_0, VAR_1);
 }
}

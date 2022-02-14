
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_range_table_size; int ** es_rowmarks; } ;
typedef int Index ;
typedef int ExecRowMark ;
typedef TYPE_1__ EState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

ExecRowMark *
FUNC_1(EState *VAR_1, Index VAR_2, bool VAR_3)
{
 if (VAR_2 > 0 && VAR_2 <= VAR_1->es_range_table_size &&
  VAR_1->es_rowmarks != ((void*)0))
 {
  ExecRowMark *VAR_4 = VAR_1->es_rowmarks[VAR_2 - 1];

  if (VAR_4)
   return VAR_4;
 }
 if (!VAR_3)
  FUNC_0(VAR_0, "failed to find ExecRowMark for rangetable index %u", VAR_2);
 return ((void*)0);
}

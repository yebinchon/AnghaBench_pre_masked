
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tuplesortstate ;
struct TYPE_3__ {scalar_t__ tuplesortstate; int sort_Done; } ;
typedef TYPE_1__ SortState ;


 int FUNC_0 (int *) ;

void
FUNC_1(SortState *VAR_0)
{



 if (!VAR_0->sort_Done)
  return;

 FUNC_0((Tuplesortstate *) VAR_0->tuplesortstate);
}

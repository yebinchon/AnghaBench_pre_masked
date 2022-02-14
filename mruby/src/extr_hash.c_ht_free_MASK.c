
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* index; struct TYPE_5__* next; struct TYPE_5__* rootseg; } ;
typedef TYPE_1__ segment ;
typedef int mrb_state ;
typedef TYPE_1__ htable ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_0, htable *VAR_1)
{
  segment *VAR_2;

  if (!VAR_1) return;
  VAR_2 = VAR_1->rootseg;
  while (VAR_2) {
    segment *VAR_3 = VAR_2;
    VAR_2 = VAR_2->next;
    FUNC_0(VAR_0, VAR_3);
  }
  if (VAR_1->index) FUNC_0(VAR_0, VAR_1->index);
  FUNC_0(VAR_0, VAR_1);
}

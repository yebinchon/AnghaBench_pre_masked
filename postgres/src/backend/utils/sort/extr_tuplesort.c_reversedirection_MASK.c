
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nKeys; TYPE_2__* sortKeys; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_5__ {int ssup_reverse; int ssup_nulls_first; } ;
typedef TYPE_2__* SortSupport ;



__attribute__((used)) static void
FUNC_0(Tuplesortstate *VAR_0)
{
 SortSupport VAR_1 = VAR_0->sortKeys;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nKeys; VAR_2++, VAR_1++)
 {
  VAR_1->ssup_reverse = !VAR_1->ssup_reverse;
  VAR_1->ssup_nulls_first = !VAR_1->ssup_nulls_first;
 }
}

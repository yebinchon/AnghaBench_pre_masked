
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_3__ {int last_te; int sorted; scalar_t__ first_te; int ** tes; } ;
typedef TYPE_1__ ParallelReadyList ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(ParallelReadyList *VAR_0, int VAR_1)
{
 VAR_0->tes = (TocEntry **)
  FUNC_0(VAR_1 * sizeof(TocEntry *));
 VAR_0->first_te = 0;
 VAR_0->last_te = -1;
 VAR_0->sorted = 0;
}

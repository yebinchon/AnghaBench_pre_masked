
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_7__ {scalar_t__ status; scalar_t__ memtupcount; int bounded; int bound; TYPE_1__* sortKeys; } ;
typedef TYPE_2__ Tuplesortstate ;
struct TYPE_6__ {int * abbrev_full_comparator; int * abbrev_abort; int * comparator; int * abbrev_converter; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;

void
FUNC_3(Tuplesortstate *VAR_3, int64 VAR_4)
{

 FUNC_0(VAR_3->status == VAR_1 && VAR_3->memtupcount == 0);

 FUNC_0(!VAR_3->bounded);

 FUNC_0(!FUNC_2(VAR_3));


 if (FUNC_1(VAR_3))
  return;
 if (VAR_4 > (int64) (VAR_0 / 2))
  return;

 VAR_3->bounded = 1;
 VAR_3->bound = (int) VAR_4;






 VAR_3->sortKeys->abbrev_converter = ((void*)0);
 if (VAR_3->sortKeys->abbrev_full_comparator)
  VAR_3->sortKeys->comparator = VAR_3->sortKeys->abbrev_full_comparator;


 VAR_3->sortKeys->abbrev_abort = ((void*)0);
 VAR_3->sortKeys->abbrev_full_comparator = ((void*)0);
}

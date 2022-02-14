
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int memtupcount; int abbrevNext; TYPE_2__* sortKeys; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_5__ {int * abbrev_full_comparator; int (* abbrev_abort ) (int,TYPE_2__*) ;int * abbrev_converter; int * comparator; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(Tuplesortstate *VAR_1)
{
 FUNC_0(VAR_1->sortKeys[0].abbrev_converter != ((void*)0));
 FUNC_0(VAR_1->sortKeys[0].abbrev_abort != ((void*)0));
 FUNC_0(VAR_1->sortKeys[0].abbrev_full_comparator != ((void*)0));





 if (VAR_1->status == VAR_0 &&
  VAR_1->memtupcount >= VAR_1->abbrevNext)
 {
  VAR_1->abbrevNext *= 2;





  if (!VAR_1->sortKeys->abbrev_abort(VAR_1->memtupcount,
             VAR_1->sortKeys))
   return 0;





  VAR_1->sortKeys[0].comparator = VAR_1->sortKeys[0].abbrev_full_comparator;
  VAR_1->sortKeys[0].abbrev_converter = ((void*)0);

  VAR_1->sortKeys[0].abbrev_abort = ((void*)0);
  VAR_1->sortKeys[0].abbrev_full_comparator = ((void*)0);


  return 1;
 }

 return 0;
}

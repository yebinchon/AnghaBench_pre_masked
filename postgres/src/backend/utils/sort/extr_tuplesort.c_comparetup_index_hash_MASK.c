
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int low_mask; int high_mask; int max_buckets; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_9__ {int t_tid; } ;
struct TYPE_8__ {scalar_t__ tuple; int datum1; int isnull1; } ;
typedef TYPE_2__ SortTuple ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_3__* IndexTuple ;
typedef scalar_t__ Bucket ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(const SortTuple *VAR_0, const SortTuple *VAR_1,
       Tuplesortstate *VAR_2)
{
 Bucket VAR_3;
 Bucket VAR_4;
 IndexTuple VAR_5;
 IndexTuple VAR_6;





 FUNC_0(!VAR_0->isnull1);
 VAR_3 = FUNC_4(FUNC_1(VAR_0->datum1),
           VAR_2->max_buckets, VAR_2->high_mask,
           VAR_2->low_mask);
 FUNC_0(!VAR_1->isnull1);
 VAR_4 = FUNC_4(FUNC_1(VAR_1->datum1),
           VAR_2->max_buckets, VAR_2->high_mask,
           VAR_2->low_mask);
 if (VAR_3 > VAR_4)
  return 1;
 else if (VAR_3 < VAR_4)
  return -1;






 VAR_5 = (IndexTuple) VAR_0->tuple;
 VAR_6 = (IndexTuple) VAR_1->tuple;

 {
  BlockNumber VAR_7 = FUNC_2(&VAR_5->t_tid);
  BlockNumber VAR_8 = FUNC_2(&VAR_6->t_tid);

  if (VAR_7 != VAR_8)
   return (VAR_7 < VAR_8) ? -1 : 1;
 }
 {
  OffsetNumber VAR_9 = FUNC_3(&VAR_5->t_tid);
  OffsetNumber VAR_10 = FUNC_3(&VAR_6->t_tid);

  if (VAR_9 != VAR_10)
   return (VAR_9 < VAR_10) ? -1 : 1;
 }


 FUNC_0(0);

 return 0;
}

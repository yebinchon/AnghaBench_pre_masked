
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_9__ {int slabAllocatorUsed; int tapeset; scalar_t__ randomAccess; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_11__ {int t_len; unsigned int t_self; unsigned int* t_data; } ;
struct TYPE_10__ {int tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef int ItemPointerData ;
typedef TYPE_3__* HeapTuple ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int,unsigned int*,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(Tuplesortstate *VAR_0, int VAR_1, SortTuple *VAR_2)
{
 HeapTuple VAR_3 = (HeapTuple) VAR_2->tuple;
 unsigned int VAR_4 = VAR_3->t_len + sizeof(ItemPointerData) + sizeof(int);


 FUNC_2(VAR_0->tapeset, VAR_1,
      &VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_0->tapeset, VAR_1,
      &VAR_3->t_self, sizeof(ItemPointerData));
 FUNC_2(VAR_0->tapeset, VAR_1,
      VAR_3->t_data, VAR_3->t_len);
 if (VAR_0->randomAccess)
  FUNC_2(VAR_0->tapeset, VAR_1,
       &VAR_4, sizeof(VAR_4));

 if (!VAR_0->slabAllocatorUsed)
 {
  FUNC_0(VAR_0, FUNC_1(VAR_3));
  FUNC_3(VAR_3);
 }
}

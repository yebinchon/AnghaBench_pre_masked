
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_6__ {int slabAllocatorUsed; int tapeset; scalar_t__ randomAccess; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_7__ {int tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef scalar_t__ IndexTuple ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int,void*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(Tuplesortstate *VAR_0, int VAR_1, SortTuple *VAR_2)
{
 IndexTuple VAR_3 = (IndexTuple) VAR_2->tuple;
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_3) + sizeof(VAR_4);
 FUNC_3(VAR_0->tapeset, VAR_1,
      (void *) &VAR_4, sizeof(VAR_4));
 FUNC_3(VAR_0->tapeset, VAR_1,
      (void *) VAR_3, FUNC_2(VAR_3));
 if (VAR_0->randomAccess)
  FUNC_3(VAR_0->tapeset, VAR_1,
       (void *) &VAR_4, sizeof(VAR_4));

 if (!VAR_0->slabAllocatorUsed)
 {
  FUNC_0(VAR_0, FUNC_1(VAR_3));
  FUNC_4(VAR_3);
 }
}

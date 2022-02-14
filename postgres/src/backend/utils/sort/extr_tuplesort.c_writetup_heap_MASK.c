
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
struct TYPE_11__ {int t_len; } ;
struct TYPE_10__ {int tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef TYPE_3__* MinimalTuple ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int,void*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(Tuplesortstate *VAR_1, int VAR_2, SortTuple *VAR_3)
{
 MinimalTuple VAR_4 = (MinimalTuple) VAR_3->tuple;


 char *VAR_5 = (char *) VAR_4 + VAR_0;
 unsigned int VAR_6 = VAR_4->t_len - VAR_0;


 unsigned int VAR_7 = VAR_6 + sizeof(int);

 FUNC_2(VAR_1->tapeset, VAR_2,
      (void *) &VAR_7, sizeof(VAR_7));
 FUNC_2(VAR_1->tapeset, VAR_2,
      (void *) VAR_5, VAR_6);
 if (VAR_1->randomAccess)
  FUNC_2(VAR_1->tapeset, VAR_2,
       (void *) &VAR_7, sizeof(VAR_7));

 if (!VAR_1->slabAllocatorUsed)
 {
  FUNC_0(VAR_1, FUNC_1(VAR_4));
  FUNC_3(VAR_4);
 }
}

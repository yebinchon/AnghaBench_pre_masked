
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int writtenlen ;
struct TYPE_6__ {int slabAllocatorUsed; int tapeset; scalar_t__ randomAccess; int datumTypeLen; int tuples; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_7__ {void* tuple; int datum1; scalar_t__ isnull1; } ;
typedef TYPE_2__ SortTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int,void*,int) ;
 int FUNC_4 (void*) ;
 unsigned int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void
FUNC_7(Tuplesortstate *VAR_0, int VAR_1, SortTuple *VAR_2)
{
 void *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 if (VAR_2->isnull1)
 {
  VAR_3 = ((void*)0);
  VAR_4 = 0;
 }
 else if (!VAR_0->tuples)
 {
  VAR_3 = &VAR_2->datum1;
  VAR_4 = sizeof(Datum);
 }
 else
 {
  VAR_3 = VAR_2->tuple;
  VAR_4 = FUNC_5(FUNC_4(VAR_2->tuple), 0, VAR_0->datumTypeLen);
  FUNC_0(VAR_4 != 0);
 }

 VAR_5 = VAR_4 + sizeof(unsigned int);

 FUNC_3(VAR_0->tapeset, VAR_1,
      (void *) &VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_0->tapeset, VAR_1,
      VAR_3, VAR_4);
 if (VAR_0->randomAccess)
  FUNC_3(VAR_0->tapeset, VAR_1,
       (void *) &VAR_5, sizeof(VAR_5));

 if (!VAR_0->slabAllocatorUsed && VAR_2->tuple)
 {
  FUNC_1(VAR_0, FUNC_2(VAR_2->tuple));
  FUNC_6(VAR_2->tuple);
 }
}

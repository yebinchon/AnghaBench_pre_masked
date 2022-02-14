
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_10__ {int tupDesc; TYPE_1__* indexInfo; int tapeset; scalar_t__ randomAccess; } ;
typedef TYPE_2__ Tuplesortstate ;
struct TYPE_12__ {unsigned int* t_data; unsigned int t_len; unsigned int t_self; int t_tableOid; } ;
struct TYPE_11__ {int isnull1; int datum1; void* tuple; } ;
struct TYPE_9__ {int * ii_IndexAttrNumbers; } ;
typedef TYPE_3__ SortTuple ;
typedef int ItemPointerData ;
typedef unsigned int* HeapTupleHeader ;
typedef TYPE_4__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,unsigned int*,int) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(Tuplesortstate *VAR_2, SortTuple *VAR_3,
    int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_5 - sizeof(ItemPointerData) - sizeof(int);
 HeapTuple VAR_7 = (HeapTuple) FUNC_2(VAR_2,
              VAR_6 + VAR_0);


 VAR_7->t_data = (HeapTupleHeader) ((char *) VAR_7 + VAR_0);
 VAR_7->t_len = VAR_6;
 FUNC_0(VAR_2->tapeset, VAR_4,
       &VAR_7->t_self, sizeof(ItemPointerData));

 VAR_7->t_tableOid = VAR_1;

 FUNC_0(VAR_2->tapeset, VAR_4,
       VAR_7->t_data, VAR_7->t_len);
 if (VAR_2->randomAccess)
  FUNC_0(VAR_2->tapeset, VAR_4,
        &VAR_5, sizeof(VAR_5));
 VAR_3->tuple = (void *) VAR_7;

 if (VAR_2->indexInfo->ii_IndexAttrNumbers[0] != 0)
  VAR_3->datum1 = FUNC_1(VAR_7,
         VAR_2->indexInfo->ii_IndexAttrNumbers[0],
         VAR_2->tupDesc,
         &VAR_3->isnull1);
}

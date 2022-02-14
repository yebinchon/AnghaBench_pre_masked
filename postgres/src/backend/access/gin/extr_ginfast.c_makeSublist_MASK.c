
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int nPendingHeapTuples; int nPendingPages; int tailFreeSize; void* tail; void* head; } ;
typedef int Relation ;
typedef int ItemIdData ;
typedef int IndexTuple ;
typedef TYPE_1__ GinMetaPageData ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int *,int,void*) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_3, IndexTuple *VAR_4, int32 VAR_5,
   GinMetaPageData *VAR_6)
{
 Buffer VAR_7 = VAR_2;
 Buffer VAR_8 = VAR_2;
 int VAR_9,
    VAR_10 = 0,
    VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_5 > 0);




 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  if (VAR_7 == VAR_2)
  {
   VAR_7 = FUNC_2(VAR_3);

   if (VAR_8 != VAR_2)
   {
    VAR_6->nPendingPages++;
    FUNC_5(VAR_3, VAR_8,
         VAR_4 + VAR_12,
         VAR_9 - VAR_12,
         FUNC_1(VAR_7));
   }
   else
   {
    VAR_6->head = FUNC_1(VAR_7);
   }

   VAR_8 = VAR_7;
   VAR_12 = VAR_9;
   VAR_10 = 0;
  }

  VAR_11 = FUNC_4(FUNC_3(VAR_4[VAR_9])) + sizeof(ItemIdData);

  if (VAR_10 + VAR_11 > VAR_0)
  {

   VAR_9--;
   VAR_7 = VAR_2;
  }
  else
  {
   VAR_10 += VAR_11;
  }
 }




 VAR_6->tail = FUNC_1(VAR_7);
 VAR_6->tailFreeSize = FUNC_5(VAR_3, VAR_7,
           VAR_4 + VAR_12,
           VAR_5 - VAR_12,
           VAR_1);
 VAR_6->nPendingPages++;

 VAR_6->nPendingHeapTuples = 1;
}

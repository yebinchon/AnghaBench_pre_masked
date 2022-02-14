
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t nDelete; int stateSrc; } ;
typedef TYPE_2__ spgxlogVacuumRoot ;
struct TYPE_8__ {int spgstate; TYPE_1__* stats; int callback_state; scalar_t__ (* callback ) (int *,int ) ;} ;
typedef TYPE_3__ spgBulkDeleteState ;
typedef int XLogRecPtr ;
struct TYPE_9__ {scalar_t__ tupstate; int heapPtr; } ;
struct TYPE_6__ {int tuples_removed; int num_index_tuples; } ;
typedef TYPE_4__* SpGistLeafTuple ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__*,size_t) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_18 (int *,int ) ;

__attribute__((used)) static void
FUNC_19(spgBulkDeleteState *VAR_8, Relation VAR_9, Buffer VAR_10)
{
 Page VAR_11 = FUNC_1(VAR_10);
 spgxlogVacuumRoot VAR_12;
 OffsetNumber VAR_13[VAR_2];
 OffsetNumber VAR_14,
    VAR_15 = FUNC_7(VAR_11);

 VAR_12.nDelete = 0;


 for (VAR_14 = VAR_1; VAR_14 <= VAR_15; VAR_14++)
 {
  SpGistLeafTuple VAR_16;

  VAR_16 = (SpGistLeafTuple) FUNC_5(VAR_11,
             FUNC_6(VAR_11, VAR_14));
  if (VAR_16->tupstate == VAR_5)
  {
   FUNC_0(FUNC_3(&VAR_16->heapPtr));

   if (VAR_8->callback(&VAR_16->heapPtr, VAR_8->callback_state))
   {
    VAR_8->stats->tuples_removed += 1;
    VAR_13[VAR_12.nDelete] = VAR_14;
    VAR_12.nDelete++;
   }
   else
   {
    VAR_8->stats->num_index_tuples += 1;
   }
  }
  else
  {

   FUNC_17(VAR_0, "unexpected SPGiST tuple state: %d",
     VAR_16->tupstate);
  }
 }

 if (VAR_12.nDelete == 0)
  return;


 FUNC_11();


 FUNC_8(VAR_11, VAR_13, VAR_12.nDelete);

 FUNC_4(VAR_10);

 if (FUNC_10(VAR_9))
 {
  XLogRecPtr VAR_17;

  FUNC_13();


  FUNC_12(&VAR_8->spgstate, VAR_12.stateSrc);

  FUNC_16((char *) &VAR_12, VAR_6);

  FUNC_16((char *) VAR_13,
       sizeof(OffsetNumber) * VAR_12.nDelete);

  FUNC_15(0, VAR_10, VAR_3);

  VAR_17 = FUNC_14(VAR_4, VAR_7);

  FUNC_9(VAR_11, VAR_17);
 }

 FUNC_2();
}

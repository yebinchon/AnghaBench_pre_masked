
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleTableSlot ;
struct TYPE_5__ {int gm_nkeys; TYPE_1__* gm_sortkeys; int ** gm_slots; } ;
struct TYPE_4__ {int ssup_attno; } ;
typedef TYPE_1__* SortSupport ;
typedef size_t SlotNumber ;
typedef TYPE_2__ GatherMergeState ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ,int,int ,int,TYPE_1__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*) ;

__attribute__((used)) static int32
FUNC_6(Datum VAR_0, Datum VAR_1, void *VAR_2)
{
 GatherMergeState *VAR_3 = (GatherMergeState *) VAR_2;
 SlotNumber VAR_4 = FUNC_2(VAR_0);
 SlotNumber VAR_5 = FUNC_2(VAR_1);

 TupleTableSlot *VAR_6 = VAR_3->gm_slots[VAR_4];
 TupleTableSlot *VAR_7 = VAR_3->gm_slots[VAR_5];
 int VAR_8;

 FUNC_1(!FUNC_4(VAR_6));
 FUNC_1(!FUNC_4(VAR_7));

 for (VAR_8 = 0; VAR_8 < VAR_3->gm_nkeys; VAR_8++)
 {
  SortSupport VAR_9 = VAR_3->gm_sortkeys + VAR_8;
  AttrNumber VAR_10 = VAR_9->ssup_attno;
  Datum VAR_11,
     VAR_12;
  bool VAR_13,
     VAR_14;
  int VAR_15;

  VAR_11 = FUNC_5(VAR_6, VAR_10, &VAR_13);
  VAR_12 = FUNC_5(VAR_7, VAR_10, &VAR_14);

  VAR_15 = FUNC_0(VAR_11, VAR_13,
           VAR_12, VAR_14,
           VAR_9);
  if (VAR_15 != 0)
  {
   FUNC_3(VAR_15);
   return VAR_15;
  }
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ firstOffset; scalar_t__ lastOffset; int item; int pendingBuffer; } ;
typedef TYPE_1__ pendingPosition ;
struct TYPE_10__ {scalar_t__ rightlink; } ;
struct TYPE_9__ {int indexRelation; int xs_snapshot; } ;
struct TYPE_8__ {int t_tid; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__* IndexScanDesc ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static bool
FUNC_12(IndexScanDesc VAR_4, pendingPosition *VAR_5)
{
 OffsetNumber VAR_6;
 Page VAR_7;
 IndexTuple VAR_8;

 FUNC_4(&VAR_5->item);
 for (;;)
 {
  VAR_7 = FUNC_0(VAR_5->pendingBuffer);
  FUNC_10(VAR_4->xs_snapshot, VAR_4->indexRelation, VAR_7);

  VAR_6 = FUNC_8(VAR_7);
  if (VAR_5->firstOffset > VAR_6)
  {
   BlockNumber VAR_9 = FUNC_1(VAR_7)->rightlink;

   if (VAR_9 == VAR_2)
   {
    FUNC_11(VAR_5->pendingBuffer);
    VAR_5->pendingBuffer = VAR_3;

    return 0;
   }
   else
   {






    Buffer VAR_10 = FUNC_9(VAR_4->indexRelation, VAR_9);

    FUNC_5(VAR_10, VAR_1);
    FUNC_11(VAR_5->pendingBuffer);

    VAR_5->pendingBuffer = VAR_10;
    VAR_5->firstOffset = VAR_0;
   }
  }
  else
  {
   VAR_8 = (IndexTuple) FUNC_6(VAR_7, FUNC_7(VAR_7, VAR_5->firstOffset));
   VAR_5->item = VAR_8->t_tid;
   if (FUNC_2(VAR_7))
   {



    for (VAR_5->lastOffset = VAR_5->firstOffset + 1; VAR_5->lastOffset <= VAR_6; VAR_5->lastOffset++)
    {
     VAR_8 = (IndexTuple) FUNC_6(VAR_7, FUNC_7(VAR_7, VAR_5->lastOffset));
     if (!FUNC_3(&VAR_5->item, &VAR_8->t_tid))
      break;
    }
   }
   else
   {



    VAR_5->lastOffset = VAR_6 + 1;
   }






   break;
  }
 }

 return 1;
}

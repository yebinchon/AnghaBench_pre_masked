
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ itemIndex; int lastItem; scalar_t__ nextTupleOffset; int buf; } ;
struct TYPE_13__ {scalar_t__ markItemIndex; scalar_t__ numKilled; TYPE_3__ currPos; TYPE_3__ markPos; TYPE_3__* markTuples; TYPE_3__* currTuples; scalar_t__ numArrayKeys; } ;
struct TYPE_12__ {int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef int BTScanPosItem ;
typedef TYPE_2__* BTScanOpaque ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 scalar_t__ FUNC_1 (TYPE_3__) ;
 scalar_t__ FUNC_2 (TYPE_3__) ;
 int FUNC_3 (TYPE_3__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;

void
FUNC_9(IndexScanDesc VAR_2)
{
 BTScanOpaque VAR_3 = (BTScanOpaque) VAR_2->opaque;


 if (VAR_3->numArrayKeys)
  FUNC_6(VAR_2);

 if (VAR_3->markItemIndex >= 0)
 {







  VAR_3->currPos.itemIndex = VAR_3->markItemIndex;
 }
 else
 {






  if (FUNC_2(VAR_3->currPos))
  {

   if (VAR_3->numKilled > 0)
    FUNC_5(VAR_2);
   FUNC_3(VAR_3->currPos);
  }

  if (FUNC_2(VAR_3->markPos))
  {

   if (FUNC_1(VAR_3->markPos))
    FUNC_4(VAR_3->markPos.buf);
   FUNC_7(&VAR_3->currPos, &VAR_3->markPos,
       FUNC_8(VAR_0, VAR_1[1]) +
       VAR_3->markPos.lastItem * sizeof(BTScanPosItem));
   if (VAR_3->currTuples)
    FUNC_7(VAR_3->currTuples, VAR_3->markTuples,
        VAR_3->markPos.nextTupleOffset);
  }
  else
   FUNC_0(VAR_3->currPos);
 }
}

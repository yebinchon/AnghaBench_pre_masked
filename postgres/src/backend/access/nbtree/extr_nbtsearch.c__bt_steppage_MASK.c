
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int lastItem; int moreLeft; int moreRight; int currPage; int nextPage; scalar_t__ nextTupleOffset; int buf; } ;
struct TYPE_17__ {int itemIndex; } ;
struct TYPE_16__ {scalar_t__ numKilled; int markItemIndex; TYPE_4__ currPos; TYPE_3__ markPos; TYPE_4__* currTuples; TYPE_3__* markTuples; } ;
struct TYPE_15__ {int * parallel_scan; int opaque; } ;
typedef int ScanDirection ;
typedef TYPE_1__* IndexScanDesc ;
typedef int BlockNumber ;
typedef int BTScanPosItem ;
typedef TYPE_2__* BTScanOpaque ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__) ;
 scalar_t__ FUNC_2 (TYPE_4__) ;
 int FUNC_3 (TYPE_4__) ;
 int FUNC_4 (TYPE_4__) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int * VAR_2 ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static bool
FUNC_13(IndexScanDesc VAR_3, ScanDirection VAR_4)
{
 BTScanOpaque VAR_5 = (BTScanOpaque) VAR_3->opaque;
 BlockNumber VAR_6 = VAR_1;
 bool VAR_7 = 1;

 FUNC_0(FUNC_3(VAR_5->currPos));


 if (VAR_5->numKilled > 0)
  FUNC_8(VAR_3);





 if (VAR_5->markItemIndex >= 0)
 {

  if (FUNC_2(VAR_5->currPos))
   FUNC_5(VAR_5->currPos.buf);
  FUNC_11(&VAR_5->markPos, &VAR_5->currPos,
      FUNC_12(VAR_0, VAR_2[1]) +
      VAR_5->currPos.lastItem * sizeof(BTScanPosItem));
  if (VAR_5->markTuples)
   FUNC_11(VAR_5->markTuples, VAR_5->currTuples,
       VAR_5->currPos.nextTupleOffset);
  VAR_5->markPos.itemIndex = VAR_5->markItemIndex;
  VAR_5->markItemIndex = -1;
 }

 if (FUNC_6(VAR_4))
 {

  if (VAR_3->parallel_scan != ((void*)0))
  {




   VAR_7 = FUNC_9(VAR_3, &VAR_6);
   if (!VAR_7)
   {

    FUNC_4(VAR_5->currPos);
    FUNC_1(VAR_5->currPos);
    return 0;
   }
  }
  else
  {

   VAR_6 = VAR_5->currPos.nextPage;
  }


  VAR_5->currPos.moreLeft = 1;


  FUNC_4(VAR_5->currPos);
 }
 else
 {

  VAR_5->currPos.moreRight = 1;

  if (VAR_3->parallel_scan != ((void*)0))
  {




   VAR_7 = FUNC_9(VAR_3, &VAR_6);
   FUNC_4(VAR_5->currPos);
   if (!VAR_7)
   {
    FUNC_1(VAR_5->currPos);
    return 0;
   }
  }
  else
  {

   VAR_6 = VAR_5->currPos.currPage;
  }
 }

 if (!FUNC_10(VAR_3, VAR_6, VAR_4))
  return 0;


 FUNC_7(VAR_3, &VAR_5->currPos);

 return 1;
}

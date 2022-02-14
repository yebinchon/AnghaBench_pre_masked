
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int btpo_next; } ;
struct TYPE_11__ {int moreRight; int firstItem; int lastItem; int itemIndex; int moreLeft; scalar_t__ nextTupleOffset; int nextPage; int buf; int lsn; int currPage; } ;
struct TYPE_13__ {TYPE_10__ currPos; } ;
struct TYPE_12__ {scalar_t__ ignore_killed_tuples; int indexRelation; scalar_t__ parallel_scan; int opaque; } ;
typedef int ScanDirection ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanOpaque ;
typedef TYPE_3__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_10__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*,scalar_t__,int,int ,int*) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 int FUNC_22 (TYPE_2__*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_23(IndexScanDesc VAR_2, ScanDirection VAR_3, OffsetNumber VAR_4)
{
 BTScanOpaque VAR_5 = (BTScanOpaque) VAR_2->opaque;
 Page VAR_6;
 BTPageOpaque VAR_7;
 OffsetNumber VAR_8;
 OffsetNumber VAR_9;
 int VAR_10;
 bool VAR_11;
 int VAR_12;





 FUNC_0(FUNC_6(VAR_5->currPos.buf));

 VAR_6 = FUNC_5(VAR_5->currPos.buf);
 VAR_7 = (BTPageOpaque) FUNC_18(VAR_6);


 if (VAR_2->parallel_scan)
 {
  if (FUNC_19(VAR_3))
   FUNC_21(VAR_2, VAR_7->btpo_next);
  else
   FUNC_21(VAR_2, FUNC_3(VAR_5->currPos.buf));
 }

 VAR_11 = 1;
 VAR_12 = FUNC_7(VAR_2->indexRelation);
 VAR_8 = FUNC_13(VAR_7);
 VAR_9 = FUNC_17(VAR_6);





 VAR_5->currPos.currPage = FUNC_3(VAR_5->currPos.buf);






 VAR_5->currPos.lsn = FUNC_4(VAR_5->currPos.buf);






 VAR_5->currPos.nextPage = VAR_7->btpo_next;


 VAR_5->currPos.nextTupleOffset = 0;





 FUNC_0(FUNC_1(VAR_5->currPos));

 if (FUNC_19(VAR_3))
 {

  VAR_10 = 0;

  VAR_4 = FUNC_9(VAR_4, VAR_8);

  while (VAR_4 <= VAR_9)
  {
   ItemId VAR_13 = FUNC_16(VAR_6, VAR_4);
   IndexTuple VAR_14;





   if (VAR_2->ignore_killed_tuples && FUNC_8(VAR_13))
   {
    VAR_4 = FUNC_11(VAR_4);
    continue;
   }

   VAR_14 = (IndexTuple) FUNC_15(VAR_6, VAR_13);

   if (FUNC_20(VAR_2, VAR_14, VAR_12, VAR_3, &VAR_11))
   {

    FUNC_22(VAR_5, VAR_10, VAR_4, VAR_14);
    VAR_10++;
   }

   if (!VAR_11)
    break;

   VAR_4 = FUNC_11(VAR_4);
  }
  if (VAR_11 && !FUNC_14(VAR_7))
  {
   ItemId VAR_15 = FUNC_16(VAR_6, VAR_1);
   IndexTuple VAR_16 = (IndexTuple) FUNC_15(VAR_6, VAR_15);
   int VAR_17;

   VAR_17 = FUNC_2(VAR_16, VAR_2->indexRelation);
   FUNC_20(VAR_2, VAR_16, VAR_17, VAR_3, &VAR_11);
  }

  if (!VAR_11)
   VAR_5->currPos.moreRight = 0;

  FUNC_0(VAR_10 <= VAR_0);
  VAR_5->currPos.firstItem = 0;
  VAR_5->currPos.lastItem = VAR_10 - 1;
  VAR_5->currPos.itemIndex = 0;
 }
 else
 {

  VAR_10 = VAR_0;

  VAR_4 = FUNC_10(VAR_4, VAR_9);

  while (VAR_4 >= VAR_8)
  {
   ItemId VAR_18 = FUNC_16(VAR_6, VAR_4);
   IndexTuple VAR_19;
   bool VAR_20;
   bool VAR_21;
   if (VAR_2->ignore_killed_tuples && FUNC_8(VAR_18))
   {
    FUNC_0(VAR_4 >= FUNC_13(VAR_7));
    if (VAR_4 > FUNC_13(VAR_7))
    {
     VAR_4 = FUNC_12(VAR_4);
     continue;
    }

    VAR_20 = 0;
   }
   else
    VAR_20 = 1;

   VAR_19 = (IndexTuple) FUNC_15(VAR_6, VAR_18);

   VAR_21 = FUNC_20(VAR_2, VAR_19, VAR_12, VAR_3,
           &VAR_11);
   if (VAR_21 && VAR_20)
   {

    VAR_10--;
    FUNC_22(VAR_5, VAR_10, VAR_4, VAR_19);
   }
   if (!VAR_11)
   {

    VAR_5->currPos.moreLeft = 0;
    break;
   }

   VAR_4 = FUNC_12(VAR_4);
  }

  FUNC_0(VAR_10 >= 0);
  VAR_5->currPos.firstItem = VAR_10;
  VAR_5->currPos.lastItem = VAR_0 - 1;
  VAR_5->currPos.itemIndex = VAR_0 - 1;
 }

 return (VAR_5->currPos.firstItem <= VAR_5->currPos.lastItem);
}

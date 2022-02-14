
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_17__ {scalar_t__ btpo_next; } ;
struct TYPE_14__ {scalar_t__ buf; scalar_t__ currPage; int moreLeft; int moreRight; } ;
struct TYPE_16__ {TYPE_11__ currPos; } ;
struct TYPE_15__ {int * parallel_scan; int xs_snapshot; int indexRelation; int opaque; } ;
typedef int ScanDirection ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* IndexScanDesc ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_2__* BTScanOpaque ;
typedef TYPE_3__* BTPageOpaque ;


 int FUNC_0 (TYPE_11__) ;
 scalar_t__ FUNC_1 (TYPE_11__) ;
 int FUNC_2 (TYPE_11__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 void* FUNC_14 (int ,scalar_t__,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,scalar_t__) ;
 int FUNC_17 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int ,int ) ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_21(IndexScanDesc VAR_3, BlockNumber VAR_4, ScanDirection VAR_5)
{
 BTScanOpaque VAR_6 = (BTScanOpaque) VAR_3->opaque;
 Relation VAR_7;
 Page VAR_8;
 BTPageOpaque VAR_9;
 bool VAR_10 = 1;

 VAR_7 = VAR_3->indexRelation;

 if (FUNC_12(VAR_5))
 {
  for (;;)
  {




   if (VAR_4 == VAR_2 || !VAR_6->currPos.moreRight)
   {
    FUNC_15(VAR_3);
    FUNC_0(VAR_6->currPos);
    return 0;
   }

   FUNC_5();

   VAR_6->currPos.buf = FUNC_14(VAR_7, VAR_4, VAR_0);
   VAR_8 = FUNC_4(VAR_6->currPos.buf);
   FUNC_13(VAR_3->xs_snapshot, VAR_7, VAR_8);
   VAR_9 = (BTPageOpaque) FUNC_10(VAR_8);

   if (!FUNC_8(VAR_9))
   {
    FUNC_11(VAR_7, VAR_4, VAR_3->xs_snapshot);


    if (FUNC_18(VAR_3, VAR_5, FUNC_7(VAR_9)))
     break;
   }
   else if (VAR_3->parallel_scan != ((void*)0))
   {

    FUNC_16(VAR_3, VAR_9->btpo_next);
   }


   if (VAR_3->parallel_scan != ((void*)0))
   {
    FUNC_19(VAR_7, VAR_6->currPos.buf);
    VAR_10 = FUNC_17(VAR_3, &VAR_4);
    if (!VAR_10)
    {
     FUNC_0(VAR_6->currPos);
     return 0;
    }
   }
   else
   {
    VAR_4 = VAR_9->btpo_next;
    FUNC_19(VAR_7, VAR_6->currPos.buf);
   }
  }
 }
 else
 {




  if (VAR_6->currPos.currPage != VAR_4)
  {
   FUNC_2(VAR_6->currPos);
   VAR_6->currPos.currPage = VAR_4;
  }
  if (FUNC_1(VAR_6->currPos))
   FUNC_6(VAR_6->currPos.buf, VAR_0);
  else
   VAR_6->currPos.buf = FUNC_14(VAR_7, VAR_6->currPos.currPage, VAR_0);

  for (;;)
  {

   if (!VAR_6->currPos.moreLeft)
   {
    FUNC_19(VAR_7, VAR_6->currPos.buf);
    FUNC_15(VAR_3);
    FUNC_0(VAR_6->currPos);
    return 0;
   }


   VAR_6->currPos.buf = FUNC_20(VAR_7, VAR_6->currPos.buf,
           VAR_3->xs_snapshot);


   if (VAR_6->currPos.buf == VAR_1)
   {
    FUNC_15(VAR_3);
    FUNC_0(VAR_6->currPos);
    return 0;
   }






   VAR_8 = FUNC_4(VAR_6->currPos.buf);
   FUNC_13(VAR_3->xs_snapshot, VAR_7, VAR_8);
   VAR_9 = (BTPageOpaque) FUNC_10(VAR_8);
   if (!FUNC_8(VAR_9))
   {
    FUNC_11(VAR_7, FUNC_3(VAR_6->currPos.buf), VAR_3->xs_snapshot);


    if (FUNC_18(VAR_3, VAR_5, FUNC_9(VAR_8)))
     break;
   }
   else if (VAR_3->parallel_scan != ((void*)0))
   {

    FUNC_16(VAR_3, FUNC_3(VAR_6->currPos.buf));
   }







   if (VAR_3->parallel_scan != ((void*)0))
   {
    FUNC_19(VAR_7, VAR_6->currPos.buf);
    VAR_10 = FUNC_17(VAR_3, &VAR_4);
    if (!VAR_10)
    {
     FUNC_0(VAR_6->currPos);
     return 0;
    }
    VAR_6->currPos.buf = FUNC_14(VAR_7, VAR_4, VAR_0);
   }
  }
 }

 return 1;
}

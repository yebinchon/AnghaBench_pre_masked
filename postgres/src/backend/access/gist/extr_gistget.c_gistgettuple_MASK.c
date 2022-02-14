
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int firstCall; int curPageData; int nPageData; int numKilled; int curBlkno; TYPE_3__* pageData; int * killedItems; TYPE_2__* giststate; scalar_t__ pageDataCxt; int qual_ok; } ;
struct TYPE_15__ {int parentlsn; } ;
struct TYPE_19__ {int * distances; int blkno; TYPE_1__ data; } ;
struct TYPE_18__ {scalar_t__ numberOfOrderBys; scalar_t__ kill_prior_tuple; int * xs_hitup; scalar_t__ xs_want_itup; int xs_recheck; int xs_heaptid; int indexRelation; int opaque; } ;
struct TYPE_17__ {int offnum; int * recontup; int recheck; int heapPtr; } ;
struct TYPE_16__ {int scanCxt; } ;
typedef scalar_t__ ScanDirection ;
typedef int OffsetNumber ;
typedef int MemoryContext ;
typedef TYPE_4__* IndexScanDesc ;
typedef int GistNSN ;
typedef TYPE_5__ GISTSearchItem ;
typedef TYPE_6__* GISTScanOpaque ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 TYPE_5__* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int *,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int ) ;

bool
FUNC_12(IndexScanDesc VAR_5, ScanDirection VAR_6)
{
 GISTScanOpaque VAR_7 = (GISTScanOpaque) VAR_5->opaque;

 if (VAR_6 != VAR_1)
  FUNC_3(VAR_0, "GiST only supports forward scan direction");

 if (!VAR_7->qual_ok)
  return 0;

 if (VAR_7->firstCall)
 {

  GISTSearchItem VAR_8;

  FUNC_11(VAR_5->indexRelation);

  VAR_7->firstCall = 0;
  VAR_7->curPageData = VAR_7->nPageData = 0;
  VAR_5->xs_hitup = ((void*)0);
  if (VAR_7->pageDataCxt)
   FUNC_1(VAR_7->pageDataCxt);

  VAR_8.blkno = VAR_2;
  FUNC_8(&VAR_8.data.parentlsn, 0, sizeof(GistNSN));
  FUNC_6(VAR_5, &VAR_8, ((void*)0), ((void*)0), ((void*)0));
 }

 if (VAR_5->numberOfOrderBys > 0)
 {

  return FUNC_5(VAR_5);
 }
 else
 {

  for (;;)
  {
   if (VAR_7->curPageData < VAR_7->nPageData)
   {
    if (VAR_5->kill_prior_tuple && VAR_7->curPageData > 0)
    {

     if (VAR_7->killedItems == ((void*)0))
     {
      MemoryContext VAR_9 =
      FUNC_2(VAR_7->giststate->scanCxt);

      VAR_7->killedItems =
       (OffsetNumber *) FUNC_9(VAR_4
             * sizeof(OffsetNumber));

      FUNC_2(VAR_9);
     }
     if (VAR_7->numKilled < VAR_4)
      VAR_7->killedItems[VAR_7->numKilled++] =
       VAR_7->pageData[VAR_7->curPageData - 1].offnum;
    }

    VAR_5->xs_heaptid = VAR_7->pageData[VAR_7->curPageData].heapPtr;
    VAR_5->xs_recheck = VAR_7->pageData[VAR_7->curPageData].recheck;


    if (VAR_5->xs_want_itup)
     VAR_5->xs_hitup = VAR_7->pageData[VAR_7->curPageData].recontup;

    VAR_7->curPageData++;

    return 1;
   }





   if (VAR_5->kill_prior_tuple
    && VAR_7->curPageData > 0
    && VAR_7->curPageData == VAR_7->nPageData)
   {

    if (VAR_7->killedItems == ((void*)0))
    {
     MemoryContext VAR_10 =
     FUNC_2(VAR_7->giststate->scanCxt);

     VAR_7->killedItems =
      (OffsetNumber *) FUNC_9(VAR_4
            * sizeof(OffsetNumber));

     FUNC_2(VAR_10);
    }
    if (VAR_7->numKilled < VAR_4)
     VAR_7->killedItems[VAR_7->numKilled++] =
      VAR_7->pageData[VAR_7->curPageData - 1].offnum;
   }

   do
   {
    GISTSearchItem *VAR_11;

    if ((VAR_7->curBlkno != VAR_3) && (VAR_7->numKilled > 0))
     FUNC_7(VAR_5);

    VAR_11 = FUNC_4(VAR_7);

    if (!VAR_11)
     return 0;

    FUNC_0();


    VAR_7->curBlkno = VAR_11->blkno;







    FUNC_6(VAR_5, VAR_11, VAR_11->distances, ((void*)0), ((void*)0));

    FUNC_10(VAR_11);
   } while (VAR_7->nPageData == 0);
  }
 }
}

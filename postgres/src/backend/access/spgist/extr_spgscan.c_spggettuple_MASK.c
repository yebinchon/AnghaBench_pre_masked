
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int xs_snapshot; int indexRelation; scalar_t__ xs_hitup; int xs_recheck; int xs_heaptid; scalar_t__ xs_want_itup; int opaque; } ;
struct TYPE_6__ {size_t iPtr; size_t nPtrs; scalar_t__ numberOfOrderBys; scalar_t__* reconTups; scalar_t__ want_itup; scalar_t__* distances; int * recheckDistances; int orderByTypes; int * recheck; int * heapPtrs; } ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef scalar_t__ ScanDirection ;
typedef TYPE_2__* IndexScanDesc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,int,int ,int ) ;
 int VAR_2 ;

bool
FUNC_4(IndexScanDesc VAR_3, ScanDirection VAR_4)
{
 SpGistScanOpaque VAR_5 = (SpGistScanOpaque) VAR_3->opaque;

 if (VAR_4 != VAR_1)
  FUNC_0(VAR_0, "SP-GiST only supports forward scan direction");


 VAR_5->want_itup = VAR_3->xs_want_itup;

 for (;;)
 {
  if (VAR_5->iPtr < VAR_5->nPtrs)
  {

   VAR_3->xs_heaptid = VAR_5->heapPtrs[VAR_5->iPtr];
   VAR_3->xs_recheck = VAR_5->recheck[VAR_5->iPtr];
   VAR_3->xs_hitup = VAR_5->reconTups[VAR_5->iPtr];

   if (VAR_5->numberOfOrderBys > 0)
    FUNC_1(VAR_3, VAR_5->orderByTypes,
              VAR_5->distances[VAR_5->iPtr],
              VAR_5->recheckDistances[VAR_5->iPtr]);
   VAR_5->iPtr++;
   return 1;
  }

  if (VAR_5->numberOfOrderBys > 0)
  {

   int VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_5->nPtrs; VAR_6++)
    if (VAR_5->distances[VAR_6])
     FUNC_2(VAR_5->distances[VAR_6]);
  }

  if (VAR_5->want_itup)
  {

   int VAR_7;

   for (VAR_7 = 0; VAR_7 < VAR_5->nPtrs; VAR_7++)
    FUNC_2(VAR_5->reconTups[VAR_7]);
  }
  VAR_5->iPtr = VAR_5->nPtrs = 0;

  FUNC_3(VAR_3->indexRelation, VAR_5, 0, VAR_2,
    VAR_3->xs_snapshot);

  if (VAR_5->nPtrs == 0)
   break;
 }

 return 0;
}

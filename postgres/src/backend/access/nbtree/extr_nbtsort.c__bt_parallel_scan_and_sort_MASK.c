
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_18__ {int havedead; scalar_t__ indtuples; int * btleader; TYPE_3__* spool2; TYPE_3__* spool; int heap; int isunique; } ;
struct TYPE_17__ {double reltuples; int havedead; int brokenhotchain; int workersdonecv; int mutex; int indtuples; int nparticipantsdone; int isconcurrent; int isunique; } ;
struct TYPE_16__ {int isunique; void* sortstate; int index; int heap; } ;
struct TYPE_15__ {scalar_t__ ii_BrokenHotChain; int ii_Concurrent; } ;
struct TYPE_14__ {int isWorker; int nParticipants; int * sharedsort; } ;
typedef int SortCoordinateData ;
typedef TYPE_1__* SortCoordinate ;
typedef int Sharedsort ;
typedef TYPE_2__ IndexInfo ;
typedef TYPE_3__ BTSpool ;
typedef TYPE_4__ BTShared ;
typedef TYPE_5__ BTBuildState ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 double FUNC_8 (int ,int ,TYPE_2__*,int,int,int ,void*,int ) ;
 void* FUNC_9 (int ,int ,int,int,TYPE_1__*,int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_12(BTSpool *VAR_2, BTSpool *VAR_3,
         BTShared *VAR_4, Sharedsort *VAR_5,
         Sharedsort *VAR_6, int VAR_7, bool VAR_8)
{
 SortCoordinate VAR_9;
 BTBuildState VAR_10;
 TableScanDesc VAR_11;
 double VAR_12;
 IndexInfo *VAR_13;


 VAR_9 = FUNC_6(sizeof(SortCoordinateData));
 VAR_9->isWorker = 1;
 VAR_9->nParticipants = -1;
 VAR_9->sharedsort = VAR_5;


 VAR_2->sortstate = FUNC_9(VAR_2->heap,
              VAR_2->index,
              VAR_2->isunique,
              VAR_7, VAR_9,
              0);





 if (VAR_3)
 {
  SortCoordinate VAR_14;







  VAR_14 = FUNC_6(sizeof(SortCoordinateData));
  VAR_14->isWorker = 1;
  VAR_14->nParticipants = -1;
  VAR_14->sharedsort = VAR_6;
  VAR_3->sortstate =
   FUNC_9(VAR_2->heap, VAR_2->index, 0,
          FUNC_2(VAR_7, VAR_1), VAR_14,
          0);
 }


 VAR_10.isunique = VAR_4->isunique;
 VAR_10.havedead = 0;
 VAR_10.heap = VAR_2->heap;
 VAR_10.spool = VAR_2;
 VAR_10.spool2 = VAR_3;
 VAR_10.indtuples = 0;
 VAR_10.btleader = ((void*)0);


 VAR_13 = FUNC_0(VAR_2->index);
 VAR_13->ii_Concurrent = VAR_4->isconcurrent;
 VAR_11 = FUNC_7(VAR_2->heap,
         FUNC_3(VAR_4));
 VAR_12 = FUNC_8(VAR_2->heap, VAR_2->index, VAR_13,
            1, VAR_8, VAR_0,
            (void *) &VAR_10, VAR_11);
 FUNC_11(VAR_2->sortstate);
 if (VAR_3)
  FUNC_11(VAR_3->sortstate);





 FUNC_4(&VAR_4->mutex);
 VAR_4->nparticipantsdone++;
 VAR_4->reltuples += VAR_12;
 if (VAR_10.havedead)
  VAR_4->havedead = 1;
 VAR_4->indtuples += VAR_10.indtuples;
 if (VAR_13->ii_BrokenHotChain)
  VAR_4->brokenhotchain = 1;
 FUNC_5(&VAR_4->mutex);


 FUNC_1(&VAR_4->workersdonecv);


 FUNC_10(VAR_2->sortstate);
 if (VAR_3)
  FUNC_10(VAR_3->sortstate);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_17__ {int isunique; TYPE_4__* spool2; int havedead; int const indtuples; TYPE_1__* btleader; TYPE_4__* spool; } ;
struct TYPE_16__ {int isunique; void* sortstate; void* index; void* heap; } ;
struct TYPE_15__ {int ii_Unique; scalar_t__ ii_ParallelWorkers; int ii_BrokenHotChain; int ii_Concurrent; } ;
struct TYPE_14__ {int isWorker; int sharedsort; int nParticipants; } ;
struct TYPE_13__ {int sharedsort2; int nparticipanttuplesorts; int sharedsort; } ;
typedef int SortCoordinateData ;
typedef TYPE_2__* SortCoordinate ;
typedef void* Relation ;
typedef TYPE_3__ IndexInfo ;
typedef TYPE_4__ BTSpool ;
typedef TYPE_5__ BTBuildState ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,scalar_t__) ;
 int VAR_5 ;
 double FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int const*,int const*) ;
 int FUNC_5 (int ,int ) ;
 double FUNC_6 (void*,void*,TYPE_3__*,int,int,int ,void*,int *) ;
 void* FUNC_7 (void*,void*,int,int ,TYPE_2__*,int) ;
 int VAR_7 ;

__attribute__((used)) static double
FUNC_8(Relation VAR_8, Relation VAR_9, BTBuildState *VAR_10,
     IndexInfo *VAR_11)
{
 BTSpool *VAR_12 = (BTSpool *) FUNC_3(sizeof(BTSpool));
 SortCoordinate VAR_13 = ((void*)0);
 double VAR_14 = 0;







 VAR_12->heap = VAR_8;
 VAR_12->index = VAR_9;
 VAR_12->isunique = VAR_11->ii_Unique;


 VAR_10->spool = VAR_12;


 FUNC_5(VAR_1,
         VAR_0);


 if (VAR_11->ii_ParallelWorkers > 0)
  FUNC_0(VAR_10, VAR_11->ii_Concurrent,
         VAR_11->ii_ParallelWorkers);





 if (VAR_10->btleader)
 {
  VAR_13 = (SortCoordinate) FUNC_3(sizeof(SortCoordinateData));
  VAR_13->isWorker = 0;
  VAR_13->nParticipants =
   VAR_10->btleader->nparticipanttuplesorts;
  VAR_13->sharedsort = VAR_10->btleader->sharedsort;
 }
 VAR_10->spool->sortstate =
  FUNC_7(VAR_8, VAR_9, VAR_10->isunique,
         VAR_6, VAR_13,
         0);






 if (VAR_11->ii_Unique)
 {
  BTSpool *VAR_15 = (BTSpool *) FUNC_3(sizeof(BTSpool));
  SortCoordinate VAR_16 = ((void*)0);


  VAR_15->heap = VAR_8;
  VAR_15->index = VAR_9;
  VAR_15->isunique = 0;

  VAR_10->spool2 = VAR_15;

  if (VAR_10->btleader)
  {





   VAR_16 = (SortCoordinate) FUNC_3(sizeof(SortCoordinateData));
   VAR_16->isWorker = 0;
   VAR_16->nParticipants =
    VAR_10->btleader->nparticipanttuplesorts;
   VAR_16->sharedsort = VAR_10->btleader->sharedsort2;
  }





  VAR_10->spool2->sortstate =
   FUNC_7(VAR_8, VAR_9, 0, VAR_7,
          VAR_16, 0);
 }


 if (!VAR_10->btleader)
  VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_11, 1, 1,
             VAR_5, (void *) VAR_10,
             ((void*)0));
 else
  VAR_14 = FUNC_1(VAR_10,
            &VAR_11->ii_BrokenHotChain);





 {
  const int VAR_17[] = {
   VAR_2,
   VAR_4,
   VAR_3
  };
  const int64 VAR_18[] = {
   VAR_10->indtuples,
   0, 0
  };

  FUNC_4(3, VAR_17, VAR_18);
 }


 if (VAR_10->spool2 && !VAR_10->havedead)
 {

  FUNC_2(VAR_10->spool2);
  VAR_10->spool2 = ((void*)0);
 }

 return VAR_14;
}

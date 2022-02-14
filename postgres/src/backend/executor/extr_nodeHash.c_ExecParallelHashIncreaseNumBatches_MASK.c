
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
struct TYPE_16__ {int nbatch; int nbuckets; int area; TYPE_1__* batches; TYPE_2__* parallel_state; } ;
struct TYPE_15__ {double ntuples; long estimated_size; double old_ntuples; int space_exhausted; int chunks; void* buckets; } ;
struct TYPE_14__ {int old_nbatch; long space_allowed; int nparticipants; int nbatch; int nbuckets; int grow_batches_barrier; void* old_batches; void* growth; int chunk_work_queue; void* batches; int build_barrier; } ;
struct TYPE_13__ {TYPE_3__* shared; } ;
typedef TYPE_2__ ParallelHashJoinState ;
typedef TYPE_3__ ParallelHashJoinBatch ;
typedef TYPE_4__* HashJoinTable ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_10 (int,int) ;
 int VAR_2 ;
 double FUNC_11 (double,int) ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;




 int FUNC_12 (scalar_t__) ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 double FUNC_13 (double) ;
 void* FUNC_14 (int ,int) ;
 int FUNC_15 (int ,void*) ;
 scalar_t__ FUNC_16 (int ,void*) ;
 int FUNC_17 (int *,void*) ;
 int FUNC_18 (int *,void*) ;
 int FUNC_19 (int) ;
 long VAR_13 ;

__attribute__((used)) static void
FUNC_20(HashJoinTable VAR_14)
{
 ParallelHashJoinState *VAR_15 = VAR_14->parallel_state;
 int VAR_16;

 FUNC_0(FUNC_2(&VAR_15->build_barrier) == VAR_4);






 switch (FUNC_12(FUNC_2(&VAR_15->grow_batches_barrier)))
 {
  case 130:







   if (FUNC_1(&VAR_15->grow_batches_barrier,
          VAR_10))
   {
    dsa_pointer_atomic *VAR_17;
    ParallelHashJoinBatch *VAR_18;
    int VAR_19;
    int VAR_20;


    VAR_18 = VAR_14->batches[0].shared;
    VAR_15->old_batches = VAR_15->batches;
    VAR_15->old_nbatch = VAR_14->nbatch;
    VAR_15->batches = VAR_1;


    FUNC_3(VAR_14);


    if (VAR_14->nbatch == 1)
    {





     VAR_15->space_allowed = VAR_13 * 1024L;
     VAR_19 = 1 << FUNC_19(VAR_15->nparticipants * 2);
    }
    else
    {




     VAR_19 = VAR_14->nbatch * 2;
    }


    FUNC_0(VAR_14->nbatch == VAR_15->nbatch);
    FUNC_5(VAR_14, VAR_19);
    FUNC_0(VAR_14->nbatch == VAR_15->nbatch);


    if (VAR_15->old_nbatch == 1)
    {
     double VAR_21;
     double VAR_22;
     int VAR_23;
     VAR_21 = (VAR_18->ntuples * 2.0) / VAR_19;
     VAR_22 = FUNC_13(VAR_21 / VAR_3);
     VAR_22 = FUNC_11(VAR_22,
           VAR_2 / sizeof(dsa_pointer_atomic));
     VAR_23 = (int) VAR_22;
     VAR_23 = FUNC_10(VAR_23, 1024);
     VAR_23 = 1 << FUNC_19(VAR_23);
     FUNC_15(VAR_14->area, VAR_18->buckets);
     VAR_14->batches[0].shared->buckets =
      FUNC_14(VAR_14->area,
          sizeof(dsa_pointer_atomic) * VAR_23);
     VAR_17 = (dsa_pointer_atomic *)
      FUNC_16(VAR_14->area,
          VAR_14->batches[0].shared->buckets);
     for (VAR_20 = 0; VAR_20 < VAR_23; ++VAR_20)
      FUNC_17(&VAR_17[VAR_20], VAR_1);
     VAR_15->nbuckets = VAR_23;
    }
    else
    {

     VAR_14->batches[0].shared->buckets = VAR_18->buckets;
     VAR_17 = (dsa_pointer_atomic *)
      FUNC_16(VAR_14->area, VAR_18->buckets);
     for (VAR_20 = 0; VAR_20 < VAR_14->nbuckets; ++VAR_20)
      FUNC_18(&VAR_17[VAR_20], VAR_1);
    }


    VAR_15->chunk_work_queue = VAR_18->chunks;


    VAR_15->growth = VAR_5;
   }
   else
   {

    FUNC_3(VAR_14);
   }


  case 132:

   FUNC_1(&VAR_15->grow_batches_barrier,
         VAR_8);


  case 128:

   FUNC_4(VAR_14);
   FUNC_9(VAR_14, 0);

   FUNC_7(VAR_14);
   FUNC_8(VAR_14);
   FUNC_6(VAR_14);

   FUNC_1(&VAR_15->grow_batches_barrier,
         VAR_12);


  case 131:






   if (FUNC_1(&VAR_15->grow_batches_barrier,
          VAR_9))
   {
    bool VAR_24 = 0;
    bool VAR_25 = 0;


    FUNC_4(VAR_14);
    FUNC_9(VAR_14, 0);


    for (VAR_16 = 0; VAR_16 < VAR_14->nbatch; ++VAR_16)
    {
     ParallelHashJoinBatch *VAR_26 = VAR_14->batches[VAR_16].shared;

     if (VAR_26->space_exhausted ||
      VAR_26->estimated_size > VAR_15->space_allowed)
     {
      int VAR_27;

      VAR_24 = 1;







      VAR_27 = VAR_16 % VAR_15->old_nbatch;
      if (VAR_26->ntuples == VAR_14->batches[VAR_27].shared->old_ntuples)
       VAR_25 = 1;
     }
    }


    if (VAR_25 || VAR_14->nbatch >= VAR_0 / 2)
     VAR_15->growth = VAR_5;
    else if (VAR_24)
     VAR_15->growth = VAR_6;
    else
     VAR_15->growth = VAR_7;


    FUNC_15(VAR_14->area, VAR_15->old_batches);
    VAR_15->old_batches = VAR_1;
   }


  case 129:

   FUNC_1(&VAR_15->grow_batches_barrier,
         VAR_11);
 }
}

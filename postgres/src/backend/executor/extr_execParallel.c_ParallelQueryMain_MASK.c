
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_11__ ;


typedef int shm_toc ;
typedef scalar_t__ int64 ;
typedef int dsm_segment ;
typedef int dsa_area ;
struct TYPE_35__ {int (* rDestroy ) (TYPE_9__*) ;} ;
struct TYPE_34__ {scalar_t__ tuples_needed; int param_exec; int eflags; int jit_flags; } ;
struct TYPE_33__ {int * seg; int * toc; } ;
struct TYPE_32__ {TYPE_11__* estate; TYPE_17__* planstate; TYPE_1__* plannedstmt; int sourceText; } ;
struct TYPE_31__ {int instrument_options; } ;
struct TYPE_30__ {size_t num_workers; int * jit_instr; } ;
struct TYPE_29__ {int instr; } ;
struct TYPE_28__ {int * es_query_dsa; } ;
struct TYPE_27__ {int jitFlags; } ;
struct TYPE_26__ {TYPE_2__* state; } ;
struct TYPE_25__ {TYPE_3__* es_jit; } ;
typedef TYPE_4__ SharedJitInstrumentation ;
typedef TYPE_5__ SharedExecutorInstrumentation ;
typedef TYPE_6__ QueryDesc ;
typedef TYPE_7__ ParallelWorkerContext ;
typedef TYPE_8__ FixedParallelExecutorState ;
typedef TYPE_9__ DestReceiver ;
typedef int BufferUsage ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int *,TYPE_9__*,int) ;
 TYPE_9__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_17__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_17__*,TYPE_5__*) ;
 int FUNC_6 (scalar_t__,TYPE_17__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,int ,scalar_t__,int) ;
 int FUNC_10 (TYPE_6__*,int ) ;
 int VAR_0 ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_14 (char*,TYPE_11__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_15 (void*,int *) ;
 int FUNC_16 (int *) ;
 char* FUNC_17 (int *,int ) ;
 int FUNC_18 (int ,int ) ;
 void* FUNC_19 (int *,int ,int) ;
 int FUNC_20 (TYPE_9__*) ;

void
FUNC_21(dsm_segment *VAR_9, shm_toc *VAR_10)
{
 FixedParallelExecutorState *VAR_11;
 BufferUsage *VAR_12;
 DestReceiver *VAR_13;
 QueryDesc *VAR_14;
 SharedExecutorInstrumentation *VAR_15;
 SharedJitInstrumentation *VAR_16;
 int VAR_17 = 0;
 void *VAR_18;
 dsa_area *VAR_19;
 ParallelWorkerContext VAR_20;


 VAR_11 = FUNC_19(VAR_10, VAR_3, 0);


 VAR_13 = FUNC_3(VAR_9, VAR_10);
 VAR_15 = FUNC_19(VAR_10, VAR_4, 1);
 if (VAR_15 != ((void*)0))
  VAR_17 = VAR_15->instrument_options;
 VAR_16 = FUNC_19(VAR_10, VAR_5,
           1);
 VAR_14 = FUNC_2(VAR_10, VAR_13, VAR_17);


 VAR_8 = VAR_14->sourceText;


 FUNC_18(VAR_7, VAR_8);


 VAR_18 = FUNC_19(VAR_10, VAR_2, 0);
 VAR_19 = FUNC_15(VAR_18, VAR_9);


 VAR_14->plannedstmt->jitFlags = VAR_11->jit_flags;
 FUNC_10(VAR_14, VAR_11->eflags);


 VAR_14->planstate->state->es_query_dsa = VAR_19;
 if (FUNC_1(VAR_11->param_exec))
 {
  char *VAR_21;

  VAR_21 = FUNC_17(VAR_19, VAR_11->param_exec);
  FUNC_14(VAR_21, VAR_14->estate);

 }
 VAR_20.toc = VAR_10;
 VAR_20.seg = VAR_9;
 FUNC_4(VAR_14->planstate, &VAR_20);


 FUNC_6(VAR_11->tuples_needed, VAR_14->planstate);
 FUNC_13();





 FUNC_9(VAR_14,
    VAR_0,
    VAR_11->tuples_needed < 0 ? (int64) 0 : VAR_11->tuples_needed,
    1);


 FUNC_8(VAR_14);


 VAR_12 = FUNC_19(VAR_10, VAR_1, 0);
 FUNC_12(&VAR_12[VAR_6]);


 if (VAR_15 != ((void*)0))
  FUNC_5(VAR_14->planstate,
            VAR_15);


 if (VAR_14->estate->es_jit && VAR_16 != ((void*)0))
 {
  FUNC_0(VAR_6 < VAR_16->num_workers);
  VAR_16->jit_instr[VAR_6] =
   VAR_14->estate->es_jit->instr;
 }


 FUNC_7(VAR_14);


 FUNC_16(VAR_19);
 FUNC_11(VAR_14);
 VAR_13->rDestroy(VAR_13);
}

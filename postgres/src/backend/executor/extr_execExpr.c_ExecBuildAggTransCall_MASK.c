
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_27__ {scalar_t__ numSortCols; int numInputs; scalar_t__ transtypeByVal; scalar_t__ initValueIsNull; } ;
struct TYPE_22__ {int setno; int setoff; int transno; int jumpnull; TYPE_10__* aggstate; } ;
struct TYPE_21__ {int setno; int setoff; int transno; int jumpnull; int * aggcontext; TYPE_9__* pertrans; TYPE_10__* aggstate; } ;
struct TYPE_20__ {int setno; int setoff; int transno; int * aggcontext; TYPE_9__* pertrans; TYPE_10__* aggstate; } ;
struct TYPE_23__ {TYPE_4__ agg_strict_trans_check; TYPE_3__ agg_init_trans; TYPE_2__ agg_trans; } ;
struct TYPE_26__ {TYPE_5__ d; int opcode; } ;
struct TYPE_25__ {int steps_len; TYPE_8__* steps; } ;
struct TYPE_24__ {TYPE_1__* flinfo; } ;
struct TYPE_19__ {scalar_t__ fn_strict; } ;
struct TYPE_18__ {int ** aggcontexts; int * hashcontext; } ;
typedef TYPE_6__* FunctionCallInfo ;
typedef TYPE_7__ ExprState ;
typedef TYPE_8__ ExprEvalStep ;
typedef int ExprContext ;
typedef TYPE_9__* AggStatePerTrans ;
typedef TYPE_10__ AggState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_7__*,TYPE_8__*) ;

__attribute__((used)) static void
FUNC_2(ExprState *VAR_6, AggState *VAR_7,
       ExprEvalStep *VAR_8,
       FunctionCallInfo VAR_9, AggStatePerTrans VAR_10,
       int VAR_11, int VAR_12, int VAR_13, bool VAR_14)
{
 int VAR_15 = -1;
 int VAR_16 = -1;
 ExprContext *VAR_17;

 if (VAR_14)
  VAR_17 = VAR_7->hashcontext;
 else
  VAR_17 = VAR_7->aggcontexts[VAR_12];
 if (VAR_10->numSortCols == 0 &&
  VAR_9->flinfo->fn_strict &&
  VAR_10->initValueIsNull)
 {
  VAR_8->opcode = VAR_0;
  VAR_8->d.agg_init_trans.aggstate = VAR_7;
  VAR_8->d.agg_init_trans.pertrans = VAR_10;
  VAR_8->d.agg_init_trans.setno = VAR_12;
  VAR_8->d.agg_init_trans.setoff = VAR_13;
  VAR_8->d.agg_init_trans.transno = VAR_11;
  VAR_8->d.agg_init_trans.aggcontext = VAR_17;
  VAR_8->d.agg_init_trans.jumpnull = -1;
  FUNC_1(VAR_6, VAR_8);


  VAR_15 = VAR_6->steps_len - 1;
 }

 if (VAR_10->numSortCols == 0 &&
  VAR_9->flinfo->fn_strict)
 {
  VAR_8->opcode = VAR_5;
  VAR_8->d.agg_strict_trans_check.aggstate = VAR_7;
  VAR_8->d.agg_strict_trans_check.setno = VAR_12;
  VAR_8->d.agg_strict_trans_check.setoff = VAR_13;
  VAR_8->d.agg_strict_trans_check.transno = VAR_11;
  VAR_8->d.agg_strict_trans_check.jumpnull = -1;
  FUNC_1(VAR_6, VAR_8);






  VAR_16 = VAR_6->steps_len - 1;
 }


 if (VAR_10->numSortCols == 0 && VAR_10->transtypeByVal)
  VAR_8->opcode = VAR_4;
 else if (VAR_10->numSortCols == 0)
  VAR_8->opcode = VAR_3;
 else if (VAR_10->numInputs == 1)
  VAR_8->opcode = VAR_1;
 else
  VAR_8->opcode = VAR_2;

 VAR_8->d.agg_trans.aggstate = VAR_7;
 VAR_8->d.agg_trans.pertrans = VAR_10;
 VAR_8->d.agg_trans.setno = VAR_12;
 VAR_8->d.agg_trans.setoff = VAR_13;
 VAR_8->d.agg_trans.transno = VAR_11;
 VAR_8->d.agg_trans.aggcontext = VAR_17;
 FUNC_1(VAR_6, VAR_8);


 if (VAR_15 != -1)
 {
  ExprEvalStep *VAR_18 = &VAR_6->steps[VAR_15];

  FUNC_0(VAR_18->d.agg_init_trans.jumpnull == -1);
  VAR_18->d.agg_init_trans.jumpnull = VAR_6->steps_len;
 }
 if (VAR_16 != -1)
 {
  ExprEvalStep *VAR_19 = &VAR_6->steps[VAR_16];

  FUNC_0(VAR_19->d.agg_strict_trans_check.jumpnull == -1);
  VAR_19->d.agg_strict_trans_check.jumpnull = VAR_6->steps_len;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__ dtype; } ;
struct TYPE_22__ {int ndatums; TYPE_9__** datums; } ;
struct TYPE_21__ {int rwparam; } ;
struct TYPE_20__ {TYPE_1__* datatype; } ;
struct TYPE_19__ {int paramid; int paramtype; } ;
struct TYPE_18__ {scalar_t__ parserSetupArg; scalar_t__ paramFetchArg; } ;
struct TYPE_16__ {int paramid; int paramtype; int * paramarg; void* paramfunc; } ;
struct TYPE_17__ {TYPE_2__ cparam; } ;
struct TYPE_15__ {int typlen; } ;
struct TYPE_14__ {int* resnull; TYPE_3__ d; int * resvalue; int opcode; } ;
typedef TYPE_4__* ParamListInfo ;
typedef TYPE_5__ Param ;
typedef TYPE_6__ PLpgSQL_var ;
typedef TYPE_7__ PLpgSQL_expr ;
typedef TYPE_8__ PLpgSQL_execstate ;
typedef TYPE_9__ PLpgSQL_datum ;
typedef int ExprState ;
typedef TYPE_10__ ExprEvalStep ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_10__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;

__attribute__((used)) static void
FUNC_2(ParamListInfo VAR_10, Param *VAR_11,
       ExprState *VAR_12,
       Datum *VAR_13, bool *VAR_14)
{
 PLpgSQL_execstate *VAR_15;
 PLpgSQL_expr *VAR_16;
 int VAR_17;
 PLpgSQL_datum *VAR_18;
 ExprEvalStep VAR_19;


 VAR_15 = (PLpgSQL_execstate *) VAR_10->paramFetchArg;
 VAR_16 = (PLpgSQL_expr *) VAR_10->parserSetupArg;


 VAR_17 = VAR_11->paramid - 1;
 FUNC_0(VAR_17 >= 0 && VAR_17 < VAR_15->ndatums);


 VAR_18 = VAR_15->datums[VAR_17];

 VAR_19.opcode = VAR_0;
 VAR_19.resvalue = VAR_13;
 VAR_19.resnull = VAR_14;
 if (VAR_18->dtype == VAR_4)
 {
  if (VAR_17 != VAR_16->rwparam &&
   ((PLpgSQL_var *) VAR_18)->datatype->typlen == -1)
   VAR_19.d.cparam.paramfunc = VAR_9;
  else
   VAR_19.d.cparam.paramfunc = VAR_8;
 }
 else if (VAR_18->dtype == VAR_3)
  VAR_19.d.cparam.paramfunc = VAR_7;
 else if (VAR_18->dtype == VAR_1)
 {
  if (VAR_17 != VAR_16->rwparam &&
   ((PLpgSQL_var *) VAR_18)->datatype->typlen == -1)
   VAR_19.d.cparam.paramfunc = VAR_6;
  else
   VAR_19.d.cparam.paramfunc = VAR_5;
 }
 else if (VAR_18->dtype == VAR_2 &&
    VAR_17 != VAR_16->rwparam)
  VAR_19.d.cparam.paramfunc = VAR_6;
 else
  VAR_19.d.cparam.paramfunc = VAR_5;







 VAR_19.d.cparam.paramarg = ((void*)0);
 VAR_19.d.cparam.paramid = VAR_11->paramid;
 VAR_19.d.cparam.paramtype = VAR_11->paramtype;
 FUNC_1(VAR_12, &VAR_19);
}

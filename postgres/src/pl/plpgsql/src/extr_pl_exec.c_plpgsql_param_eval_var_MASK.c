
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {TYPE_4__* ecxt_param_list_info; } ;
struct TYPE_12__ {int paramid; scalar_t__ paramtype; } ;
struct TYPE_13__ {TYPE_2__ cparam; } ;
struct TYPE_17__ {TYPE_3__ d; int * resnull; int * resvalue; } ;
struct TYPE_16__ {int ndatums; scalar_t__* datums; } ;
struct TYPE_15__ {scalar_t__ dtype; TYPE_1__* datatype; int isnull; int value; } ;
struct TYPE_14__ {scalar_t__ paramFetchArg; } ;
struct TYPE_11__ {scalar_t__ typoid; } ;
typedef TYPE_4__* ParamListInfo ;
typedef TYPE_5__ PLpgSQL_var ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int ExprState ;
typedef TYPE_7__ ExprEvalStep ;
typedef TYPE_8__ ExprContext ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(ExprState *VAR_1, ExprEvalStep *VAR_2,
        ExprContext *VAR_3)
{
 ParamListInfo VAR_4;
 PLpgSQL_execstate *VAR_5;
 int VAR_6 = VAR_2->d.cparam.paramid - 1;
 PLpgSQL_var *VAR_7;


 VAR_4 = VAR_3->ecxt_param_list_info;
 VAR_5 = (PLpgSQL_execstate *) VAR_4->paramFetchArg;
 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_5->ndatums);


 VAR_7 = (PLpgSQL_var *) VAR_5->datums[VAR_6];
 FUNC_0(VAR_7->dtype == VAR_0);


 *VAR_2->resvalue = VAR_7->value;
 *VAR_2->resnull = VAR_7->isnull;


 FUNC_0(VAR_7->datatype->typoid == VAR_2->d.cparam.paramtype);
}

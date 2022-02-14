
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_15__ {TYPE_3__* ecxt_param_list_info; } ;
struct TYPE_10__ {int paramid; scalar_t__ paramtype; } ;
struct TYPE_11__ {TYPE_1__ cparam; } ;
struct TYPE_14__ {TYPE_2__ d; int resnull; int resvalue; } ;
struct TYPE_13__ {int ndatums; int ** datums; } ;
struct TYPE_12__ {scalar_t__ paramFetchArg; } ;
typedef TYPE_3__* ParamListInfo ;
typedef TYPE_4__ PLpgSQL_execstate ;
typedef int PLpgSQL_datum ;
typedef scalar_t__ Oid ;
typedef int ExprState ;
typedef TYPE_5__ ExprEvalStep ;
typedef TYPE_6__ ExprContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int *,scalar_t__*,int *,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(ExprState *VAR_2, ExprEvalStep *VAR_3,
         ExprContext *VAR_4)
{
 ParamListInfo VAR_5;
 PLpgSQL_execstate *VAR_6;
 int VAR_7 = VAR_3->d.cparam.paramid - 1;
 PLpgSQL_datum *VAR_8;
 Oid VAR_9;
 int32 VAR_10;


 VAR_5 = VAR_4->ecxt_param_list_info;
 VAR_6 = (PLpgSQL_execstate *) VAR_5->paramFetchArg;
 FUNC_0(VAR_7 >= 0 && VAR_7 < VAR_6->ndatums);


 VAR_8 = VAR_6->datums[VAR_7];


 FUNC_4(VAR_6, VAR_8,
     &VAR_9, &VAR_10,
     VAR_3->resvalue, VAR_3->resnull);


 if (FUNC_6(VAR_9 != VAR_3->d.cparam.paramtype))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("type of parameter %d (%s) does not match that when preparing the plan (%s)",
      VAR_3->d.cparam.paramid,
      FUNC_5(VAR_9),
      FUNC_5(VAR_3->d.cparam.paramtype))));
}

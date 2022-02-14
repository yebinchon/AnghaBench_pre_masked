
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_26__ {scalar_t__ er_tupdesc_id; } ;
struct TYPE_25__ {TYPE_3__* ecxt_param_list_info; } ;
struct TYPE_18__ {int paramid; scalar_t__ paramtype; } ;
struct TYPE_19__ {TYPE_1__ cparam; } ;
struct TYPE_24__ {TYPE_2__ d; int resnull; int * resvalue; } ;
struct TYPE_23__ {int ndatums; scalar_t__* datums; } ;
struct TYPE_22__ {int refname; TYPE_9__* erh; } ;
struct TYPE_17__ {scalar_t__ ftypeid; int fnumber; } ;
struct TYPE_21__ {scalar_t__ dtype; size_t recparentno; scalar_t__ rectupledescid; TYPE_15__ finfo; int fieldname; } ;
struct TYPE_20__ {scalar_t__ paramFetchArg; } ;
typedef TYPE_3__* ParamListInfo ;
typedef TYPE_4__ PLpgSQL_recfield ;
typedef TYPE_5__ PLpgSQL_rec ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int ExprState ;
typedef TYPE_7__ ExprEvalStep ;
typedef TYPE_8__ ExprContext ;
typedef TYPE_9__ ExpandedRecordHeader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,...) ;
 int FUNC_4 (TYPE_9__*,int ,int ) ;
 int FUNC_5 (TYPE_9__*,int ,TYPE_15__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(ExprState *VAR_4, ExprEvalStep *VAR_5,
       ExprContext *VAR_6)
{
 ParamListInfo VAR_7;
 PLpgSQL_execstate *VAR_8;
 int VAR_9 = VAR_5->d.cparam.paramid - 1;
 PLpgSQL_recfield *VAR_10;
 PLpgSQL_rec *VAR_11;
 ExpandedRecordHeader *VAR_12;


 VAR_7 = VAR_6->ecxt_param_list_info;
 VAR_8 = (PLpgSQL_execstate *) VAR_7->paramFetchArg;
 FUNC_0(VAR_9 >= 0 && VAR_9 < VAR_8->ndatums);


 VAR_10 = (PLpgSQL_recfield *) VAR_8->datums[VAR_9];
 FUNC_0(VAR_10->dtype == VAR_3);


 VAR_11 = (PLpgSQL_rec *) (VAR_8->datums[VAR_10->recparentno]);
 VAR_12 = VAR_11->erh;






 if (VAR_12 == ((void*)0))
 {
  FUNC_7(VAR_8, VAR_11);
  VAR_12 = VAR_11->erh;
 }





 if (FUNC_8(VAR_10->rectupledescid != VAR_12->er_tupdesc_id))
 {
  if (!FUNC_5(VAR_12,
            VAR_10->fieldname,
            &VAR_10->finfo))
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("record \"%s\" has no field \"%s\"",
       VAR_11->refname, VAR_10->fieldname)));
  VAR_10->rectupledescid = VAR_12->er_tupdesc_id;
 }


 *VAR_5->resvalue = FUNC_4(VAR_12,
             VAR_10->finfo.fnumber,
             VAR_5->resnull);


 if (FUNC_8(VAR_10->finfo.ftypeid != VAR_5->d.cparam.paramtype))
  FUNC_1(VAR_2,
    (FUNC_2(VAR_0),
     FUNC_3("type of parameter %d (%s) does not match that when preparing the plan (%s)",
      VAR_5->d.cparam.paramid,
      FUNC_6(VAR_10->finfo.ftypeid),
      FUNC_6(VAR_5->d.cparam.paramtype))));
}

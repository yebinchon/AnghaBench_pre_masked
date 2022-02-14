
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef int int32 ;
struct TYPE_25__ {int dtype; } ;
struct TYPE_24__ {int ndatums; TYPE_9__** datums; } ;
struct TYPE_23__ {int rwparam; int paramnos; } ;
struct TYPE_22__ {TYPE_13__* erh; } ;
struct TYPE_21__ {size_t recparentno; int rectupledescid; int finfo; int fieldname; } ;
struct TYPE_20__ {TYPE_1__* datatype; } ;
struct TYPE_19__ {int isnull; void* value; scalar_t__ pflags; int ptype; } ;
struct TYPE_18__ {int numParams; scalar_t__ parserSetupArg; scalar_t__ paramFetchArg; } ;
struct TYPE_17__ {int typlen; } ;
struct TYPE_16__ {int er_tupdesc_id; } ;
typedef TYPE_2__* ParamListInfo ;
typedef TYPE_3__ ParamExternData ;
typedef TYPE_4__ PLpgSQL_var ;
typedef TYPE_5__ PLpgSQL_recfield ;
typedef TYPE_6__ PLpgSQL_rec ;
typedef TYPE_7__ PLpgSQL_expr ;
typedef TYPE_8__ PLpgSQL_execstate ;
typedef TYPE_9__ PLpgSQL_datum ;
typedef void* Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (void*,int,int) ;
 scalar_t__ VAR_1 ;





 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_8__*,TYPE_9__*,int *,int *,void**,int*) ;
 int FUNC_4 (TYPE_13__*,int ,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static ParamExternData *
FUNC_6(ParamListInfo VAR_2,
     int VAR_3, bool VAR_4,
     ParamExternData *VAR_5)
{
 int VAR_6;
 PLpgSQL_execstate *VAR_7;
 PLpgSQL_expr *VAR_8;
 PLpgSQL_datum *VAR_9;
 bool VAR_10 = 1;
 int32 VAR_11;


 VAR_6 = VAR_3 - 1;
 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_2->numParams);


 VAR_7 = (PLpgSQL_execstate *) VAR_2->paramFetchArg;
 VAR_8 = (PLpgSQL_expr *) VAR_2->parserSetupArg;
 FUNC_0(VAR_2->numParams == VAR_7->ndatums);


 VAR_9 = VAR_7->datums[VAR_6];
 if (!FUNC_2(VAR_6, VAR_8->paramnos))
  VAR_10 = 0;





 else if (VAR_4)
 {
  switch (VAR_9->dtype)
  {
   case 128:
   case 132:

    break;

   case 129:

    break;

   case 131:

    break;

   case 130:
    {
     PLpgSQL_recfield *VAR_12 = (PLpgSQL_recfield *) VAR_9;
     PLpgSQL_rec *VAR_13;

     VAR_13 = (PLpgSQL_rec *) (VAR_7->datums[VAR_12->recparentno]);




     if (VAR_13->erh == ((void*)0))
      VAR_10 = 0;





     else if (FUNC_5(VAR_12->rectupledescid != VAR_13->erh->er_tupdesc_id))
     {
      if (FUNC_4(VAR_13->erh,
               VAR_12->fieldname,
               &VAR_12->finfo))
       VAR_12->rectupledescid = VAR_13->erh->er_tupdesc_id;
      else
       VAR_10 = 0;
     }
     break;
    }

   default:
    VAR_10 = 0;
    break;
  }
 }


 if (!VAR_10)
 {
  VAR_5->value = (Datum) 0;
  VAR_5->isnull = 1;
  VAR_5->pflags = 0;
  VAR_5->ptype = VAR_0;
  return VAR_5;
 }


 FUNC_3(VAR_7, VAR_9,
     &VAR_5->ptype, &VAR_11,
     &VAR_5->value, &VAR_5->isnull);

 VAR_5->pflags = VAR_1;





 if (VAR_6 != VAR_8->rwparam)
 {
  if (VAR_9->dtype == 128)
   VAR_5->value = FUNC_1(VAR_5->value,
             VAR_5->isnull,
             ((PLpgSQL_var *) VAR_9)->datatype->typlen);
  else if (VAR_9->dtype == 131)
   VAR_5->value = FUNC_1(VAR_5->value,
             VAR_5->isnull,
             -1);
 }

 return VAR_5;
}

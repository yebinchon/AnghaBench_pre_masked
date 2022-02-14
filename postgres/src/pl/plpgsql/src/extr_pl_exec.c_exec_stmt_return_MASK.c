
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_21__ {int dtype; } ;
struct TYPE_20__ {int retisnull; scalar_t__ fn_rettype; scalar_t__ rettype; void* retval; TYPE_2__* func; scalar_t__ retistuple; TYPE_7__** datums; scalar_t__ retisset; } ;
struct TYPE_19__ {scalar_t__ rectypeid; int erh; } ;
struct TYPE_18__ {size_t retvarno; int * expr; } ;
struct TYPE_17__ {int isnull; TYPE_1__* datatype; void* value; } ;
struct TYPE_16__ {scalar_t__ fn_prokind; } ;
struct TYPE_15__ {scalar_t__ typoid; } ;
typedef TYPE_3__ PLpgSQL_var ;
typedef TYPE_4__ PLpgSQL_stmt_return ;
typedef int PLpgSQL_row ;
typedef TYPE_5__ PLpgSQL_rec ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef TYPE_7__ PLpgSQL_datum ;
typedef void* Datum ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_6__*,TYPE_7__*,scalar_t__*,int *,void**,int*) ;
 void* FUNC_7 (TYPE_6__*,int *,int*,scalar_t__*,int *) ;
 int FUNC_8 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(PLpgSQL_execstate *VAR_6, PLpgSQL_stmt_return *VAR_7)
{





 if (VAR_6->retisset)
  return VAR_3;


 VAR_6->retval = (Datum) 0;
 VAR_6->retisnull = 1;
 VAR_6->rettype = VAR_2;
 if (VAR_7->retvarno >= 0)
 {
  PLpgSQL_datum *VAR_8 = VAR_6->datums[VAR_7->retvarno];

  switch (VAR_8->dtype)
  {
   case 131:

    FUNC_8(VAR_6, (PLpgSQL_var *) VAR_8);



   case 128:
    {
     PLpgSQL_var *VAR_9 = (PLpgSQL_var *) VAR_8;

     VAR_6->retval = VAR_9->value;
     VAR_6->retisnull = VAR_9->isnull;
     VAR_6->rettype = VAR_9->datatype->typoid;
     if (VAR_6->retistuple && !VAR_6->retisnull)
      FUNC_3(VAR_1,
        (FUNC_4(VAR_0),
         FUNC_5("cannot return non-composite value from function returning composite type")));
    }
    break;

   case 130:
    {
     PLpgSQL_rec *VAR_10 = (PLpgSQL_rec *) VAR_8;


     if (VAR_10->erh && !FUNC_1(VAR_10->erh))
     {
      VAR_6->retval = FUNC_0(VAR_10->erh);
      VAR_6->retisnull = 0;
      VAR_6->rettype = VAR_10->rectypeid;
     }
    }
    break;

   case 129:
    {
     PLpgSQL_row *VAR_11 = (PLpgSQL_row *) VAR_8;
     int32 VAR_12;


     FUNC_6(VAR_6,
         (PLpgSQL_datum *) VAR_11,
         &VAR_6->rettype,
         &VAR_12,
         &VAR_6->retval,
         &VAR_6->retisnull);
    }
    break;

   default:
    FUNC_2(VAR_1, "unrecognized dtype: %d", VAR_8->dtype);
  }

  return VAR_3;
 }

 if (VAR_7->expr != ((void*)0))
 {
  int32 VAR_13;

  VAR_6->retval = FUNC_7(VAR_6, VAR_7->expr,
          &(VAR_6->retisnull),
          &(VAR_6->rettype),
          &VAR_13);





  if (VAR_6->retistuple && !VAR_6->retisnull &&
   !FUNC_9(VAR_6->rettype))
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("cannot return non-composite value from function returning composite type")));

  return VAR_3;
 }






 if (VAR_6->fn_rettype == VAR_5 &&
  VAR_6->func->fn_prokind != VAR_4)
 {
  VAR_6->retval = (Datum) 0;
  VAR_6->retisnull = 0;
  VAR_6->rettype = VAR_5;
 }

 return VAR_3;
}

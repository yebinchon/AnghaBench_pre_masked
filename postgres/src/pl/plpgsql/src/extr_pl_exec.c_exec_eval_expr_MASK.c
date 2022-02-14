
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int int32 ;
struct TYPE_20__ {int atttypmod; int atttypid; } ;
struct TYPE_19__ {int eval_processed; TYPE_1__* eval_tuptable; } ;
struct TYPE_18__ {int query; int * plan; } ;
struct TYPE_17__ {TYPE_14__* tupdesc; int * vals; } ;
struct TYPE_16__ {int natts; } ;
typedef TYPE_2__ PLpgSQL_expr ;
typedef TYPE_3__ PLpgSQL_execstate ;
typedef int Oid ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_14__*,int,int*) ;
 TYPE_4__* FUNC_1 (TYPE_14__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,int,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__*,int *,int*,int *,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,int,int *) ;

__attribute__((used)) static Datum
FUNC_9(PLpgSQL_execstate *VAR_6,
      PLpgSQL_expr *VAR_7,
      bool *VAR_8,
      Oid *VAR_9,
      int32 *VAR_10)
{
 Datum VAR_11 = 0;
 int VAR_12;
 Form_pg_attribute VAR_13;




 if (VAR_7->plan == ((void*)0))
  FUNC_7(VAR_6, VAR_7, VAR_0, 1);





 if (FUNC_6(VAR_6, VAR_7,
         &VAR_11, VAR_8, VAR_9, VAR_10))
  return VAR_11;




 VAR_12 = FUNC_8(VAR_6, VAR_7, 2, ((void*)0));
 if (VAR_12 != VAR_5)
  FUNC_2(VAR_4,
    (FUNC_3(VAR_3),
     FUNC_4("query \"%s\" did not return data", VAR_7->query)));




 if (VAR_6->eval_tuptable->tupdesc->natts != 1)
  FUNC_2(VAR_4,
    (FUNC_3(VAR_2),
     FUNC_5("query \"%s\" returned %d column",
          "query \"%s\" returned %d columns",
          VAR_6->eval_tuptable->tupdesc->natts,
          VAR_7->query,
          VAR_6->eval_tuptable->tupdesc->natts)));




 VAR_13 = FUNC_1(VAR_6->eval_tuptable->tupdesc, 0);
 *VAR_9 = VAR_13->atttypid;
 *VAR_10 = VAR_13->atttypmod;




 if (VAR_6->eval_processed == 0)
 {
  *VAR_8 = 1;
  return (Datum) 0;
 }




 if (VAR_6->eval_processed != 1)
  FUNC_2(VAR_4,
    (FUNC_3(VAR_1),
     FUNC_4("query \"%s\" returned more than one row",
      VAR_7->query)));




 return FUNC_0(VAR_6->eval_tuptable->vals[0],
       VAR_6->eval_tuptable->tupdesc, 1, VAR_8);
}

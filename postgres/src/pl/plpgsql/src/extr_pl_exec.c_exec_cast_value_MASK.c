
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cast_in_use; int cast_exprstate; } ;
typedef TYPE_1__ plpgsql_CastHashEntry ;
typedef int int32 ;
struct TYPE_11__ {int caseValue_isNull; int caseValue_datum; } ;
struct TYPE_10__ {TYPE_3__* eval_econtext; } ;
typedef TYPE_2__ PLpgSQL_execstate ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef TYPE_3__ ExprContext ;
typedef int Datum ;


 int FUNC_0 (int ,TYPE_3__*,int*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,scalar_t__,int,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static Datum
FUNC_4(PLpgSQL_execstate *VAR_0,
    Datum VAR_1, bool *VAR_2,
    Oid VAR_3, int32 VAR_4,
    Oid VAR_5, int32 VAR_6)
{



 if (VAR_3 != VAR_5 ||
  (VAR_4 != VAR_6 && VAR_6 != -1))
 {
  plpgsql_CastHashEntry *VAR_7;

  VAR_7 = FUNC_2(VAR_0,
          VAR_3, VAR_4,
          VAR_5, VAR_6);
  if (VAR_7)
  {
   ExprContext *VAR_8 = VAR_0->eval_econtext;
   MemoryContext VAR_9;

   VAR_9 = FUNC_1(FUNC_3(VAR_0));

   VAR_8->caseValue_datum = VAR_1;
   VAR_8->caseValue_isNull = *VAR_2;

   VAR_7->cast_in_use = 1;

   VAR_1 = FUNC_0(VAR_7->cast_exprstate, VAR_8,
         VAR_2);

   VAR_7->cast_in_use = 0;

   FUNC_1(VAR_9);
  }
 }

 return VAR_1;
}

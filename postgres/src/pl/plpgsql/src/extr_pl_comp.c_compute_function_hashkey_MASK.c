
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* tg_trigger; } ;
typedef TYPE_4__ TriggerData ;
struct TYPE_14__ {int values; } ;
struct TYPE_19__ {int pronargs; int proname; TYPE_2__ proargtypes; } ;
struct TYPE_18__ {TYPE_3__* flinfo; int fncollation; scalar_t__ context; } ;
struct TYPE_17__ {int argtypes; int inputCollation; int trigOid; scalar_t__ isTrigger; int funcOid; } ;
struct TYPE_15__ {int fn_expr; int fn_oid; } ;
struct TYPE_13__ {int tgoid; } ;
typedef TYPE_5__ PLpgSQL_func_hashkey ;
typedef int Oid ;
typedef TYPE_6__* FunctionCallInfo ;
typedef TYPE_7__* Form_pg_proc ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int ,int *,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(FunctionCallInfo VAR_0,
       Form_pg_proc VAR_1,
       PLpgSQL_func_hashkey *VAR_2,
       bool VAR_3)
{

 FUNC_1(VAR_2, 0, sizeof(PLpgSQL_func_hashkey));


 VAR_2->funcOid = VAR_0->flinfo->fn_oid;


 VAR_2->isTrigger = FUNC_0(VAR_0);







 if (VAR_2->isTrigger && !VAR_3)
 {
  TriggerData *VAR_4 = (TriggerData *) VAR_0->context;

  VAR_2->trigOid = VAR_4->tg_trigger->tgoid;
 }


 VAR_2->inputCollation = VAR_0->fncollation;

 if (VAR_1->pronargs > 0)
 {

  FUNC_3(VAR_2->argtypes, VAR_1->proargtypes.values,
      VAR_1->pronargs * sizeof(Oid));


  FUNC_4(VAR_1->pronargs,
            VAR_2->argtypes,
            ((void*)0),
            VAR_0->flinfo->fn_expr,
            VAR_3,
            FUNC_2(VAR_1->proname));
 }
}

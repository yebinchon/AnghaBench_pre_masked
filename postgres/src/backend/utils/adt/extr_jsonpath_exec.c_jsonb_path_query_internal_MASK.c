
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * user_fctx; int multi_call_memory_ctx; } ;
struct TYPE_9__ {int member_0; } ;
typedef int MemoryContext ;
typedef int ListCell ;
typedef int List ;
typedef int JsonbValue ;
typedef int Jsonb ;
typedef TYPE_1__ JsonValueList ;
typedef int JsonPath ;
typedef int FunctionCallInfo ;
typedef TYPE_2__ FuncCallContext ;
typedef int Datum ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (int) ;
 TYPE_2__* FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (int *,int *,int *,int,TYPE_1__*,int) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;

__attribute__((used)) static Datum
FUNC_16(FunctionCallInfo VAR_0, bool VAR_1)
{
 FuncCallContext *VAR_2;
 List *VAR_3;
 JsonbValue *VAR_4;
 ListCell *VAR_5;

 if (FUNC_8())
 {
  JsonPath *VAR_6;
  Jsonb *VAR_7;
  MemoryContext VAR_8;
  Jsonb *VAR_9;
  bool VAR_10;
  JsonValueList VAR_11 = {0};

  VAR_2 = FUNC_7();
  VAR_8 = FUNC_3(VAR_2->multi_call_memory_ctx);

  VAR_7 = FUNC_5(0);
  VAR_6 = FUNC_6(1);
  VAR_9 = FUNC_5(2);
  VAR_10 = FUNC_4(3);

  (void) FUNC_12(VAR_6, VAR_9, VAR_7, !VAR_10, &VAR_11, VAR_1);

  VAR_2->user_fctx = FUNC_0(&VAR_11);

  FUNC_3(VAR_8);
 }

 VAR_2 = FUNC_9();
 VAR_3 = VAR_2->user_fctx;

 VAR_5 = FUNC_15(VAR_3);

 if (VAR_5 == ((void*)0))
  FUNC_10(VAR_2);

 VAR_4 = FUNC_13(VAR_5);
 VAR_2->user_fctx = FUNC_14(VAR_3);

 FUNC_11(VAR_2, FUNC_1(FUNC_2(VAR_4)));
}

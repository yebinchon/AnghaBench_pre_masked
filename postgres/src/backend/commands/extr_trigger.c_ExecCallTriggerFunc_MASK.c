
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int tg_event; TYPE_1__* tg_trigger; int * tg_newtable; int * tg_oldtable; } ;
typedef TYPE_3__ TriggerData ;
struct TYPE_18__ {TYPE_2__* flinfo; scalar_t__ isnull; } ;
struct TYPE_17__ {scalar_t__ fn_oid; } ;
struct TYPE_15__ {int fn_oid; } ;
struct TYPE_14__ {scalar_t__ tgfoid; } ;
typedef int PgStat_FunctionCallUsage ;
typedef int Node ;
typedef int MemoryContext ;
typedef int Instrumentation ;
typedef int HeapTuple ;
typedef TYPE_4__ FmgrInfo ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__,TYPE_4__*,int ,scalar_t__,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_18 (scalar_t__,TYPE_4__*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (TYPE_5__*,int *) ;

__attribute__((used)) static HeapTuple
FUNC_21(TriggerData *VAR_7,
     int VAR_8,
     FmgrInfo *VAR_9,
     Instrumentation *VAR_10,
     MemoryContext VAR_11)
{
 FUNC_6(VAR_6, 0);
 PgStat_FunctionCallUsage VAR_12;
 Datum VAR_13;
 MemoryContext VAR_14;





 FUNC_0(((FUNC_13(VAR_7->tg_event) ||
    FUNC_14(VAR_7->tg_event) ||
    FUNC_12(VAR_7->tg_event)) &&
   FUNC_11(VAR_7->tg_event) &&
   !(VAR_7->tg_event & VAR_0) &&
   !(VAR_7->tg_event & VAR_1)) ||
     (VAR_7->tg_oldtable == ((void*)0) && VAR_7->tg_newtable == ((void*)0)));

 VAR_9 += VAR_8;





 if (VAR_9->fn_oid == VAR_4)
  FUNC_18(VAR_7->tg_trigger->tgfoid, VAR_9);

 FUNC_0(VAR_9->fn_oid == VAR_7->tg_trigger->tgfoid);




 if (VAR_10)
  FUNC_4(VAR_10 + VAR_8);







 VAR_14 = FUNC_7(VAR_11);




 FUNC_3(*VAR_6, VAR_9, 0,
        VAR_4, (Node *) VAR_7, ((void*)0));

 FUNC_20(VAR_6, &VAR_12);

 VAR_5++;
 FUNC_10();
 {
  VAR_13 = FUNC_2(VAR_6);
 }
 FUNC_9();
 {
  VAR_5--;
 }
 FUNC_8();

 FUNC_19(&VAR_12, 1);

 FUNC_7(VAR_14);





 if (VAR_6->isnull)
  FUNC_15(VAR_3,
    (FUNC_16(VAR_2),
     FUNC_17("trigger function %u returned null value",
      VAR_6->flinfo->fn_oid)));





 if (VAR_10)
  FUNC_5(VAR_10 + VAR_8, 1);

 return (HeapTuple) FUNC_1(VAR_13);
}

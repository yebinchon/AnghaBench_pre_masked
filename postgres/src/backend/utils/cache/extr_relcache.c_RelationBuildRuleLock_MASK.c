
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_18__ {int is_instead; int ev_enabled; scalar_t__ ev_type; int oid; } ;
struct TYPE_17__ {TYPE_2__* rd_rules; int * rd_rulescxt; TYPE_1__* rd_rel; } ;
struct TYPE_16__ {int * qual; int * actions; int isInstead; int enabled; scalar_t__ event; int ruleId; } ;
struct TYPE_15__ {int numLocks; TYPE_3__** rules; } ;
struct TYPE_14__ {int relowner; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__ RuleLock ;
typedef TYPE_3__ RewriteRule ;
typedef TYPE_4__* Relation ;
typedef int Node ;
typedef int * MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_5__* Form_pg_rewrite ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,int*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (TYPE_3__**,int) ;
 int FUNC_17 (int *,int ) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (TYPE_4__*,int ,int,int *,int,int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_23 (int ,int ) ;

__attribute__((used)) static void
FUNC_24(Relation VAR_10)
{
 MemoryContext VAR_11;
 MemoryContext VAR_12;
 HeapTuple VAR_13;
 Relation VAR_14;
 TupleDesc VAR_15;
 SysScanDesc VAR_16;
 ScanKeyData VAR_17;
 RuleLock *VAR_18;
 int VAR_19;
 RewriteRule **VAR_20;
 int VAR_21;




 VAR_11 = FUNC_0(VAR_6,
          "relation rules",
          VAR_0);
 VAR_10->rd_rulescxt = VAR_11;
 FUNC_5(VAR_11,
           FUNC_10(VAR_10));





 VAR_21 = 4;
 VAR_20 = (RewriteRule **)
  FUNC_4(VAR_11, sizeof(RewriteRule *) * VAR_21);
 VAR_19 = 0;




 FUNC_12(&VAR_17,
    VAR_3,
    VAR_5, VAR_7,
    FUNC_8(FUNC_11(VAR_10)));
 VAR_14 = FUNC_23(VAR_9, VAR_1);
 VAR_15 = FUNC_9(VAR_14);
 VAR_16 = FUNC_19(VAR_14,
           VAR_8,
           1, ((void*)0),
           1, &VAR_17);

 while (FUNC_3(VAR_13 = FUNC_21(VAR_16)))
 {
  Form_pg_rewrite VAR_22 = (Form_pg_rewrite) FUNC_2(VAR_13);
  bool VAR_23;
  Datum VAR_24;
  char *VAR_25;
  RewriteRule *VAR_26;

  VAR_26 = (RewriteRule *) FUNC_4(VAR_11,
              sizeof(RewriteRule));

  VAR_26->ruleId = VAR_22->oid;

  VAR_26->event = VAR_22->ev_type - '0';
  VAR_26->enabled = VAR_22->ev_enabled;
  VAR_26->isInstead = VAR_22->is_instead;







  VAR_24 = FUNC_14(VAR_13,
          VAR_2,
          VAR_15,
          &VAR_23);
  FUNC_1(!VAR_23);
  VAR_25 = FUNC_13(VAR_24);
  VAR_12 = FUNC_7(VAR_11);
  VAR_26->actions = (List *) FUNC_18(VAR_25);
  FUNC_7(VAR_12);
  FUNC_15(VAR_25);

  VAR_24 = FUNC_14(VAR_13,
          VAR_4,
          VAR_15,
          &VAR_23);
  FUNC_1(!VAR_23);
  VAR_25 = FUNC_13(VAR_24);
  VAR_12 = FUNC_7(VAR_11);
  VAR_26->qual = (Node *) FUNC_18(VAR_25);
  FUNC_7(VAR_12);
  FUNC_15(VAR_25);
  FUNC_17((Node *) VAR_26->actions, VAR_10->rd_rel->relowner);
  FUNC_17(VAR_26->qual, VAR_10->rd_rel->relowner);

  if (VAR_19 >= VAR_21)
  {
   VAR_21 *= 2;
   VAR_20 = (RewriteRule **)
    FUNC_16(VAR_20, sizeof(RewriteRule *) * VAR_21);
  }
  VAR_20[VAR_19++] = VAR_26;
 }




 FUNC_20(VAR_16);
 FUNC_22(VAR_14, VAR_1);




 if (VAR_19 == 0)
 {
  VAR_10->rd_rules = ((void*)0);
  VAR_10->rd_rulescxt = ((void*)0);
  FUNC_6(VAR_11);
  return;
 }




 VAR_18 = (RuleLock *) FUNC_4(VAR_11, sizeof(RuleLock));
 VAR_18->numLocks = VAR_19;
 VAR_18->rules = VAR_20;

 VAR_10->rd_rules = VAR_18;
}

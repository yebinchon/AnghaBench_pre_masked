
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef int TupleTableSlot ;
struct TYPE_18__ {int numtriggers; TYPE_1__* triggers; } ;
typedef TYPE_3__ TriggerDesc ;
struct TYPE_19__ {int tg_event; int * tg_newslot; int * tg_trigslot; int * tg_newtuple; int * tg_trigtuple; int tg_relation; int type; int * tg_newtable; TYPE_1__* tg_trigger; int tg_oldtable; } ;
typedef TYPE_4__ TriggerData ;
struct TYPE_22__ {int ate_flags; int ate_ctid2; int ate_ctid1; } ;
struct TYPE_21__ {scalar_t__ ats_tgoid; int ats_event; TYPE_2__* ats_table; } ;
struct TYPE_20__ {int ri_RelationDesc; } ;
struct TYPE_17__ {int closed; int * new_tuplestore; int old_tuplestore; } ;
struct TYPE_16__ {scalar_t__ tgoid; scalar_t__ tgnewtable; scalar_t__ tgoldtable; } ;
typedef TYPE_5__ ResultRelInfo ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int Instrumentation ;
typedef int * HeapTuple ;
typedef int FmgrInfo ;
typedef int EState ;
typedef TYPE_6__* AfterTriggerShared ;
typedef TYPE_7__* AfterTriggerEvent ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_4__*,int,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,int*) ;
 int * FUNC_3 (int *,TYPE_5__*) ;
 int * FUNC_4 (int *,TYPE_5__*) ;
 int * FUNC_5 () ;
 TYPE_6__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int ,int *) ;
 int FUNC_14 (int *,int,int,int *) ;

__attribute__((used)) static void
FUNC_15(EState *VAR_8,
     AfterTriggerEvent VAR_9,
     ResultRelInfo *VAR_10,
     TriggerDesc *VAR_11,
     FmgrInfo *VAR_12, Instrumentation *VAR_13,
     MemoryContext VAR_14,
     TupleTableSlot *VAR_15,
     TupleTableSlot *VAR_16)
{
 Relation VAR_17 = VAR_10->ri_RelationDesc;
 AfterTriggerShared VAR_18 = FUNC_6(VAR_9);
 Oid VAR_19 = VAR_18->ats_tgoid;
 TriggerData VAR_20;
 HeapTuple VAR_21;
 int VAR_22;
 bool VAR_23 = 0;
 bool VAR_24 = 0;




 VAR_20.tg_trigger = ((void*)0);
 VAR_20.tg_trigslot = ((void*)0);
 VAR_20.tg_newslot = ((void*)0);

 for (VAR_22 = 0; VAR_22 < VAR_11->numtriggers; VAR_22++)
 {
  if (VAR_11->triggers[VAR_22].tgoid == VAR_19)
  {
   VAR_20.tg_trigger = &(VAR_11->triggers[VAR_22]);
   break;
  }
 }
 if (VAR_20.tg_trigger == ((void*)0))
  FUNC_11(VAR_2, "could not find trigger %u", VAR_19);





 if (VAR_13)
  FUNC_7(VAR_13 + VAR_22);




 switch (VAR_9->ate_flags & VAR_1)
 {
  case 129:
   {
    Tuplestorestate *VAR_25 = FUNC_5();

    if (!FUNC_14(VAR_25, 1, 0,
            VAR_15))
     FUNC_11(VAR_2, "failed to fetch tuple1 for AFTER trigger");

    if ((VAR_18->ats_event & VAR_4) ==
     VAR_6 &&
     !FUNC_14(VAR_25, 1, 0,
            VAR_16))
     FUNC_11(VAR_2, "failed to fetch tuple2 for AFTER trigger");
   }

  case 128:
   VAR_20.tg_trigslot = VAR_15;
   VAR_20.tg_trigtuple =
    FUNC_2(VAR_15, 1, &VAR_23);

   VAR_20.tg_newslot = VAR_16;
   VAR_20.tg_newtuple =
    ((VAR_18->ats_event & VAR_4) ==
     VAR_6) ?
    FUNC_2(VAR_16, 1, &VAR_24) : ((void*)0);

   break;

  default:
   if (FUNC_9(&(VAR_9->ate_ctid1)))
   {
    VAR_20.tg_trigslot = FUNC_4(VAR_8, VAR_10);

    if (!FUNC_13(VAR_17, &(VAR_9->ate_ctid1),
               VAR_3,
               VAR_20.tg_trigslot))
     FUNC_11(VAR_2, "failed to fetch tuple1 for AFTER trigger");
    VAR_20.tg_trigtuple =
     FUNC_2(VAR_20.tg_trigslot, 0, &VAR_23);
   }
   else
   {
    VAR_20.tg_trigtuple = ((void*)0);
   }


   if ((VAR_9->ate_flags & VAR_1) ==
    VAR_0 &&
    FUNC_9(&(VAR_9->ate_ctid2)))
   {
    VAR_20.tg_newslot = FUNC_3(VAR_8, VAR_10);

    if (!FUNC_13(VAR_17, &(VAR_9->ate_ctid2),
               VAR_3,
               VAR_20.tg_newslot))
     FUNC_11(VAR_2, "failed to fetch tuple2 for AFTER trigger");
    VAR_20.tg_newtuple =
     FUNC_2(VAR_20.tg_newslot, 0, &VAR_24);
   }
   else
   {
    VAR_20.tg_newtuple = ((void*)0);
   }
 }
 VAR_20.tg_oldtable = *(VAR_20.tg_newtable = ((void*)0));
 if (VAR_18->ats_table)
 {
  if (VAR_20.tg_trigger->tgoldtable)
  {
   VAR_20.tg_oldtable = VAR_18->ats_table->old_tuplestore;
   VAR_18->ats_table->closed = 1;
  }

  if (VAR_20.tg_trigger->tgnewtable)
  {
   VAR_20.tg_newtable = VAR_18->ats_table->new_tuplestore;
   VAR_18->ats_table->closed = 1;
  }
 }




 VAR_20.type = VAR_7;
 VAR_20.tg_event =
  VAR_18->ats_event & (VAR_4 | VAR_5);
 VAR_20.tg_relation = VAR_17;

 FUNC_10(VAR_14);





 VAR_21 = FUNC_0(&VAR_20,
           VAR_22,
           VAR_12,
           ((void*)0),
           VAR_14);
 if (VAR_21 != ((void*)0) &&
  VAR_21 != VAR_20.tg_trigtuple &&
  VAR_21 != VAR_20.tg_newtuple)
  FUNC_12(VAR_21);




 if (VAR_23)
  FUNC_12(VAR_20.tg_trigtuple);
 if (VAR_24)
  FUNC_12(VAR_20.tg_newtuple);

 if (VAR_20.tg_trigslot)
  FUNC_1(VAR_20.tg_trigslot);
 if (VAR_20.tg_newslot)
  FUNC_1(VAR_20.tg_newslot);





 if (VAR_13)
  FUNC_8(VAR_13 + VAR_22, 1);
}

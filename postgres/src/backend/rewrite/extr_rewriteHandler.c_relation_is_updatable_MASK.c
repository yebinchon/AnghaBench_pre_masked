
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_25__ {scalar_t__ trig_delete_instead_row; scalar_t__ trig_update_instead_row; scalar_t__ trig_insert_instead_row; } ;
typedef TYPE_4__ TriggerDesc ;
struct TYPE_30__ {int targetList; int rtable; TYPE_3__* jointree; } ;
struct TYPE_29__ {scalar_t__ rtekind; scalar_t__ relkind; int relid; } ;
struct TYPE_28__ {int rtindex; } ;
struct TYPE_27__ {TYPE_2__* rd_rel; TYPE_4__* trigdesc; TYPE_5__* rd_rules; } ;
struct TYPE_26__ {int numLocks; TYPE_1__** rules; } ;
struct TYPE_24__ {int fromlist; } ;
struct TYPE_23__ {scalar_t__ relkind; } ;
struct TYPE_22__ {int event; int * qual; scalar_t__ isInstead; } ;
struct TYPE_21__ {int (* IsForeignRelUpdatable ) (TYPE_6__*) ;int * ExecForeignDelete; int * ExecForeignUpdate; int * ExecForeignInsert; } ;
typedef TYPE_5__ RuleLock ;
typedef TYPE_6__* Relation ;
typedef TYPE_7__ RangeTblRef ;
typedef TYPE_8__ RangeTblEntry ;
typedef TYPE_9__ Query ;
typedef int Oid ;
typedef TYPE_10__ FdwRoutine ;
typedef int Bitmapset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_10__* FUNC_1 (TYPE_6__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_9__* FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 TYPE_8__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_6__*) ;
 TYPE_6__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_9__*,int *,int **,int *) ;
 int * FUNC_12 (TYPE_9__*,int) ;

int
FUNC_13(Oid VAR_10,
       bool VAR_11,
       Bitmapset *VAR_12)
{
 int VAR_13 = 0;
 Relation VAR_14;
 RuleLock *VAR_15;



 VAR_14 = FUNC_10(VAR_10, VAR_1);







 if (VAR_14 == ((void*)0))
  return 0;


 if (VAR_14->rd_rel->relkind == VAR_7 ||
  VAR_14->rd_rel->relkind == VAR_6)
 {
  FUNC_7(VAR_14, VAR_1);
  return ((1 << VAR_3) | (1 << VAR_4) | (1 << VAR_2));
 }


 VAR_15 = VAR_14->rd_rules;
 if (VAR_15 != ((void*)0))
 {
  int VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_15->numLocks; VAR_16++)
  {
   if (VAR_15->rules[VAR_16]->isInstead &&
    VAR_15->rules[VAR_16]->qual == ((void*)0))
   {
    VAR_13 |= ((1 << VAR_15->rules[VAR_16]->event) & ((1 << VAR_3) | (1 << VAR_4) | (1 << VAR_2)));
   }
  }


  if (VAR_13 == ((1 << VAR_3) | (1 << VAR_4) | (1 << VAR_2)))
  {
   FUNC_7(VAR_14, VAR_1);
   return VAR_13;
  }
 }


 if (VAR_11)
 {
  TriggerDesc *VAR_17 = VAR_14->trigdesc;

  if (VAR_17)
  {
   if (VAR_17->trig_insert_instead_row)
    VAR_13 |= (1 << VAR_3);
   if (VAR_17->trig_update_instead_row)
    VAR_13 |= (1 << VAR_4);
   if (VAR_17->trig_delete_instead_row)
    VAR_13 |= (1 << VAR_2);


   if (VAR_13 == ((1 << VAR_3) | (1 << VAR_4) | (1 << VAR_2)))
   {
    FUNC_7(VAR_14, VAR_1);
    return VAR_13;
   }
  }
 }


 if (VAR_14->rd_rel->relkind == VAR_5)
 {
  FdwRoutine *VAR_18 = FUNC_1(VAR_14, 0);

  if (VAR_18->IsForeignRelUpdatable != ((void*)0))
   VAR_13 |= VAR_18->IsForeignRelUpdatable(VAR_14);
  else
  {

   if (VAR_18->ExecForeignInsert != ((void*)0))
    VAR_13 |= (1 << VAR_3);
   if (VAR_18->ExecForeignUpdate != ((void*)0))
    VAR_13 |= (1 << VAR_4);
   if (VAR_18->ExecForeignDelete != ((void*)0))
    VAR_13 |= (1 << VAR_2);
  }

  FUNC_7(VAR_14, VAR_1);
  return VAR_13;
 }


 if (VAR_14->rd_rel->relkind == VAR_8)
 {
  Query *VAR_19 = FUNC_5(VAR_14);

  if (FUNC_12(VAR_19, 0) == ((void*)0))
  {
   Bitmapset *VAR_20;
   int VAR_21;
   RangeTblRef *VAR_22;
   RangeTblEntry *VAR_23;
   Oid VAR_24;







   FUNC_11(VAR_19, ((void*)0),
           &VAR_20, ((void*)0));

   if (VAR_12 != ((void*)0))
    VAR_20 = FUNC_3(VAR_20, VAR_12);

   if (FUNC_4(VAR_20))
    VAR_21 = (1 << VAR_2);
   else
    VAR_21 = ((1 << VAR_3) | (1 << VAR_4) | (1 << VAR_2));







   VAR_22 = (RangeTblRef *) FUNC_6(VAR_19->jointree->fromlist);
   VAR_23 = FUNC_8(VAR_22->rtindex, VAR_19->rtable);
   FUNC_0(VAR_23->rtekind == VAR_9);

   if (VAR_23->relkind != VAR_7 &&
    VAR_23->relkind != VAR_6)
   {
    VAR_24 = VAR_23->relid;
    VAR_12 = FUNC_2(VAR_20,
               VAR_19->targetList);
    VAR_21 &= FUNC_13(VAR_24,
              VAR_11,
              VAR_12);
   }
   VAR_13 |= VAR_21;
  }
 }


 FUNC_7(VAR_14, VAR_1);
 return VAR_13;
}

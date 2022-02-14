
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int Var ;
struct TYPE_24__ {scalar_t__ relid; int inh; int * extraUpdatedCols; int * updatedCols; int * insertedCols; int * selectedCols; void* checkAsUser; scalar_t__ requiredPerms; int * tablesample; scalar_t__ rellockmode; scalar_t__ relkind; int security_barrier; TYPE_6__* subquery; int rtekind; } ;
typedef TYPE_1__ TargetEntry ;
struct TYPE_28__ {int resultRelation; scalar_t__ commandType; void* rtable; scalar_t__ jointree; void* targetList; TYPE_1__* returningList; } ;
struct TYPE_27__ {scalar_t__ rd_id; } ;
struct TYPE_26__ {void* actions; int * qual; } ;
struct TYPE_25__ {int waitPolicy; int strength; } ;
typedef TYPE_2__ RowMarkClause ;
typedef TYPE_3__ RewriteRule ;
typedef TYPE_4__* Relation ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_6__ Query ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 int FUNC_0 (TYPE_6__*,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int,int,int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_6__* FUNC_6 (TYPE_6__*,int *) ;
 TYPE_2__* FUNC_7 (TYPE_6__*,int) ;
 void* FUNC_8 (void*,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 TYPE_1__* FUNC_11 (int *,int,int ,int) ;
 int * FUNC_12 (TYPE_1__*,int,int ,int) ;
 int FUNC_13 (TYPE_6__*,int *,int ,int ,int) ;
 int FUNC_14 (char*) ;
 TYPE_1__* FUNC_15 (int,void*) ;

__attribute__((used)) static Query *
FUNC_16(Query *VAR_7,
      RewriteRule *VAR_8,
      int VAR_9,
      Relation VAR_10,
      List *VAR_11)
{
 Query *VAR_12;
 RangeTblEntry *VAR_13,
      *VAR_14;
 RowMarkClause *VAR_15;

 if (FUNC_10(VAR_8->actions) != 1)
  FUNC_5(VAR_3, "expected just one rule action");
 if (VAR_8->qual != ((void*)0))
  FUNC_5(VAR_3, "cannot handle qualified ON SELECT rule");

 if (VAR_9 == VAR_7->resultRelation)
 {
  if (VAR_7->commandType == VAR_1)
   return VAR_7;
  else if (VAR_7->commandType == VAR_2 ||
     VAR_7->commandType == VAR_0)
  {
   RangeTblEntry *VAR_16;
   Var *VAR_17;
   TargetEntry *VAR_18;

   VAR_13 = FUNC_15(VAR_9, VAR_7->rtable);
   VAR_16 = FUNC_4(VAR_13);
   VAR_7->rtable = FUNC_8(VAR_7->rtable, VAR_16);
   VAR_7->resultRelation = FUNC_10(VAR_7->rtable);






   VAR_13->requiredPerms = 0;
   VAR_13->checkAsUser = VAR_4;
   VAR_13->selectedCols = ((void*)0);
   VAR_13->insertedCols = ((void*)0);
   VAR_13->updatedCols = ((void*)0);
   VAR_7->returningList = FUNC_4(VAR_7->returningList);
   FUNC_2((Node *) VAR_7->returningList, VAR_9,
         VAR_7->resultRelation, 0);







   VAR_17 = FUNC_12(VAR_13, VAR_9, 0, 0);
   VAR_18 = FUNC_11((Expr *) VAR_17,
          FUNC_10(VAR_7->targetList) + 1,
          FUNC_14("wholerow"),
          1);

   VAR_7->targetList = FUNC_8(VAR_7->targetList, VAR_18);


  }
  else
   FUNC_5(VAR_3, "unrecognized commandType: %d",
     (int) VAR_7->commandType);
 }
 VAR_15 = FUNC_7(VAR_7, VAR_9);






 VAR_12 = FUNC_4(FUNC_9(VAR_8->actions));

 FUNC_0(VAR_12, 1, (VAR_15 != ((void*)0)));






 if (VAR_15 != ((void*)0))
  FUNC_13(VAR_12, (Node *) VAR_12->jointree,
       VAR_15->strength, VAR_15->waitPolicy, 1);
 VAR_12 = FUNC_6(VAR_12, VAR_11);





 VAR_13 = FUNC_15(VAR_9, VAR_7->rtable);

 VAR_13->rtekind = VAR_6;
 VAR_13->subquery = VAR_12;
 VAR_13->security_barrier = FUNC_3(VAR_10);

 VAR_13->relid = VAR_4;
 VAR_13->relkind = 0;
 VAR_13->rellockmode = 0;
 VAR_13->tablesample = ((void*)0);
 VAR_13->inh = 0;





 VAR_14 = FUNC_15(VAR_5, VAR_12->rtable);
 FUNC_1(VAR_14->relid == VAR_10->rd_id);
 VAR_14->requiredPerms = VAR_13->requiredPerms;
 VAR_14->checkAsUser = VAR_13->checkAsUser;
 VAR_14->selectedCols = VAR_13->selectedCols;
 VAR_14->insertedCols = VAR_13->insertedCols;
 VAR_14->updatedCols = VAR_13->updatedCols;
 VAR_14->extraUpdatedCols = VAR_13->extraUpdatedCols;

 VAR_13->requiredPerms = 0;
 VAR_13->checkAsUser = VAR_4;
 VAR_13->selectedCols = ((void*)0);
 VAR_13->insertedCols = ((void*)0);
 VAR_13->updatedCols = ((void*)0);
 VAR_13->extraUpdatedCols = ((void*)0);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int Var ;
typedef int TargetEntry ;
struct TYPE_16__ {int (* AddForeignUpdateTargets ) (TYPE_4__*,int *,TYPE_3__*) ;} ;
struct TYPE_15__ {scalar_t__ commandType; int targetList; int resultRelation; } ;
struct TYPE_14__ {TYPE_2__* trigdesc; TYPE_1__* rd_rel; } ;
struct TYPE_13__ {scalar_t__ trig_delete_before_row; scalar_t__ trig_delete_after_row; scalar_t__ trig_update_before_row; scalar_t__ trig_update_after_row; } ;
struct TYPE_12__ {scalar_t__ relkind; } ;
typedef TYPE_3__* Relation ;
typedef int RangeTblEntry ;
typedef TYPE_4__ Query ;
typedef TYPE_5__ FdwRoutine ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,scalar_t__,int ,int) ;
 int * FUNC_4 (int ,int ,int ,int,int ,int ) ;
 int * FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_4__*,int *,TYPE_3__*) ;

void
FUNC_8(Query *VAR_9, RangeTblEntry *VAR_10,
     Relation VAR_11)
{
 Var *VAR_12 = ((void*)0);
 const char *VAR_13;
 TargetEntry *VAR_14;

 if (VAR_11->rd_rel->relkind == VAR_6 ||
  VAR_11->rd_rel->relkind == VAR_4 ||
  VAR_11->rd_rel->relkind == VAR_5)
 {



  VAR_12 = FUNC_4(VAR_9->resultRelation,
       VAR_7,
       VAR_8,
       -1,
       VAR_2,
       0);

  VAR_13 = "ctid";
 }
 else if (VAR_11->rd_rel->relkind == VAR_3)
 {



  FdwRoutine *VAR_15;

  VAR_15 = FUNC_0(VAR_11, 0);

  if (VAR_15->AddForeignUpdateTargets != ((void*)0))
   VAR_15->AddForeignUpdateTargets(VAR_9, VAR_10,
            VAR_11);






  if (VAR_11->trigdesc &&
   ((VAR_9->commandType == VAR_1 &&
     (VAR_11->trigdesc->trig_update_after_row ||
      VAR_11->trigdesc->trig_update_before_row)) ||
    (VAR_9->commandType == VAR_0 &&
     (VAR_11->trigdesc->trig_delete_after_row ||
      VAR_11->trigdesc->trig_delete_before_row))))
  {
   VAR_12 = FUNC_5(VAR_10,
          VAR_9->resultRelation,
          0,
          0);

   VAR_13 = "wholerow";
  }
 }

 if (VAR_12 != ((void*)0))
 {
  VAR_14 = FUNC_3((Expr *) VAR_12,
         FUNC_2(VAR_9->targetList) + 1,
         FUNC_6(VAR_13),
         1);

  VAR_9->targetList = FUNC_1(VAR_9->targetList, VAR_14);
 }
}

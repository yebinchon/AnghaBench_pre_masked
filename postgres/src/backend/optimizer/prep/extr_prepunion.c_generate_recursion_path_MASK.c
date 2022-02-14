
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int rows; } ;
struct TYPE_24__ {int wt_param_id; TYPE_4__* non_recursive_path; } ;
struct TYPE_23__ {int reltarget; int relids; TYPE_4__* cheapest_total_path; } ;
struct TYPE_22__ {scalar_t__ op; scalar_t__ all; int colCollations; int colTypes; int rarg; int larg; } ;
typedef TYPE_1__ SetOperationStmt ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__ Path ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_4__*,TYPE_4__*,int ,int *,int ,double) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,int ,int ) ;
 int * FUNC_11 (int ,int ,int,int ,int *) ;
 int * FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_16 (int ,TYPE_3__*,int ,int ,int,int,int *,int **,int *) ;

__attribute__((used)) static RelOptInfo *
FUNC_17(SetOperationStmt *VAR_5, PlannerInfo *VAR_6,
      List *VAR_7,
      List **VAR_8)
{
 RelOptInfo *VAR_9;
 Path *VAR_10;
 RelOptInfo *VAR_11,
      *VAR_12;
 Path *VAR_13;
 Path *VAR_14;
 List *VAR_15;
 List *VAR_16;
 List *VAR_17;
 List *VAR_18;
 double VAR_19;


 if (VAR_5->op != VAR_3)
  FUNC_5(VAR_1, "only UNION queries can be recursive");

 FUNC_0(VAR_6->wt_param_id >= 0);





 VAR_11 = FUNC_16(VAR_5->larg, VAR_6,
          VAR_5->colTypes, VAR_5->colCollations,
          0, -1,
          VAR_7,
          &VAR_15,
          ((void*)0));
 VAR_13 = VAR_11->cheapest_total_path;

 VAR_6->non_recursive_path = VAR_13;
 VAR_12 = FUNC_16(VAR_5->rarg, VAR_6,
          VAR_5->colTypes, VAR_5->colCollations,
          0, -1,
          VAR_7,
          &VAR_16,
          ((void*)0));
 VAR_14 = VAR_12->cheapest_total_path;
 VAR_6->non_recursive_path = ((void*)0);




 VAR_17 = FUNC_11(VAR_5->colTypes, VAR_5->colCollations, 0,
          FUNC_14(VAR_15, VAR_16),
          VAR_7);

 *VAR_8 = VAR_17;


 VAR_9 = FUNC_10(VAR_6, VAR_4,
         FUNC_2(VAR_11->relids, VAR_12->relids));
 VAR_9->reltarget = FUNC_3(VAR_6, VAR_17);




 if (VAR_5->all)
 {
  VAR_18 = VAR_2;
  VAR_19 = 0;
 }
 else
 {

  VAR_18 = FUNC_12(VAR_5, VAR_17);


  if (!FUNC_13(VAR_18))
   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_9("could not implement recursive UNION"),
      FUNC_8("All column datatypes must be hashable.")));





  VAR_19 = VAR_13->rows + VAR_14->rows * 10;
 }




 VAR_10 = (Path *) FUNC_4(VAR_6,
              VAR_9,
              VAR_13,
              VAR_14,
              VAR_9->reltarget,
              VAR_18,
              VAR_6->wt_param_id,
              VAR_19);

 FUNC_1(VAR_9, VAR_10);
 FUNC_15(VAR_6, VAR_9);
 return VAR_9;
}

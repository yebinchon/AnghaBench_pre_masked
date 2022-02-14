
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;


struct TYPE_49__ {double rows; } ;
struct TYPE_48__ {double tuple_fraction; } ;
struct TYPE_47__ {double rows; int reltarget; int relids; TYPE_4__* cheapest_total_path; } ;
struct TYPE_46__ {int op; int colTypes; scalar_t__ all; int colCollations; int rarg; int larg; } ;
typedef TYPE_1__ SetOperationStmt ;
typedef int SetOpCmd ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__ Path ;
typedef TYPE_4__ List ;


 int VAR_0 ;
 double FUNC_0 (double,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,TYPE_4__*,double,double,char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int ,int ,int *,int ,int,int ,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int ,int ,TYPE_4__*,scalar_t__,int,double,double) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int ,double) ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int ,int ) ;
 TYPE_4__* FUNC_10 (int ,int ,int,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_11 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_4__* FUNC_13 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_2__* FUNC_15 (int ,TYPE_3__*,int ,int ,int,int,TYPE_4__*,TYPE_4__**,double*) ;

__attribute__((used)) static RelOptInfo *
FUNC_16(SetOperationStmt *VAR_9, PlannerInfo *VAR_10,
      List *VAR_11,
      List **VAR_12)
{
 RelOptInfo *VAR_13;
 RelOptInfo *VAR_14,
      *VAR_15;
 double VAR_16 = VAR_10->tuple_fraction;
 Path *VAR_17,
      *VAR_18,
      *VAR_19;
 List *VAR_20,
      *VAR_21,
      *VAR_22,
      *VAR_23,
      *VAR_24,
      *VAR_25;
 double VAR_26,
    VAR_27,
    VAR_28,
    VAR_29;
 bool VAR_30;
 SetOpCmd VAR_31;
 int VAR_32;




 VAR_10->tuple_fraction = 0.0;


 VAR_14 = FUNC_15(VAR_9->larg, VAR_10,
          VAR_9->colTypes, VAR_9->colCollations,
          0, 0,
          VAR_11,
          &VAR_20,
          &VAR_26);
 VAR_17 = VAR_14->cheapest_total_path;
 VAR_15 = FUNC_15(VAR_9->rarg, VAR_10,
          VAR_9->colTypes, VAR_9->colCollations,
          0, 1,
          VAR_11,
          &VAR_21,
          &VAR_27);
 VAR_18 = VAR_15->cheapest_total_path;


 VAR_10->tuple_fraction = VAR_16;







 if (VAR_9->op == 129 || VAR_26 <= VAR_27)
 {
  VAR_25 = FUNC_13(VAR_17, VAR_18);
  VAR_22 = FUNC_13(VAR_20, VAR_21);
  VAR_32 = 0;
 }
 else
 {
  VAR_25 = FUNC_13(VAR_18, VAR_17);
  VAR_22 = FUNC_13(VAR_21, VAR_20);
  VAR_32 = 1;
 }
 VAR_23 = FUNC_10(VAR_9->colTypes, VAR_9->colCollations, 1,
          VAR_22, VAR_11);

 *VAR_12 = VAR_23;


 VAR_13 = FUNC_9(VAR_10, VAR_8,
         FUNC_2(VAR_14->relids, VAR_15->relids));
 VAR_13->reltarget = FUNC_5(VAR_10, VAR_23);




 VAR_19 = (Path *) FUNC_4(VAR_10, VAR_13, VAR_25, VAR_1,
            VAR_1, ((void*)0), 0, 0, VAR_1, -1);


 VAR_24 = FUNC_11(VAR_9, VAR_23);
 if (VAR_9->op == 129)
 {
  VAR_28 = VAR_26;
  VAR_29 = VAR_9->all ? VAR_17->rows : VAR_28;
 }
 else
 {
  VAR_28 = FUNC_0(VAR_26, VAR_27);
  VAR_29 = VAR_9->all ? FUNC_0(VAR_17->rows, VAR_18->rows) : VAR_28;
 }




 VAR_30 = FUNC_3(VAR_10, VAR_24, VAR_19,
           VAR_28, VAR_29,
           (VAR_9->op == 128) ? "INTERSECT" : "EXCEPT");

 if (VAR_24 && !VAR_30)
  VAR_19 = (Path *) FUNC_7(VAR_10,
           VAR_13,
           VAR_19,
           FUNC_14(VAR_10,
                    VAR_24,
                    VAR_23),
           -1.0);




 switch (VAR_9->op)
 {
  case 128:
   VAR_31 = VAR_9->all ? VAR_5 : VAR_4;
   break;
  case 129:
   VAR_31 = VAR_9->all ? VAR_3 : VAR_2;
   break;
  default:
   FUNC_8(VAR_0, "unrecognized set op: %d", (int) VAR_9->op);
   VAR_31 = VAR_4;
   break;
 }
 VAR_19 = (Path *) FUNC_6(VAR_10,
           VAR_13,
           VAR_19,
           VAR_31,
           VAR_30 ? VAR_6 : VAR_7,
           VAR_24,
           FUNC_12(VAR_9->colTypes) + 1,
           VAR_30 ? VAR_32 : -1,
           VAR_28,
           VAR_29);

 VAR_13->rows = VAR_19->rows;
 FUNC_1(VAR_13, VAR_19);
 return VAR_13;
}

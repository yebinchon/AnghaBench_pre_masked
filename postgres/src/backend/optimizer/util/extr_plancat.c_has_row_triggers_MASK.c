
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int trig_delete_before_row; int trig_delete_after_row; int trig_update_before_row; int trig_update_after_row; int trig_insert_before_row; int trig_insert_after_row; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_9__ {int relid; } ;
struct TYPE_8__ {TYPE_1__* trigdesc; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int Index ;
typedef int CmdType ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_3__* FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;

bool
FUNC_4(PlannerInfo *VAR_2, Index VAR_3, CmdType VAR_4)
{
 RangeTblEntry *VAR_5 = FUNC_1(VAR_3, VAR_2);
 Relation VAR_6;
 TriggerDesc *VAR_7;
 bool VAR_8 = 0;


 VAR_6 = FUNC_3(VAR_5->relid, VAR_1);

 VAR_7 = VAR_6->trigdesc;
 switch (VAR_4)
 {
  case 129:
   if (VAR_7 &&
    (VAR_7->trig_insert_after_row ||
     VAR_7->trig_insert_before_row))
    VAR_8 = 1;
   break;
  case 128:
   if (VAR_7 &&
    (VAR_7->trig_update_after_row ||
     VAR_7->trig_update_before_row))
    VAR_8 = 1;
   break;
  case 130:
   if (VAR_7 &&
    (VAR_7->trig_delete_after_row ||
     VAR_7->trig_delete_before_row))
    VAR_8 = 1;
   break;
  default:
   FUNC_0(VAR_0, "unrecognized CmdType: %d", (int) VAR_4);
   break;
 }

 FUNC_2(VAR_6, VAR_1);
 return VAR_8;
}

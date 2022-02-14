
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int trig_delete_instead_row; int trig_update_instead_row; int trig_insert_instead_row; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_5__ {TYPE_1__* trigdesc; } ;
typedef TYPE_2__* Relation ;
typedef int CmdType ;





 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_1(Relation VAR_1, CmdType VAR_2)
{
 TriggerDesc *VAR_3 = VAR_1->trigdesc;

 switch (VAR_2)
 {
  case 129:
   if (VAR_3 && VAR_3->trig_insert_instead_row)
    return 1;
   break;
  case 128:
   if (VAR_3 && VAR_3->trig_update_instead_row)
    return 1;
   break;
  case 130:
   if (VAR_3 && VAR_3->trig_delete_instead_row)
    return 1;
   break;
  default:
   FUNC_0(VAR_0, "unrecognized CmdType: %d", (int) VAR_2);
   break;
 }
 return 0;
}

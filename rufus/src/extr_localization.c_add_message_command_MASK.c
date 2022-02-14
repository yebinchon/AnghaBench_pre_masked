
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctrl_id; int ** txt; } ;
typedef TYPE_1__ loc_cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

void FUNC_2(loc_cmd* VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  FUNC_1("localization: invalid parameter for add_message_command\n");
  return;
 }

 if ((VAR_3->ctrl_id <= VAR_0) || (VAR_3->ctrl_id >= VAR_1)) {
  FUNC_1("localization: invalid MSG_ index\n");
  return;
 }

 FUNC_0(VAR_2[VAR_3->ctrl_id-VAR_0]);
 VAR_2[VAR_3->ctrl_id-VAR_0] = VAR_3->txt[1];
 VAR_3->txt[1] = ((void*)0);
}

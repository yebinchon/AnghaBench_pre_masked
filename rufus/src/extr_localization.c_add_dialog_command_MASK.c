
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int str ;
struct TYPE_10__ {int command; int list; int ** txt; } ;
typedef TYPE_2__ loc_cmd ;
struct TYPE_12__ {TYPE_1__* table; } ;
struct TYPE_11__ {int list; } ;
struct TYPE_9__ {void* data; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (char*,TYPE_4__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (char*) ;

void FUNC_7(int VAR_2, loc_cmd* VAR_3)
{
 char VAR_4[128];
 loc_cmd* VAR_5;
 uint32_t VAR_6;
 if ((VAR_3 == ((void*)0)) || (VAR_3->txt[0] == ((void*)0)) || (VAR_2 < 0) || (VAR_2 >= FUNC_0(VAR_1))) {
  FUNC_6("localization: invalid parameter for add_dialog_command\n");
  return;
 }







 VAR_4[0] = VAR_2 + 0x30;
 VAR_4[1] = VAR_3->command + 0x30;
 FUNC_5(&VAR_4[2], sizeof(VAR_4)-2, VAR_3->txt[0]);
 VAR_6 = FUNC_2(VAR_4, &VAR_0);
 if (VAR_6 != 0) {
  VAR_5 = (loc_cmd*)(VAR_0.table[VAR_6].data);
  if (VAR_5 != ((void*)0)) {
   FUNC_4(&(VAR_5->list));
   FUNC_1(VAR_5);
  }
  VAR_0.table[VAR_6].data = (void*)VAR_3;
 }
 FUNC_3(&VAR_3->list, &VAR_1[VAR_2].list);
}

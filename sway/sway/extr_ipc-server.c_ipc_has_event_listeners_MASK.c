
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipc_client {int subscribed_events; } ;
typedef enum ipc_command_type { ____Placeholder_ipc_command_type } ipc_command_type ;
struct TYPE_2__ {int length; struct ipc_client** items; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(enum ipc_command_type VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->length; VAR_2++) {
  struct ipc_client *VAR_3 = VAR_0->items[VAR_2];
  if ((VAR_3->subscribed_events & FUNC_0(VAR_1)) != 0) {
   return 1;
  }
 }
 return 0;
}

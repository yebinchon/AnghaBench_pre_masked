
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ipc_client {int subscribed_events; } ;
typedef enum ipc_command_type { ____Placeholder_ipc_command_type } ipc_command_type ;
struct TYPE_2__ {int length; struct ipc_client** items; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct ipc_client*,int,char const*,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, enum ipc_command_type VAR_3) {
 struct ipc_client *VAR_4;
 for (int VAR_5 = 0; VAR_5 < VAR_1->length; VAR_5++) {
  VAR_4 = VAR_1->items[VAR_5];
  if ((VAR_4->subscribed_events & FUNC_0(VAR_3)) == 0) {
   continue;
  }
  if (!FUNC_1(VAR_4, VAR_3, VAR_2,
    (uint32_t)FUNC_2(VAR_2))) {
   FUNC_3(VAR_0, "Unable to send reply to IPC client");



   VAR_5--;
  }
 }
}

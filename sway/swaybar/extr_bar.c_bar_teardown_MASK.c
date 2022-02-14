
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar {int mode; int id; scalar_t__ status; int ipc_socketfd; int ipc_event_socketfd; scalar_t__ config; int seats; int unused_outputs; int outputs; int tray; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct swaybar *VAR_0) {



 FUNC_4(&VAR_0->outputs);
 FUNC_4(&VAR_0->unused_outputs);
 FUNC_5(&VAR_0->seats);
 if (VAR_0->config) {
  FUNC_3(VAR_0->config);
 }
 FUNC_0(VAR_0->ipc_event_socketfd);
 FUNC_0(VAR_0->ipc_socketfd);
 if (VAR_0->status) {
  FUNC_6(VAR_0->status);
 }
 FUNC_2(VAR_0->id);
 FUNC_2(VAR_0->mode);
}

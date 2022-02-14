
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swaybar {int eventloop; int display; scalar_t__ running; TYPE_2__* tray; TYPE_1__* status; int ipc_event_socketfd; } ;
struct TYPE_4__ {struct swaybar* bus; int fd; } ;
struct TYPE_3__ {int read_fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,struct swaybar*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct swaybar *VAR_7) {
 FUNC_0(VAR_7->eventloop, FUNC_3(VAR_7->display), VAR_1,
   VAR_2, VAR_7);
 FUNC_0(VAR_7->eventloop, VAR_7->ipc_event_socketfd, VAR_1, VAR_4, VAR_7);
 if (VAR_7->status) {
  FUNC_0(VAR_7->eventloop, VAR_7->status->read_fd, VAR_1,
    VAR_5, VAR_7);
 }





 while (VAR_7->running) {
  VAR_3 = 0;
  if (FUNC_2(VAR_7->display) == -1 && VAR_3 != VAR_0) {
   break;
  }
  FUNC_1(VAR_7->eventloop);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ipc_client {int fd; struct ipc_client* write_buffer; scalar_t__ writable_event_source; scalar_t__ event_source; } ;
struct TYPE_3__ {int length; struct ipc_client** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipc_client*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct ipc_client *VAR_3) {
 if (!FUNC_4(VAR_3 != ((void*)0), "client != NULL")) {
  return;
 }

 FUNC_3(VAR_3->fd, VAR_0);

 FUNC_5(VAR_1, "IPC Client %d disconnected", VAR_3->fd);
 FUNC_6(VAR_3->event_source);
 if (VAR_3->writable_event_source) {
  FUNC_6(VAR_3->writable_event_source);
 }
 int VAR_4 = 0;
 while (VAR_4 < VAR_2->length && VAR_2->items[VAR_4] != VAR_3) {
  VAR_4++;
 }
 FUNC_2(VAR_2, VAR_4);
 FUNC_1(VAR_3->write_buffer);
 FUNC_0(VAR_3->fd);
 FUNC_1(VAR_3);
}

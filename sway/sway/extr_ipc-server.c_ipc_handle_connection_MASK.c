
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sway_server {int wl_event_loop; } ;
struct ipc_client {int fd; int write_buffer_size; void* write_buffer; scalar_t__ write_buffer_len; int * writable_event_source; int event_source; scalar_t__ subscribed_events; scalar_t__ pending_length; struct sway_server* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,struct ipc_client*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int,scalar_t__,int ,struct ipc_client*) ;

int FUNC_9(int VAR_12, uint32_t VAR_13, void *VAR_14) {
 (void) VAR_12;
 struct sway_server *VAR_15 = VAR_14;
 FUNC_6(VAR_6, "Event on IPC listening socket");
 FUNC_1(VAR_13 == VAR_8);

 int VAR_16 = FUNC_0(VAR_11, ((void*)0), ((void*)0));
 if (VAR_16 == -1) {
  FUNC_7(VAR_7, "Unable to accept IPC client connection");
  return 0;
 }

 int VAR_17;
 if ((VAR_17 = FUNC_3(VAR_16, VAR_1)) == -1
   || FUNC_3(VAR_16, VAR_3, VAR_17|VAR_0) == -1) {
  FUNC_7(VAR_7, "Unable to set CLOEXEC on IPC client socket");
  FUNC_2(VAR_16);
  return 0;
 }
 if ((VAR_17 = FUNC_3(VAR_16, VAR_2)) == -1
   || FUNC_3(VAR_16, VAR_4, VAR_17|VAR_5) == -1) {
  FUNC_7(VAR_7, "Unable to set NONBLOCK on IPC client socket");
  FUNC_2(VAR_16);
  return 0;
 }

 struct ipc_client *VAR_18 = FUNC_5(sizeof(struct ipc_client));
 if (!VAR_18) {
  FUNC_6(VAR_7, "Unable to allocate ipc client");
  FUNC_2(VAR_16);
  return 0;
 }
 VAR_18->server = VAR_15;
 VAR_18->pending_length = 0;
 VAR_18->fd = VAR_16;
 VAR_18->subscribed_events = 0;
 VAR_18->event_source = FUNC_8(VAR_15->wl_event_loop,
   VAR_16, VAR_8, VAR_9, VAR_18);
 VAR_18->writable_event_source = ((void*)0);

 VAR_18->write_buffer_size = 128;
 VAR_18->write_buffer_len = 0;
 VAR_18->write_buffer = FUNC_5(VAR_18->write_buffer_size);
 if (!VAR_18->write_buffer) {
  FUNC_6(VAR_7, "Unable to allocate ipc client write buffer");
  FUNC_2(VAR_16);
  return 0;
 }

 FUNC_6(VAR_6, "New client: fd %d", VAR_16);
 FUNC_4(VAR_10, VAR_18);
 return 0;
}

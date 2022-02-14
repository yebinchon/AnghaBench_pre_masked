
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipc_client {scalar_t__ write_buffer_len; int * writable_event_source; scalar_t__ write_buffer; int fd; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ipc_client*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;

int FUNC_6(int VAR_7, uint32_t VAR_8, void *VAR_9) {
 struct ipc_client *VAR_10 = VAR_9;

 if (VAR_8 & VAR_4) {
  FUNC_2(VAR_2, "IPC Client socket error, removing client");
  FUNC_0(VAR_10);
  return 0;
 }

 if (VAR_8 & VAR_5) {
  FUNC_2(VAR_1, "Client %d hung up", VAR_10->fd);
  FUNC_0(VAR_10);
  return 0;
 }

 if (VAR_10->write_buffer_len <= 0) {
  return 0;
 }

 FUNC_2(VAR_1, "Client %d writable", VAR_10->fd);

 ssize_t VAR_11 = FUNC_5(VAR_10->fd, VAR_10->write_buffer, VAR_10->write_buffer_len);

 if (VAR_11 == -1 && VAR_6 == VAR_0) {
  return 0;
 } else if (VAR_11 == -1) {
  FUNC_3(VAR_3, "Unable to send data from queue to IPC client");
  FUNC_0(VAR_10);
  return 0;
 }

 FUNC_1(VAR_10->write_buffer, VAR_10->write_buffer + VAR_11, VAR_10->write_buffer_len - VAR_11);
 VAR_10->write_buffer_len -= VAR_11;

 if (VAR_10->write_buffer_len == 0 && VAR_10->writable_event_source) {
  FUNC_4(VAR_10->writable_event_source);
  VAR_10->writable_event_source = ((void*)0);
 }

 return 0;
}

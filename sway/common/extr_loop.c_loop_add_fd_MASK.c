
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int member_0; short member_1; int member_2; } ;
struct loop_fd_event {void (* callback ) (int,short,void*) ;void* data; } ;
struct loop {int fd_length; int fd_capacity; struct pollfd* fds; int fd_events; } ;


 int VAR_0 ;
 struct loop_fd_event* FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct loop_fd_event*) ;
 struct pollfd* FUNC_2 (struct pollfd*,int) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct loop *VAR_1, int VAR_2, short VAR_3,
  void (*VAR_4)(int VAR_5, short VAR_6, void *VAR_7), void *VAR_8) {
 struct loop_fd_event *VAR_9 = FUNC_0(1, sizeof(struct loop_fd_event));
 if (!VAR_9) {
  FUNC_3(VAR_0, "Unable to allocate memory for event");
  return;
 }
 VAR_9->callback = VAR_4;
 VAR_9->data = VAR_8;
 FUNC_1(VAR_1->fd_events, VAR_9);

 struct pollfd VAR_10 = {VAR_2, VAR_3, 0};

 if (VAR_1->fd_length == VAR_1->fd_capacity) {
  VAR_1->fd_capacity += 10;
  VAR_1->fds = FUNC_2(VAR_1->fds,
    sizeof(struct pollfd) * VAR_1->fd_capacity);
 }

 VAR_1->fds[VAR_1->fd_length++] = VAR_10;
}

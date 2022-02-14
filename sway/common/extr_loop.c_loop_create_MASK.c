
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
struct loop {int fd_capacity; void* timers; void* fd_events; int fds; } ;


 int VAR_0 ;
 struct loop* FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;

struct loop *FUNC_4(void) {
 struct loop *VAR_1 = FUNC_0(1, sizeof(struct loop));
 if (!VAR_1) {
  FUNC_3(VAR_0, "Unable to allocate memory for loop");
  return ((void*)0);
 }
 VAR_1->fd_capacity = 10;
 VAR_1->fds = FUNC_2(sizeof(struct pollfd) * VAR_1->fd_capacity);
 VAR_1->fd_events = FUNC_1();
 VAR_1->timers = FUNC_1();
 return VAR_1;
}

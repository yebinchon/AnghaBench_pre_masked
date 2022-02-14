
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop* fds; int timers; int fd_events; } ;


 int FUNC_0 (struct loop*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct loop *VAR_0) {
 FUNC_1(VAR_0->fd_events);
 FUNC_1(VAR_0->timers);
 FUNC_0(VAR_0->fds);
 FUNC_0(VAR_0);
}

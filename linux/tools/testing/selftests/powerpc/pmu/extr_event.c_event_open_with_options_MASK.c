
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int fd; int attr; } ;
typedef int pid_t ;


 int FUNC_0 (int *,int ,int,int,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct event *VAR_0, pid_t VAR_1, int VAR_2, int VAR_3)
{
 VAR_0->fd = FUNC_0(&VAR_0->attr, VAR_1, VAR_2, VAR_3, 0);
 if (VAR_0->fd == -1) {
  FUNC_1("perf_event_open");
  return -1;
 }

 return 0;
}

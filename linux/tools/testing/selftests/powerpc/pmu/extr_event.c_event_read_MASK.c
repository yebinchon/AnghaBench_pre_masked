
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int result; int fd; } ;


 int FUNC_0 (int ,char*,struct event*) ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_0 ;

int FUNC_2(struct event *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->fd, &VAR_1->result, sizeof(VAR_1->result));
 if (VAR_2 != sizeof(VAR_1->result)) {
  FUNC_0(VAR_0, "read error on event %p!\n", VAR_1);
  return -1;
 }

 return 0;
}

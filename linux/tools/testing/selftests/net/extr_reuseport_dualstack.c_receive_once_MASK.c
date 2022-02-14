
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct epoll_event {TYPE_1__ data; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct epoll_event*,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int,int ,char*) ;
 int FUNC_4 (int,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2, int VAR_3)
{
 struct epoll_event VAR_4;
 int VAR_5, VAR_6;
 char VAR_7[8];

 VAR_5 = FUNC_2(VAR_2, &VAR_4, 1, -1);
 if (VAR_5 < 0)
  FUNC_3(1, VAR_1, "epoll_wait failed");

 if (VAR_3 == VAR_0) {
  VAR_6 = FUNC_0(VAR_4.data.fd, ((void*)0), ((void*)0));
  if (VAR_6 < 0)
   FUNC_3(1, VAR_1, "failed to accept");
  VAR_5 = FUNC_4(VAR_6, VAR_7, sizeof(VAR_7), 0);
  FUNC_1(VAR_6);
 } else {
  VAR_5 = FUNC_4(VAR_4.data.fd, VAR_7, sizeof(VAR_7), 0);
 }

 if (VAR_5 < 0)
  FUNC_3(1, VAR_1, "failed to recv");

 return VAR_4.data.fd;
}

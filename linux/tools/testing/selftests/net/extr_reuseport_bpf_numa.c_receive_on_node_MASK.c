
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
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int,char*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_6(int *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct epoll_event VAR_8;
 int VAR_9, VAR_10;
 char VAR_11[8];

 VAR_9 = FUNC_2(VAR_5, &VAR_8, 1, -1);
 if (VAR_9 < 0)
  FUNC_3(1, VAR_1, "epoll_wait failed");

 if (VAR_7 == VAR_0) {
  VAR_10 = FUNC_0(VAR_8.data.fd, ((void*)0), ((void*)0));
  if (VAR_10 < 0)
   FUNC_3(1, VAR_1, "failed to accept");
  VAR_9 = FUNC_5(VAR_10, VAR_11, sizeof(VAR_11), 0);
  FUNC_1(VAR_10);
 } else {
  VAR_9 = FUNC_5(VAR_8.data.fd, VAR_11, sizeof(VAR_11), 0);
 }

 if (VAR_9 < 0)
  FUNC_3(1, VAR_1, "failed to recv");

 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
  if (VAR_8.data.fd == VAR_3[VAR_9])
   break;
 if (VAR_9 == VAR_4)
  FUNC_3(1, 0, "failed to find socket");
 FUNC_4(VAR_2, "send node %d, receive socket %d\n", VAR_6, VAR_9);
 if (VAR_6 != VAR_9)
  FUNC_3(1, 0, "node id/receive socket mismatch");
}

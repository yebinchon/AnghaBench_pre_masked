
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int,struct epoll_event*) ;
 int VAR_2 ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(int *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct epoll_event VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = FUNC_2(1);
 if (VAR_9 < 0)
  FUNC_4(1, VAR_2, "failed to create epoll");

 VAR_8.events = VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  VAR_8.data.fd = VAR_3[VAR_10];
  if (FUNC_3(VAR_9, VAR_1, VAR_3[VAR_10], &VAR_8))
   FUNC_4(1, VAR_2, "failed to register sock epoll");
 }

 VAR_11 = FUNC_1(VAR_5, VAR_6);

 VAR_12 = FUNC_5(VAR_9, VAR_6);
 if (VAR_12 != VAR_7)
  FUNC_4(1, 0, "received on an unexpected socket");

 FUNC_0(VAR_11);
 FUNC_0(VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,int,struct epoll_event*) ;
 int FUNC_6 (int,struct epoll_event*,int,int) ;
 int VAR_6 ;
 int FUNC_7 (int,int ,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int* VAR_7 ;
 int FUNC_9 (int,char*,int,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(int VAR_8)
{
 struct epoll_event VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 10000;
 int VAR_13 = 0;
 int VAR_14 = 50;
 int VAR_15, VAR_16;
 char VAR_17[1];

 FUNC_1(VAR_8, VAR_4, VAR_7);
 VAR_16 = FUNC_4(1);
 if (VAR_16 < 0)
  FUNC_7(1, VAR_6, "failed to create epoll");
 VAR_9.events = VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9.data.fd = VAR_7[VAR_10];
  if (FUNC_5(VAR_16, VAR_1, VAR_7[VAR_10], &VAR_9))
   FUNC_7(1, VAR_6, "failed to register sock epoll");
 }
 while (VAR_12--) {
  VAR_11 = FUNC_3(VAR_8, VAR_4);
  if (VAR_5 && ((VAR_12 % VAR_14) == 0)) {
   FUNC_10(VAR_7[VAR_13]);
   if (++VAR_13 >= VAR_3)
    VAR_13 = 0;
  }
  while (1) {
   VAR_10 = FUNC_6(VAR_16, &VAR_9, 1, -1);
   if (VAR_10 < 0)
    FUNC_7(1, VAR_6, "epoll_wait failed");
   if (FUNC_8(VAR_9.data.fd)) {
    VAR_15 = FUNC_0(VAR_9.data.fd, ((void*)0), ((void*)0));
    if (VAR_15 < 0)
     FUNC_7(1, VAR_6, "failed to accept");
    VAR_9.data.fd = VAR_15;
    if (FUNC_5(VAR_16, VAR_1, VAR_15, &VAR_9))
     FUNC_7(1, VAR_6, "failed epoll add");
    continue;
   }
   VAR_10 = FUNC_9(VAR_9.data.fd, VAR_17, sizeof(VAR_17), 0);
   if (VAR_10 != 1)
    FUNC_7(1, VAR_6, "failed recv data");
   if (FUNC_5(VAR_16, VAR_2, VAR_9.data.fd, ((void*)0)))
    FUNC_7(1, VAR_6, "failed epoll del");
   FUNC_2(VAR_9.data.fd);
   break;
  }
  FUNC_2(VAR_11);
 }
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  FUNC_2(VAR_7[VAR_10]);
}

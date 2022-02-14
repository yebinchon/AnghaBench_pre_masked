
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct epoll_event {int events; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,int,struct epoll_event*) ;
 int FUNC_3 (int,struct epoll_event*,int,int) ;
 int VAR_4 ;
 int FUNC_4 (char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_5(const char *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_1);
 struct epoll_event VAR_9, VAR_10[VAR_3];

 if (VAR_8 == -1)
  FUNC_4("%s test: Failed to create epoll file descriptor "
       "(errno %d)\n",
       VAR_5, VAR_4);

 VAR_9.events = VAR_0;
 VAR_9.data.fd = VAR_6;

 if (FUNC_2(VAR_8, VAR_2, VAR_6, &VAR_9)) {
  FUNC_4("%s test: Failed to add epoll file descriptor "
       "(errno %d)\n",
       VAR_5, VAR_4);
 }

 VAR_7 = FUNC_3(VAR_8, VAR_10, VAR_3, 5000);
 if (VAR_7 != 1 || !(VAR_10[0].events & VAR_0))
  FUNC_4("%s test: Unexpected epoll_wait result (c=%d, events=%x) ",
       "(errno %d)\n",
       VAR_5, VAR_7, VAR_10[0].events, VAR_4);

 FUNC_0(VAR_8);
 return;

}

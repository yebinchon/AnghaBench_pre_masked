
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
 scalar_t__ FUNC_1 (int,int ,int,struct epoll_event*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_3, int VAR_4) {
        struct epoll_event VAR_5 = {
                .events = VAR_0,
                .data.fd = VAR_4,
        };

        FUNC_0(VAR_3 >= 0);
        FUNC_0(VAR_4 >= 0);

        if (FUNC_1(VAR_3, VAR_1, VAR_4, &VAR_5) < 0)
                return FUNC_2(VAR_2, "Failed to add event on epoll fd:%d for fd:%d: %m", VAR_3, VAR_4);

        return 0;
}

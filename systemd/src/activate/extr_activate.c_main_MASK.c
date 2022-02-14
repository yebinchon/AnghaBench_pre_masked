
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct epoll_event {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char**,char**,int ) ;
 scalar_t__ FUNC_1 (int,struct epoll_event*,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,char**,char**,int ,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,scalar_t__) ;
 size_t VAR_6 ;
 int FUNC_11 (int,char**) ;

int FUNC_12(int VAR_7, char **VAR_8, char **VAR_9) {
        int VAR_10, VAR_11;
        int VAR_12 = -1;

        FUNC_9(1);
        FUNC_8();
        FUNC_7();

        VAR_10 = FUNC_11(VAR_7, VAR_8);
        if (VAR_10 <= 0)
                return VAR_10 == 0 ? VAR_2 : VAR_1;

        VAR_10 = FUNC_3();
        if (VAR_10 < 0)
                return VAR_1;

        VAR_11 = FUNC_10(&VAR_12, VAR_4);
        if (VAR_11 < 0)
                return VAR_1;
        if (VAR_11 == 0) {
                FUNC_4("No sockets to listen on specified or passed in.");
                return VAR_1;
        }

        for (;;) {
                struct epoll_event VAR_13;

                if (FUNC_1(VAR_12, &VAR_13, 1, -1) < 0) {
                        if (VAR_5 == VAR_0)
                                continue;

                        FUNC_5(VAR_5, "epoll_wait() failed: %m");
                        return VAR_1;
                }

                FUNC_6("Communication attempt on fd %i.", VAR_13.data.fd);
                if (VAR_4) {
                        VAR_10 = FUNC_0(VAR_8[VAR_6], VAR_8 + VAR_6, VAR_9, VAR_13.data.fd);
                        if (VAR_10 < 0)
                                return VAR_1;
                } else
                        break;
        }

        FUNC_2(VAR_8[VAR_6], VAR_8 + VAR_6, VAR_9, VAR_3, (size_t) VAR_11);

        return VAR_2;
}

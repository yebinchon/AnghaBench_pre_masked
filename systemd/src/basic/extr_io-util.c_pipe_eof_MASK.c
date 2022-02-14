
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pollfd*,int,int ) ;

int FUNC_1(int VAR_3) {
        struct pollfd VAR_4 = {
                .fd = VAR_3,
                .events = VAR_1|VAR_0,
        };

        int VAR_5;

        VAR_5 = FUNC_0(&VAR_4, 1, 0);
        if (VAR_5 < 0)
                return -VAR_2;

        if (VAR_5 == 0)
                return 0;

        return VAR_4.revents & VAR_0;
}

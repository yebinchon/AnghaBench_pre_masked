
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pollfd*,int,int ) ;
 scalar_t__ FUNC_1 (int,char*,int) ;

int FUNC_2(int VAR_5) {
        struct pollfd VAR_6 = {
                .fd = VAR_5,
                .events = VAR_3,
        };
        int VAR_7 = 0;






        for (;;) {
                char VAR_8[VAR_2];
                ssize_t VAR_9;
                int VAR_10;

                VAR_10 = FUNC_0(&VAR_6, 1, 0);
                if (VAR_10 < 0) {
                        if (VAR_4 == VAR_1)
                                continue;

                        return -VAR_4;

                } else if (VAR_10 == 0)
                        return VAR_7;

                VAR_9 = FUNC_1(VAR_5, VAR_8, sizeof(VAR_8));
                if (VAR_9 < 0) {

                        if (VAR_4 == VAR_1)
                                continue;

                        if (VAR_4 == VAR_0)
                                return VAR_7;

                        return -VAR_4;
                } else if (VAR_9 == 0)
                        return VAR_7;

                VAR_7 += (int) VAR_9;
        }
}

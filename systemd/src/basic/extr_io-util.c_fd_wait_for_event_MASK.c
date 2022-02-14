
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timespec {int dummy; } ;
struct pollfd {int fd; int events; int revents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*,int,int *,int *) ;
 int * FUNC_1 (struct timespec*,int ) ;

int FUNC_2(int VAR_2, int VAR_3, usec_t VAR_4) {

        struct pollfd VAR_5 = {
                .fd = VAR_2,
                .events = VAR_3,
        };

        struct timespec VAR_6;
        int VAR_7;

        VAR_7 = FUNC_0(&VAR_5, 1, VAR_4 == VAR_0 ? ((void*)0) : FUNC_1(&VAR_6, VAR_4), ((void*)0));
        if (VAR_7 < 0)
                return -VAR_1;
        if (VAR_7 == 0)
                return 0;

        return VAR_5.revents;
}

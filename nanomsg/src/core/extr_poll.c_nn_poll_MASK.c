
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;
struct nn_pollfd {int events; int revents; int fd; } ;
typedef int fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pollfd*) ;
 int VAR_6 ;
 struct pollfd* FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pollfd*) ;
 int FUNC_4 (int ,int ,int ,int*,size_t*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct pollfd*,int,int) ;

int FUNC_7 (struct nn_pollfd *VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    size_t VAR_15;
    struct pollfd *VAR_16;


    VAR_16 = FUNC_1 (sizeof (struct pollfd) * VAR_8 * 2, "pollset");
    FUNC_0 (VAR_16);
    VAR_12 = 0;
    for (VAR_11 = 0; VAR_11 != VAR_8; ++VAR_11) {
        if (VAR_7 [VAR_11].events & VAR_0) {
            VAR_15 = sizeof (VAR_13);
            VAR_10 = FUNC_4 (VAR_7 [VAR_11].fd, VAR_4, VAR_2, &VAR_13, &VAR_15);
            if (FUNC_5 (VAR_10 < 0)) {
                FUNC_3 (VAR_16);
                return -1;
            }
            FUNC_2 (VAR_15 == sizeof (VAR_13));
            VAR_16 [VAR_12].fd = VAR_13;
            VAR_16 [VAR_12].events = VAR_5;
            ++VAR_12;
        }
        if (VAR_7 [VAR_11].events & VAR_1) {
            VAR_15 = sizeof (VAR_13);
            VAR_10 = FUNC_4 (VAR_7 [VAR_11].fd, VAR_4, VAR_3, &VAR_13, &VAR_15);
            if (FUNC_5 (VAR_10 < 0)) {
                FUNC_3 (VAR_16);
                return -1;
            }
            FUNC_2 (VAR_15 == sizeof (VAR_13));
            VAR_16 [VAR_12].fd = VAR_13;
            VAR_16 [VAR_12].events = VAR_5;
            ++VAR_12;
        }
    }


    VAR_10 = FUNC_6 (VAR_16, VAR_12, VAR_9);
    if (FUNC_5 (VAR_10 <= 0)) {
        VAR_14 = VAR_6;
        FUNC_3 (VAR_16);
        VAR_6 = VAR_14;
        return VAR_10;
    }


    VAR_14 = 0;
    VAR_12 = 0;
    for (VAR_11 = 0; VAR_11 != VAR_8; ++VAR_11) {
        VAR_7 [VAR_11].revents = 0;
        if (VAR_7 [VAR_11].events & VAR_0) {
            if (VAR_16 [VAR_12].revents & VAR_5)
                VAR_7 [VAR_11].revents |= VAR_0;
            ++VAR_12;
        }
        if (VAR_7 [VAR_11].events & VAR_1) {
            if (VAR_16 [VAR_12].revents & VAR_5)
                VAR_7 [VAR_11].revents |= VAR_1;
            ++VAR_12;
        }
        if (VAR_7 [VAR_11].revents)
            ++VAR_14;
    }

    FUNC_3 (VAR_16);
    return VAR_14;
}

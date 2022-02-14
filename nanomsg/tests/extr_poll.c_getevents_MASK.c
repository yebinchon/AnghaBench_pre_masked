
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int sndfd ;
typedef int rcvfd ;
typedef int fd_set ;
typedef int SOCKET ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ,char*,size_t*) ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_7 (int) ;

int FUNC_8 (int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;
    fd_set VAR_10;




    int VAR_11;
    int VAR_12;
    int VAR_13;

    size_t VAR_14;
    struct timeval VAR_15;
    int VAR_16;


    VAR_13 = 0;

    FUNC_2 (&VAR_10);

    if (VAR_7 & VAR_0) {
        VAR_14 = sizeof (VAR_11);
        VAR_9 = FUNC_5 (VAR_6, VAR_4, VAR_2, (char*) &VAR_11, &VAR_14);
        FUNC_3 (VAR_9 == 0);
        FUNC_4 (VAR_14 == sizeof (VAR_11));
        FUNC_1 (VAR_11, &VAR_10);

        if (VAR_11 + 1 > VAR_13)
            VAR_13 = VAR_11 + 1;

    }

    if (VAR_7 & VAR_1) {
        VAR_14 = sizeof (VAR_12);
        VAR_9 = FUNC_5 (VAR_6, VAR_4, VAR_3, (char*) &VAR_12, &VAR_14);
        FUNC_3 (VAR_9 == 0);
        FUNC_4 (VAR_14 == sizeof (VAR_12));
        FUNC_1 (VAR_12, &VAR_10);

        if (VAR_12 + 1 > VAR_13)
            VAR_13 = VAR_12 + 1;

    }

    if (VAR_8 >= 0) {
        VAR_15.tv_sec = VAR_8 / 1000;
        VAR_15.tv_usec = (VAR_8 % 1000) * 1000;
    }




    VAR_9 = FUNC_6 (VAR_13, &VAR_10, ((void*)0), ((void*)0), VAR_8 < 0 ? ((void*)0) : &VAR_15);
    FUNC_3 (VAR_9 >= 0);

    VAR_16 = 0;
    if ((VAR_7 & VAR_0) && FUNC_0 (VAR_11, &VAR_10))
        VAR_16 |= VAR_0;
    if ((VAR_7 & VAR_1) && FUNC_0 (VAR_12, &VAR_10))
        VAR_16 |= VAR_1;
    return VAR_16;
}

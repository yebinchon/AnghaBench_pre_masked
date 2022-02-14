
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct sockaddr*,int *) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,int ,int) ;

int FUNC_3(int VAR_7, struct sockaddr *VAR_8, socklen_t *VAR_9, int VAR_10)
{
    int VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_9);
    int VAR_12 = 0;

    if (VAR_11 < 0)
        return VAR_11;

    if (VAR_10 & VAR_5) {
        VAR_12 |= VAR_3;
        VAR_10 &= ~VAR_5;
    }
    if (VAR_10 & VAR_4) {
        VAR_12 |= VAR_2;
        VAR_10 &= ~VAR_4;
    }
    if (VAR_10) {
        VAR_6 = -VAR_0;
        return -1;
    }

    if (FUNC_2(VAR_11, VAR_1, VAR_12) < 0) {
        int VAR_13 = VAR_6;

        FUNC_1(VAR_11);

        VAR_6 = VAR_13;
        return -1;
    }

    return VAR_11;
}

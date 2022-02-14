
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct pollfd {int fd; int events; int revents; } ;
typedef int int32_t ;
typedef int fe_status_t ;
typedef int dvb_priv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int,int ,int*) ;
 scalar_t__ FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(dvb_priv_t *VAR_8, int VAR_9, int VAR_10)
{
    int32_t VAR_11;
    fe_status_t VAR_12;
    struct pollfd VAR_13[1];
    int VAR_14 = 0, VAR_15 = 0;
    time_t VAR_16, VAR_17;

    VAR_13[0].fd = VAR_9;
    VAR_13[0].events = VAR_7;

    FUNC_1(VAR_8, "Getting frontend status\n");
    VAR_16 = VAR_17 = FUNC_5((time_t *) ((void*)0));
    while (!VAR_14) {
        VAR_12 = 0;
        if (FUNC_3(VAR_13, 1, VAR_10 * 1000) > 0) {
            if (VAR_13[0].revents & VAR_7) {
                if (FUNC_2(VAR_9, VAR_4, &VAR_12) >= 0) {
                    if (VAR_12 & VAR_0)
                        VAR_15++;
                }
            }
        }
        FUNC_6(10000);
        VAR_17 = FUNC_5((time_t *) ((void*)0));
        if ((VAR_12 & VAR_6) || (VAR_15 >= 2) || (VAR_17 - VAR_16 >= VAR_10))
            VAR_14 = 1;
    }

    if (VAR_12 & VAR_0) {
        VAR_11 = 0;
        if (FUNC_2(VAR_9, VAR_1, &VAR_11) >= 0)
            FUNC_1(VAR_8, "Bit error rate: %d\n", VAR_11);

        VAR_11 = 0;
        if (FUNC_2(VAR_9, VAR_2, &VAR_11) >= 0)
            FUNC_1(VAR_8, "Signal strength: %d\n", VAR_11);

        VAR_11 = 0;
        if (FUNC_2(VAR_9, VAR_3, &VAR_11) >= 0)
            FUNC_1(VAR_8, "SNR: %d\n", VAR_11);

        VAR_11 = 0;
        if (FUNC_2(VAR_9, VAR_5, &VAR_11) >= 0)
            FUNC_1(VAR_8, "UNC: %d\n", VAR_11);

        FUNC_4(VAR_8, VAR_12);
    } else {
        FUNC_0(VAR_8, "Not able to lock to the signal on the given frequency, "
               "timeout: %d\n", VAR_10);
        return -1;
    }
    return 0;
}

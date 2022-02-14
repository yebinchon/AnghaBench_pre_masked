
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socktype ;
typedef int socklen_t ;
typedef int on ;
typedef int BIO_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int const*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int ,int ,void*,int*) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ,void const*,int) ;

int FUNC_9(int VAR_22, const BIO_ADDR *VAR_23, int VAR_24)
{
    int VAR_25 = 1;
    int VAR_26;
    socklen_t VAR_27 = sizeof(VAR_26);

    if (VAR_22 == -1) {
        FUNC_3(VAR_1, VAR_3);
        return 0;
    }

    if (FUNC_6(VAR_22, VAR_18, VAR_20,
                   (void *)&VAR_26, &VAR_27) != 0
        || VAR_27 != sizeof(VAR_26)) {
        FUNC_4(VAR_12, FUNC_5(),
                       "calling getsockopt()");
        FUNC_3(VAR_1, VAR_2);
        return 0;
    }

    if (!FUNC_2(VAR_22, (VAR_24 & VAR_10) != 0))
        return 0;

    if (VAR_24 & VAR_8) {
        if (FUNC_8(VAR_22, VAR_18, VAR_19,
                       (const void *)&VAR_25, sizeof(VAR_25)) != 0) {
            FUNC_4(VAR_12, FUNC_5(),
                           "calling setsockopt()");
            FUNC_3(VAR_1, VAR_5);
            return 0;
        }
    }

    if (VAR_24 & VAR_9) {
        if (FUNC_8(VAR_22, VAR_14, VAR_21,
                       (const void *)&VAR_25, sizeof(VAR_25)) != 0) {
            FUNC_4(VAR_12, FUNC_5(),
                           "calling setsockopt()");
            FUNC_3(VAR_1, VAR_7);
            return 0;
        }
    }
    if (!FUNC_1(VAR_22, VAR_23, VAR_24))
        return 0;

    if (VAR_26 != VAR_17 && FUNC_7(VAR_22, VAR_16) == -1) {
        FUNC_4(VAR_12, FUNC_5(),
                       "calling listen()");
        FUNC_3(VAR_1, VAR_6);
        return 0;
    }

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on ;
typedef int BIO_ADDR ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int ,int ,void const*,int) ;

int FUNC_9(int VAR_13, const BIO_ADDR *VAR_14, int VAR_15)
{
    const int VAR_16 = 1;

    if (VAR_13 == -1) {
        FUNC_4(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_3(VAR_13, (VAR_15 & VAR_7) != 0))
        return 0;

    if (VAR_15 & VAR_5) {
        if (FUNC_8(VAR_13, VAR_10, VAR_11,
                       (const void *)&VAR_16, sizeof(VAR_16)) != 0) {
            FUNC_5(VAR_8, FUNC_7(),
                           "calling setsockopt()");
            FUNC_4(VAR_0, VAR_3);
            return 0;
        }
    }

    if (VAR_15 & VAR_6) {
        if (FUNC_8(VAR_13, VAR_9, VAR_12,
                       (const void *)&VAR_16, sizeof(VAR_16)) != 0) {
            FUNC_5(VAR_8, FUNC_7(),
                           "calling setsockopt()");
            FUNC_4(VAR_0, VAR_4);
            return 0;
        }
    }

    if (FUNC_6(VAR_13, FUNC_0(VAR_14),
                FUNC_1(VAR_14)) == -1) {
        if (!FUNC_2(-1)) {
            FUNC_5(VAR_8, FUNC_7(),
                           "calling connect()");
            FUNC_4(VAR_0, VAR_1);
        }
        return 0;
    }
    return 1;
}

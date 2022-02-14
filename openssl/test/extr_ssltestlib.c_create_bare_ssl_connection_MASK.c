
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;

int FUNC_7(SSL *VAR_5, SSL *VAR_6, int VAR_7,
                               int VAR_8)
{
    int VAR_9 = -1, VAR_10 = -1, VAR_11, VAR_12 = 0;
    int VAR_13 = 0, VAR_14 = 0;
    int VAR_15 = FUNC_3(VAR_5);

    do {
        VAR_11 = VAR_3;
        while (!VAR_13 && VAR_9 <= 0 && VAR_11 == VAR_3) {
            VAR_9 = FUNC_1(VAR_6);
            if (VAR_9 <= 0)
                VAR_11 = FUNC_2(VAR_6, VAR_9);
        }

        if (!VAR_13 && VAR_9 <= 0 && VAR_11 != VAR_2) {
            FUNC_5("SSL_connect() failed %d, %d", VAR_9, VAR_11);
            VAR_13 = 1;
        }
        if (VAR_7 != VAR_1 && VAR_11 == VAR_7)
            return 0;

        VAR_11 = VAR_3;
        while (!VAR_14 && VAR_10 <= 0 && VAR_11 == VAR_3) {
            VAR_10 = FUNC_0(VAR_5);
            if (VAR_10 <= 0)
                VAR_11 = FUNC_2(VAR_5, VAR_10);
        }

        if (!VAR_14 && VAR_10 <= 0
                && VAR_11 != VAR_2
                && VAR_11 != VAR_4) {
            FUNC_5("SSL_accept() failed %d, %d", VAR_10, VAR_11);
            VAR_14 = 1;
        }
        if (VAR_7 != VAR_1 && VAR_11 == VAR_7)
            return 0;
        if (VAR_13 && VAR_14)
            return 0;
        if (VAR_15 && VAR_8) {
            unsigned char VAR_16[20];


            if (VAR_10 > 0 && VAR_9 <= 0) {
                if (FUNC_4(VAR_5, VAR_16, sizeof(VAR_16)) > 0) {

                    FUNC_5("Unexpected SSL_read() success!");
                    return 0;
                }
            }
            if (VAR_9 > 0 && VAR_10 <= 0) {
                if (FUNC_4(VAR_6, VAR_16, sizeof(VAR_16)) > 0) {

                    FUNC_5("Unexpected SSL_read() success!");
                    return 0;
                }
            }
        }
        if (++VAR_12 == VAR_0) {
            FUNC_5("No progress made");
            return 0;
        }
        if (VAR_15 && VAR_12 <= 50 && (VAR_12 % 10) == 0) {





            FUNC_6(50);
        }
    } while (VAR_9 <=0 || VAR_10 <= 0);

    return 1;
}

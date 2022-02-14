
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned char*,unsigned int) ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,unsigned int) ;
 long long FUNC_5 (unsigned char*,unsigned int) ;
 int FUNC_6 (unsigned char*,unsigned int,long long*,unsigned char*) ;

unsigned char *FUNC_7(unsigned char *VAR_2, unsigned char *VAR_3, unsigned int VAR_4, unsigned int VAR_5) {
    int VAR_6 = 0;
    unsigned char VAR_7 = 0;
    long long VAR_8 = 0;

    while (VAR_2[0] != VAR_1) {
        unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
        unsigned char *VAR_13;

        FUNC_1(VAR_2, VAR_9);
        FUNC_0(VAR_2 + VAR_9, VAR_10, VAR_11, VAR_12);
        VAR_13 = VAR_2 + VAR_9 + VAR_11;

        if (VAR_6 == 0) {

            if (FUNC_2(VAR_10)) {
                if (VAR_12 == VAR_4 && FUNC_4(VAR_13, VAR_3, VAR_4) == 0) {
                    return VAR_2;
                }
            } else {



                if (VAR_7 == 0) {
                    if (!FUNC_6(VAR_3, VAR_4, &VAR_8, &VAR_7)) {



                        VAR_7 = VAR_0;
                    }

                    FUNC_3(VAR_7);
                }




                if (VAR_7 != VAR_0) {
                    long long VAR_14 = FUNC_5(VAR_13, VAR_10);
                    if (VAR_14 == VAR_8) {
                        return VAR_2;
                    }
                }
            }


            VAR_6 = VAR_5;
        } else {

            VAR_6--;
        }


        VAR_2 = VAR_13 + VAR_12;
    }

    return ((void*)0);
}

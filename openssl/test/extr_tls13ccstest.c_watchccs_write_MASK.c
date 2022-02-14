
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,unsigned int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,unsigned int*) ;
 scalar_t__ FUNC_14 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_15 (int ,int ,scalar_t__) ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_16(BIO *VAR_20, const char *VAR_21, int VAR_22)
{
    int VAR_23 = 0;
    BIO *VAR_24 = FUNC_1(VAR_20);
    PACKET VAR_25, VAR_26, VAR_27, VAR_28;
    unsigned int VAR_29, VAR_30, VAR_31, VAR_32;

    if (VAR_22 <= 0)
        return 0;
    if (VAR_24 == ((void*)0))
        return 0;

    FUNC_0(VAR_20);

    if (!FUNC_5(&VAR_25, (const unsigned char *)VAR_21, VAR_22))
        return 0;


    while (FUNC_14(&VAR_25)) {
        if (!FUNC_9(&VAR_25, &VAR_29)
                || !FUNC_13(&VAR_25, &VAR_30)
                || !FUNC_11(&VAR_25, &VAR_26))
            return 0;

        VAR_32 = VAR_5;

        if (VAR_29 == VAR_4) {
            if (!FUNC_9(&VAR_26, &VAR_31)
                    || !FUNC_12(&VAR_26, &VAR_27))
                return 0;
            if (VAR_31 == VAR_0) {
                VAR_13++;





                if (!FUNC_8(&VAR_27, 34)
                        || !FUNC_10(&VAR_27, &VAR_28))
                    return 0;

                if (VAR_13 == 1) {
                    VAR_32 = VAR_6;


                    VAR_15 = FUNC_14(&VAR_28);
                    if (!FUNC_6(&VAR_28, VAR_14, VAR_15))
                        return 0;
                } else {




                    if (FUNC_14(&VAR_28) != VAR_15
                            || (VAR_15 > 0
                                && FUNC_15(VAR_14, FUNC_7(&VAR_28),
                                          VAR_15) != 0))
                        VAR_8 = 1;
                }
            } else if (VAR_31 == VAR_1) {
                VAR_19++;




                if (!FUNC_8(&VAR_27, 34)
                        || !FUNC_10(&VAR_27, &VAR_28))
                    return 0;





                if (FUNC_14(&VAR_28) != VAR_15
                        || (VAR_15 > 0
                            && FUNC_15(VAR_14, FUNC_7(&VAR_28),
                                      VAR_15) != 0))
                    VAR_8 = 1;
            }
        } else if (VAR_29 == VAR_3) {
            if (VAR_20 == VAR_16) {





                if (!VAR_17
                        && VAR_13 == 1
                        && VAR_19 == 1
                        && !VAR_18)
                    VAR_18 = 1;
                else
                    VAR_7 = 1;
            } else if (!VAR_10) {




                if (VAR_19 == 1 && !VAR_11)
                    VAR_11 = 1;
                else if (VAR_19 == 0 && !VAR_12)
                    VAR_12 = 1;
                else
                    VAR_7 = 1;
            } else {
                VAR_7 = 1;
            }
        } else if(VAR_29 == VAR_2) {
            if (VAR_20 == VAR_16)
                VAR_17 = 1;
            else
                VAR_10 = 1;
        }
        if (VAR_30 != VAR_32)
            VAR_9 = 1;
    }

    VAR_23 = FUNC_4(VAR_24, VAR_21, VAR_22);
    if (VAR_23 <= 0 && FUNC_3(VAR_24))
        FUNC_2(VAR_20);

    return VAR_23;
}

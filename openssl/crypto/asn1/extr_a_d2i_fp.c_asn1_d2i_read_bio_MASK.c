
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef int BIO ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned char const**,long*,int*,int*,size_t) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_5 () ;
 unsigned long FUNC_6 (int ) ;
 unsigned long VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

int FUNC_9(BIO *VAR_10, BUF_MEM **VAR_11)
{
    BUF_MEM *VAR_12;
    unsigned char *VAR_13;
    int VAR_14;
    size_t VAR_15 = VAR_6;
    uint32_t VAR_16 = 0;
    size_t VAR_17 = 0;
    size_t VAR_18 = 0;

    const unsigned char *VAR_19;
    long VAR_20;
    int VAR_21, VAR_22, VAR_23;

    VAR_12 = FUNC_5();
    if (VAR_12 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_5);
        return -1;
    }

    FUNC_7();
    for (;;) {
        if (VAR_15 >= (VAR_18 - VAR_17)) {
            VAR_15 -= (VAR_18 - VAR_17);

            if (VAR_18 + VAR_15 < VAR_18 || !FUNC_4(VAR_12, VAR_18 + VAR_15)) {
                FUNC_1(VAR_1, VAR_5);
                goto err;
            }
            VAR_14 = FUNC_2(VAR_10, &(VAR_12->data[VAR_18]), VAR_15);
            if ((VAR_14 < 0) && ((VAR_18 - VAR_17) == 0)) {
                FUNC_1(VAR_1, VAR_3);
                goto err;
            }
            if (VAR_14 > 0) {
                if (VAR_18 + VAR_14 < VAR_18) {
                    FUNC_1(VAR_1, VAR_4);
                    goto err;
                }
                VAR_18 += VAR_14;
            }
        }


        VAR_13 = (unsigned char *)&(VAR_12->data[VAR_17]);
        VAR_19 = VAR_13;
        VAR_21 = FUNC_0(&VAR_19, &VAR_20, &VAR_22, &VAR_23, VAR_18 - VAR_17);
        if (VAR_21 & 0x80) {
            unsigned long VAR_24;

            VAR_24 = FUNC_6(FUNC_8());
            if (VAR_24 != VAR_4)
                goto err;
            else
                FUNC_7();
        }
        VAR_14 = VAR_19 - VAR_13;
        VAR_17 += VAR_14;

        if (VAR_21 & 1) {

            if (VAR_16 == VAR_8) {
                FUNC_1(VAR_1, VAR_2);
                goto err;
            }
            VAR_16++;
            VAR_15 = VAR_6;
        } else if (VAR_16 && (VAR_20 == 0) && (VAR_22 == VAR_9)) {

            VAR_16--;
            if (VAR_16 == 0)
                break;
            else
                VAR_15 = VAR_6;
        } else {

            VAR_15 = VAR_20;
            if (VAR_15 > (VAR_18 - VAR_17)) {
                size_t VAR_25 = VAR_0;

                VAR_15 -= (VAR_18 - VAR_17);
                if (VAR_15 > VAR_7 ||
                    VAR_18 + VAR_15 < VAR_18) {
                    FUNC_1(VAR_1, VAR_4);
                    goto err;
                }
                while (VAR_15 > 0) {






                    size_t VAR_26 = VAR_15 > VAR_25 ? VAR_25 : VAR_15;

                    if (!FUNC_4(VAR_12, VAR_18 + VAR_26)) {
                        FUNC_1(VAR_1, VAR_5);
                        goto err;
                    }
                    VAR_15 -= VAR_26;
                    while (VAR_26 > 0) {
                        VAR_14 = FUNC_2(VAR_10, &(VAR_12->data[VAR_18]), VAR_26);
                        if (VAR_14 <= 0) {
                            FUNC_1(VAR_1,
                                    VAR_3);
                            goto err;
                        }




                        VAR_18 += VAR_14;
                        VAR_26 -= VAR_14;
                    }
                    if (VAR_25 < VAR_7/2)
                        VAR_25 *= 2;
                }
            }
            if (VAR_17 + VAR_20 < VAR_17) {
                FUNC_1(VAR_1, VAR_4);
                goto err;
            }
            VAR_17 += VAR_20;
            if (VAR_16 == 0) {
                break;
            } else
                VAR_15 = VAR_6;
        }
    }

    if (VAR_17 > VAR_7) {
        FUNC_1(VAR_1, VAR_4);
        goto err;
    }

    *VAR_11 = VAR_12;
    return VAR_17;
 err:
    FUNC_3(VAR_12);
    return -1;
}

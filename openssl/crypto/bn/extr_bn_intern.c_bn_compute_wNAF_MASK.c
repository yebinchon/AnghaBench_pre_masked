
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* d; scalar_t__ top; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 size_t FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;

signed char *FUNC_7(const BIGNUM *VAR_3, int VAR_4, size_t *VAR_5)
{
    int VAR_6;
    signed char *VAR_7 = ((void*)0);
    int VAR_8 = 1;
    int VAR_9, VAR_10, VAR_11;
    size_t VAR_12 = 0, VAR_13;

    if (FUNC_2(VAR_3)) {
        VAR_7 = FUNC_6(1);
        if (VAR_7 == ((void*)0)) {
            FUNC_4(VAR_0, VAR_2);
            goto err;
        }
        VAR_7[0] = 0;
        *VAR_5 = 1;
        return VAR_7;
    }

    if (VAR_4 <= 0 || VAR_4 > 7) {

        FUNC_4(VAR_0, VAR_1);
        goto err;
    }
    VAR_9 = 1 << VAR_4;
    VAR_10 = VAR_9 << 1;
    VAR_11 = VAR_10 - 1;

    if (FUNC_1(VAR_3)) {
        VAR_8 = -1;
    }

    if (VAR_3->d == ((void*)0) || VAR_3->top == 0) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    VAR_12 = FUNC_3(VAR_3);
    VAR_7 = FUNC_6(VAR_12 + 1);




    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_2);
        goto err;
    }
    VAR_6 = VAR_3->d[0] & VAR_11;
    VAR_13 = 0;
    while ((VAR_6 != 0) || (VAR_13 + VAR_4 + 1 < VAR_12)) {


        int VAR_14 = 0;



        if (VAR_6 & 1) {


            if (VAR_6 & VAR_9) {
                VAR_14 = VAR_6 - VAR_10;


                if (VAR_13 + VAR_4 + 1 >= VAR_12) {







                    VAR_14 = VAR_6 & (VAR_11 >> 1);
                }

            } else {
                VAR_14 = VAR_6;
            }

            if (VAR_14 <= -VAR_9 || VAR_14 >= VAR_9 || !(VAR_14 & 1)) {
                FUNC_4(VAR_0, VAR_1);
                goto err;
            }

            VAR_6 -= VAR_14;





            if (VAR_6 != 0 && VAR_6 != VAR_10
                && VAR_6 != VAR_9) {
                FUNC_4(VAR_0, VAR_1);
                goto err;
            }
        }

        VAR_7[VAR_13++] = VAR_8 * VAR_14;

        VAR_6 >>= 1;
        VAR_6 += VAR_9 * FUNC_0(VAR_3, VAR_13 + VAR_4);

        if (VAR_6 > VAR_10) {
            FUNC_4(VAR_0, VAR_1);
            goto err;
        }
    }

    if (VAR_13 > VAR_12 + 1) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }
    *VAR_5 = VAR_13;
    return VAR_7;

 err:
    FUNC_5(VAR_7);
    return ((void*)0);
}

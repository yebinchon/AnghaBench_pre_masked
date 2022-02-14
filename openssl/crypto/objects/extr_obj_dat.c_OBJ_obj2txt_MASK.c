
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tbuf ;
struct TYPE_4__ {unsigned char* data; int length; } ;
typedef int BIGNUM ;
typedef TYPE_1__ ASN1_OBJECT ;


 int FUNC_0 (char*,int,char*,unsigned long) ;
 int FUNC_1 (int *,unsigned char) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 int VAR_0 ;
 char* FUNC_9 (int) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char const*,int) ;
 long VAR_1 ;
 int FUNC_14 (char const*) ;

int FUNC_15(char *VAR_2, int VAR_3, const ASN1_OBJECT *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7 = 0, VAR_8, VAR_9, VAR_10, VAR_11;
    BIGNUM *VAR_12;
    unsigned long VAR_13;
    const unsigned char *VAR_14;
    char VAR_15[FUNC_8(VAR_6) + FUNC_8(VAR_13) + 2];


    if (VAR_2 && VAR_3 > 0)
        VAR_2[0] = '\0';

    if ((VAR_4 == ((void*)0)) || (VAR_4->data == ((void*)0)))
        return 0;

    if (!VAR_5 && (VAR_9 = FUNC_11(VAR_4)) != VAR_0) {
        const char *VAR_16;
        VAR_16 = FUNC_9(VAR_9);
        if (VAR_16 == ((void*)0))
            VAR_16 = FUNC_10(VAR_9);
        if (VAR_16) {
            if (VAR_2)
                FUNC_13(VAR_2, VAR_16, VAR_3);
            VAR_7 = FUNC_14(VAR_16);
            return VAR_7;
        }
    }

    VAR_8 = VAR_4->length;
    VAR_14 = VAR_4->data;

    VAR_10 = 1;
    VAR_12 = ((void*)0);

    while (VAR_8 > 0) {
        VAR_13 = 0;
        VAR_11 = 0;
        for (;;) {
            unsigned char VAR_17 = *VAR_14++;
            VAR_8--;
            if ((VAR_8 == 0) && (VAR_17 & 0x80))
                goto err;
            if (VAR_11) {
                if (!FUNC_1(VAR_12, VAR_17 & 0x7f))
                    goto err;
            } else
                VAR_13 |= VAR_17 & 0x7f;
            if (!(VAR_17 & 0x80))
                break;
            if (!VAR_11 && (VAR_13 > (VAR_1 >> 7L))) {
                if (VAR_12 == ((void*)0) && (VAR_12 = FUNC_5()) == ((void*)0))
                    goto err;
                if (!FUNC_6(VAR_12, VAR_13))
                    goto err;
                VAR_11 = 1;
            }
            if (VAR_11) {
                if (!FUNC_4(VAR_12, VAR_12, 7))
                    goto err;
            } else
                VAR_13 <<= 7L;
        }

        if (VAR_10) {
            VAR_10 = 0;
            if (VAR_13 >= 80) {
                VAR_6 = 2;
                if (VAR_11) {
                    if (!FUNC_7(VAR_12, 80))
                        goto err;
                } else
                    VAR_13 -= 80;
            } else {
                VAR_6 = (int)(VAR_13 / 40);
                VAR_13 -= (long)(VAR_6 * 40);
            }
            if (VAR_2 && (VAR_3 > 1)) {
                *VAR_2++ = VAR_6 + '0';
                *VAR_2 = '\0';
                VAR_3--;
            }
            VAR_7++;
        }

        if (VAR_11) {
            char *VAR_18;
            VAR_18 = FUNC_2(VAR_12);
            if (!VAR_18)
                goto err;
            VAR_6 = FUNC_14(VAR_18);
            if (VAR_2) {
                if (VAR_3 > 1) {
                    *VAR_2++ = '.';
                    *VAR_2 = '\0';
                    VAR_3--;
                }
                FUNC_13(VAR_2, VAR_18, VAR_3);
                if (VAR_6 > VAR_3) {
                    VAR_2 += VAR_3;
                    VAR_3 = 0;
                } else {
                    VAR_2 += VAR_6;
                    VAR_3 -= VAR_6;
                }
            }
            VAR_7++;
            VAR_7 += VAR_6;
            FUNC_12(VAR_18);
        } else {
            FUNC_0(VAR_15, sizeof(VAR_15), ".%lu", VAR_13);
            VAR_6 = FUNC_14(VAR_15);
            if (VAR_2 && (VAR_3 > 0)) {
                FUNC_13(VAR_2, VAR_15, VAR_3);
                if (VAR_6 > VAR_3) {
                    VAR_2 += VAR_3;
                    VAR_3 = 0;
                } else {
                    VAR_2 += VAR_6;
                    VAR_3 -= VAR_6;
                }
            }
            VAR_7 += VAR_6;
            VAR_13 = 0;
        }
    }

    FUNC_3(VAR_12);
    return VAR_7;

 err:
    FUNC_3(VAR_12);
    return -1;
}

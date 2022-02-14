
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned char* data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned int) ;
 int FUNC_5 (char) ;

int FUNC_6(BIO *VAR_5, ASN1_STRING *VAR_6, char *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    unsigned char *VAR_16 = ((void*)0), *VAR_17;
    unsigned char *VAR_18;
    int VAR_19 = 0, VAR_20 = 0, VAR_21 = 1;

    VAR_15 = FUNC_1(VAR_5, VAR_7, VAR_8);
    for (;;) {
        if (VAR_15 < 1) {
            if (VAR_21)
                break;
            else
                goto err;
        }
        VAR_21 = 0;

        VAR_9 = VAR_15;
        if (VAR_7[VAR_9 - 1] == '\n')
            VAR_7[--VAR_9] = '\0';
        if (VAR_9 == 0)
            goto err;
        if (VAR_7[VAR_9 - 1] == '\r')
            VAR_7[--VAR_9] = '\0';
        if (VAR_9 == 0)
            goto err;
        VAR_14 = (VAR_7[VAR_9 - 1] == '\\');

        for (VAR_10 = VAR_9 - 1; VAR_10 > 0; VAR_10--) {
            if (!FUNC_5(VAR_7[VAR_10])) {
                VAR_9 = VAR_10;
                break;
            }
        }
        VAR_7[VAR_9] = '\0';



        if (VAR_9 < 2)
            goto err;

        VAR_18 = (unsigned char *)VAR_7;

        VAR_11 = 0;
        VAR_9 -= VAR_14;
        if (VAR_9 % 2 != 0) {
            FUNC_0(VAR_0, VAR_2);
            FUNC_2(VAR_16);
            return 0;
        }
        VAR_9 /= 2;
        if (VAR_19 + VAR_9 > VAR_20) {
            VAR_17 = FUNC_4(VAR_16, (unsigned int)VAR_19 + VAR_9 * 2);
            if (VAR_17 == ((void*)0)) {
                FUNC_0(VAR_0, VAR_4);
                FUNC_2(VAR_16);
                return 0;
            }
            VAR_16 = VAR_17;
            VAR_20 = VAR_19 + VAR_9 * 2;
        }
        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_11 += 2) {
            for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
                VAR_12 = FUNC_3(VAR_18[VAR_11 + VAR_13]);
                if (VAR_12 < 0) {
                    FUNC_0(VAR_0,
                            VAR_1);
                    FUNC_2(VAR_16);
                    return 0;
                }
                VAR_16[VAR_19 + VAR_10] <<= 4;
                VAR_16[VAR_19 + VAR_10] |= VAR_12;
            }
        }
        VAR_19 += VAR_9;
        if (VAR_14)
            VAR_15 = FUNC_1(VAR_5, VAR_7, VAR_8);
        else
            break;
    }
    VAR_6->length = VAR_19;
    VAR_6->data = VAR_16;
    return 1;

 err:
    FUNC_0(VAR_0, VAR_3);
    FUNC_2(VAR_16);
    return 0;
}

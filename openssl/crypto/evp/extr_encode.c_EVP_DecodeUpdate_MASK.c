
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; unsigned char* enc_data; int flags; } ;
typedef TYPE_1__ EVP_ENCODE_CTX ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char const*) ;
 unsigned char* VAR_3 ;
 int FUNC_3 (TYPE_1__*,unsigned char*,unsigned char*,int) ;
 unsigned char* VAR_4 ;

int FUNC_4(EVP_ENCODE_CTX *VAR_5, unsigned char *VAR_6, int *VAR_7,
                     const unsigned char *VAR_8, int VAR_9)
{
    int VAR_10 = 0, VAR_11 = 0, VAR_12 = -1, VAR_13 = 0, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    unsigned char *VAR_19;
    const unsigned char *VAR_20;

    VAR_17 = VAR_5->num;
    VAR_19 = VAR_5->enc_data;

    if (VAR_17 > 0 && VAR_19[VAR_17 - 1] == '=') {
        VAR_11++;
        if (VAR_17 > 1 && VAR_19[VAR_17 - 2] == '=')
            VAR_11++;
    }


    if (VAR_9 == 0) {
        VAR_12 = 0;
        goto end;
    }

    if ((VAR_5->flags & VAR_2) != 0)
        VAR_20 = VAR_4;
    else
        VAR_20 = VAR_3;

    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
        VAR_16 = *(VAR_8++);
        VAR_15 = FUNC_2(VAR_16, VAR_20);
        if (VAR_15 == VAR_1) {
            VAR_12 = -1;
            goto end;
        }

        if (VAR_16 == '=') {
            VAR_11++;
        } else if (VAR_11 > 0 && FUNC_0(VAR_15)) {

            VAR_12 = -1;
            goto end;
        }

        if (VAR_11 > 2) {
            VAR_12 = -1;
            goto end;
        }

        if (VAR_15 == VAR_0) {
            VAR_10 = 1;
            goto tail;
        }


        if (FUNC_0(VAR_15)) {
            if (VAR_17 >= 64) {





                VAR_12 = -1;
                goto end;
            }
            FUNC_1(VAR_17 < (int)sizeof(VAR_5->enc_data));
            VAR_19[VAR_17++] = VAR_16;
        }

        if (VAR_17 == 64) {
            VAR_18 = FUNC_3(VAR_5, VAR_6, VAR_19, VAR_17);
            VAR_17 = 0;
            if (VAR_18 < 0 || VAR_11 > VAR_18) {
                VAR_12 = -1;
                goto end;
            }
            VAR_13 += VAR_18 - VAR_11;
            VAR_6 += VAR_18 - VAR_11;
        }
    }






tail:
    if (VAR_17 > 0) {
        if ((VAR_17 & 3) == 0) {
            VAR_18 = FUNC_3(VAR_5, VAR_6, VAR_19, VAR_17);
            VAR_17 = 0;
            if (VAR_18 < 0 || VAR_11 > VAR_18) {
                VAR_12 = -1;
                goto end;
            }
            VAR_13 += (VAR_18 - VAR_11);
        } else if (VAR_10) {

            VAR_12 = -1;
            goto end;
        }
    }

    VAR_12 = VAR_10 || (VAR_17 == 0 && VAR_11) ? 0 : 1;
end:

    *VAR_7 = VAR_13;
    VAR_5->num = VAR_17;
    return VAR_12;
}

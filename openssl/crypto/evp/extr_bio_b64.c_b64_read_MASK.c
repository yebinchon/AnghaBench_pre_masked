
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encode; int buf_len; int buf_off; size_t tmp_len; int cont; unsigned char* tmp; int tmp_nl; int * buf; int base64; scalar_t__ start; } ;
typedef TYPE_1__ BIO_B64_CTX ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned char*,int*,unsigned char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int *,int) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static int FUNC_13(BIO *VAR_3, char *VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
    BIO_B64_CTX *VAR_15;
    unsigned char *VAR_16, *VAR_17;
    BIO *VAR_18;

    if (VAR_4 == ((void*)0))
        return 0;
    VAR_15 = (BIO_B64_CTX *)FUNC_2(VAR_3);

    VAR_18 = FUNC_4(VAR_3);
    if ((VAR_15 == ((void*)0)) || (VAR_18 == ((void*)0)))
        return 0;

    FUNC_0(VAR_3);

    if (VAR_15->encode != VAR_1) {
        VAR_15->encode = VAR_1;
        VAR_15->buf_len = 0;
        VAR_15->buf_off = 0;
        VAR_15->tmp_len = 0;
        FUNC_8(VAR_15->base64);
    }


    if (VAR_15->buf_len > 0) {
        FUNC_10(VAR_15->buf_len >= VAR_15->buf_off);
        VAR_7 = VAR_15->buf_len - VAR_15->buf_off;
        if (VAR_7 > VAR_5)
            VAR_7 = VAR_5;
        FUNC_10(VAR_15->buf_off + VAR_7 < (int)sizeof(VAR_15->buf));
        FUNC_11(VAR_4, &(VAR_15->buf[VAR_15->buf_off]), VAR_7);
        VAR_6 = VAR_7;
        VAR_4 += VAR_7;
        VAR_5 -= VAR_7;
        VAR_15->buf_off += VAR_7;
        if (VAR_15->buf_len == VAR_15->buf_off) {
            VAR_15->buf_len = 0;
            VAR_15->buf_off = 0;
        }
    }






    VAR_14 = 0;
    while (VAR_5 > 0) {
        if (VAR_15->cont <= 0)
            break;

        VAR_7 = FUNC_5(VAR_18, &(VAR_15->tmp[VAR_15->tmp_len]),
                     VAR_0 - VAR_15->tmp_len);

        if (VAR_7 <= 0) {
            VAR_14 = VAR_7;


            if (!FUNC_6(VAR_18)) {
                VAR_15->cont = VAR_7;

                if (VAR_15->tmp_len == 0)
                    break;

                else
                    VAR_7 = 0;
            }

            else
                break;
        }
        VAR_7 += VAR_15->tmp_len;
        VAR_15->tmp_len = VAR_7;





        if (VAR_15->start && (FUNC_3(VAR_3) & VAR_2)) {

            VAR_15->tmp_len = 0;
        } else if (VAR_15->start) {
            VAR_17 = VAR_16 = (unsigned char *)VAR_15->tmp;
            VAR_13 = 0;
            for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
                if (*(VAR_17++) != '\n')
                    continue;






                if (VAR_15->tmp_nl) {
                    VAR_16 = VAR_17;
                    VAR_15->tmp_nl = 0;
                    continue;
                }

                VAR_10 = FUNC_9(VAR_15->base64,
                                     (unsigned char *)VAR_15->buf,
                                     &VAR_13, VAR_16, VAR_17 - VAR_16);
                if ((VAR_10 <= 0) && (VAR_13 == 0) && (VAR_15->start))
                    FUNC_8(VAR_15->base64);
                else {
                    if (VAR_16 != (unsigned char *)
                        &(VAR_15->tmp[0])) {
                        VAR_7 -= (VAR_16 - (unsigned char *)
                              &(VAR_15->tmp[0]));
                        for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
                            VAR_15->tmp[VAR_11] = VAR_16[VAR_11];
                    }
                    FUNC_8(VAR_15->base64);
                    VAR_15->start = 0;
                    break;
                }
                VAR_16 = VAR_17;
            }


            if ((VAR_9 == VAR_7) && (VAR_13 == 0)) {




                if (VAR_16 == (unsigned char *)&(VAR_15->tmp[0])) {

                    if (VAR_7 == VAR_0) {
                        VAR_15->tmp_nl = 1;
                        VAR_15->tmp_len = 0;
                    }
                } else if (VAR_16 != VAR_17) {
                    VAR_12 = VAR_17 - VAR_16;
                    for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
                        VAR_15->tmp[VAR_8] = VAR_16[VAR_8];
                    VAR_15->tmp_len = VAR_12;
                }

                continue;
            } else {
                VAR_15->tmp_len = 0;
            }
        } else if ((VAR_7 < VAR_0) && (VAR_15->cont > 0)) {




            continue;
        }

        if (FUNC_3(VAR_3) & VAR_2) {
            int VAR_19, VAR_20;

            VAR_20 = VAR_7 & ~3;
            VAR_19 = FUNC_7((unsigned char *)VAR_15->buf,
                                (unsigned char *)VAR_15->tmp, VAR_20);
            if (VAR_20 > 2) {
                if (VAR_15->tmp[VAR_20 - 1] == '=') {
                    VAR_19--;
                    if (VAR_15->tmp[VAR_20 - 2] == '=')
                        VAR_19--;
                }
            }



            if (VAR_20 != VAR_7) {
                FUNC_12(VAR_15->tmp, &VAR_15->tmp[VAR_20], VAR_7 - VAR_20);
                VAR_15->tmp_len = VAR_7 - VAR_20;
            }
            VAR_15->buf_len = 0;
            if (VAR_19 > 0) {
                VAR_15->buf_len = VAR_19;
            }
            VAR_7 = VAR_19;
        } else {
            VAR_7 = FUNC_9(VAR_15->base64,
                                 (unsigned char *)VAR_15->buf, &VAR_15->buf_len,
                                 (unsigned char *)VAR_15->tmp, VAR_7);
            VAR_15->tmp_len = 0;
        }






        VAR_15->cont = VAR_7;

        VAR_15->buf_off = 0;
        if (VAR_7 < 0) {
            VAR_14 = 0;
            VAR_15->buf_len = 0;
            break;
        }

        if (VAR_15->buf_len <= VAR_5)
            VAR_7 = VAR_15->buf_len;
        else
            VAR_7 = VAR_5;

        FUNC_11(VAR_4, VAR_15->buf, VAR_7);
        VAR_6 += VAR_7;
        VAR_15->buf_off = VAR_7;
        if (VAR_15->buf_off == VAR_15->buf_len) {
            VAR_15->buf_len = 0;
            VAR_15->buf_off = 0;
        }
        VAR_5 -= VAR_7;
        VAR_4 += VAR_7;
    }

    FUNC_1(VAR_3);
    return ((VAR_6 == 0) ? VAR_14 : VAR_6);
}

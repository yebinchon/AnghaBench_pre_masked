
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_len; int buf_off; int buf_len_save; size_t buf_off_save; int sigio; scalar_t__ cont; int * buf; scalar_t__ blockout; } ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(BIO *VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4 = 0, VAR_5, VAR_6;
    BIO_OK_CTX *VAR_7;
    BIO *VAR_8;

    if (VAR_2 == ((void*)0))
        return 0;

    VAR_7 = FUNC_2(VAR_1);
    VAR_8 = FUNC_4(VAR_1);

    if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)) || (FUNC_3(VAR_1) == 0))
        return 0;

    while (VAR_3 > 0) {


        if (VAR_7->blockout) {
            VAR_5 = VAR_7->buf_len - VAR_7->buf_off;
            if (VAR_5 > VAR_3)
                VAR_5 = VAR_3;
            FUNC_7(VAR_2, &(VAR_7->buf[VAR_7->buf_off]), VAR_5);
            VAR_4 += VAR_5;
            VAR_2 += VAR_5;
            VAR_3 -= VAR_5;
            VAR_7->buf_off += VAR_5;


            if (VAR_7->buf_len == VAR_7->buf_off) {
                VAR_7->buf_off = 0;




                if (VAR_7->buf_len_save - VAR_7->buf_off_save > 0) {
                    VAR_7->buf_len = VAR_7->buf_len_save - VAR_7->buf_off_save;
                    FUNC_8(VAR_7->buf, &(VAR_7->buf[VAR_7->buf_off_save]),
                            VAR_7->buf_len);
                } else {
                    VAR_7->buf_len = 0;
                }
                VAR_7->blockout = 0;
            }
        }


        if (VAR_3 == 0)
            break;


        VAR_6 = VAR_0 - VAR_7->buf_len;
        VAR_5 = FUNC_5(VAR_8, &(VAR_7->buf[VAR_7->buf_len]), VAR_6);

        if (VAR_5 <= 0)
            break;

        VAR_7->buf_len += VAR_5;


        if (VAR_7->sigio == 1) {
            if (!FUNC_9(VAR_1)) {
                FUNC_0(VAR_1);
                return 0;
            }
        }


        if (VAR_7->sigio == 0) {
            if (!FUNC_6(VAR_1)) {
                FUNC_0(VAR_1);
                return 0;
            }
        }


        if (VAR_7->cont <= 0)
            break;

    }

    FUNC_0(VAR_1);
    FUNC_1(VAR_1);
    return VAR_4;
}

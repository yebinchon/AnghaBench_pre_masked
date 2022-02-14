
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_len; int buf_off; int * buf; scalar_t__ blockout; scalar_t__ cont; scalar_t__ sigio; } ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(BIO *VAR_2, const char *VAR_3, int VAR_4)
{
    int VAR_5 = 0, VAR_6, VAR_7;
    BIO_OK_CTX *VAR_8;
    BIO *VAR_9;

    if (VAR_4 <= 0)
        return VAR_4;

    VAR_8 = FUNC_2(VAR_2);
    VAR_9 = FUNC_4(VAR_2);
    VAR_5 = VAR_4;

    if ((VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0)) || (FUNC_3(VAR_2) == 0))
        return 0;

    if (VAR_8->sigio && !FUNC_9(VAR_2))
        return 0;

    do {
        FUNC_0(VAR_2);
        VAR_6 = VAR_8->buf_len - VAR_8->buf_off;
        while (VAR_8->blockout && VAR_6 > 0) {
            VAR_7 = FUNC_6(VAR_9, &(VAR_8->buf[VAR_8->buf_off]), VAR_6);
            if (VAR_7 <= 0) {
                FUNC_1(VAR_2);
                if (!FUNC_5(VAR_2))
                    VAR_8->cont = 0;
                return VAR_7;
            }
            VAR_8->buf_off += VAR_7;
            VAR_6 -= VAR_7;
        }


        VAR_8->blockout = 0;
        if (VAR_8->buf_len == VAR_8->buf_off) {
            VAR_8->buf_len = VAR_0;
            VAR_8->buf_off = 0;
        }

        if ((VAR_3 == ((void*)0)) || (VAR_4 <= 0))
            return 0;

        VAR_6 = (VAR_4 + VAR_8->buf_len > VAR_1 + VAR_0) ?
            (int)(VAR_1 + VAR_0 - VAR_8->buf_len) : VAR_4;

        FUNC_8(&VAR_8->buf[VAR_8->buf_len], VAR_3, VAR_6);
        VAR_8->buf_len += VAR_6;
        VAR_4 -= VAR_6;
        VAR_3 += VAR_6;

        if (VAR_8->buf_len >= VAR_1 + VAR_0) {
            if (!FUNC_7(VAR_2)) {
                FUNC_0(VAR_2);
                return 0;
            }
        }
    } while (VAR_4 > 0);

    FUNC_0(VAR_2);
    FUNC_1(VAR_2);
    return VAR_5;
}

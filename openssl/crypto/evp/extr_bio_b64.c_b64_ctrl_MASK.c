
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cont; int start; long buf_len; long buf_off; scalar_t__ buf; int base64; int encode; int tmp_len; scalar_t__ tmp; } ;
typedef TYPE_1__ BIO_B64_CTX ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *,int,long,void*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 long FUNC_7 (unsigned char*,unsigned char*,int ) ;
 int FUNC_8 (int ,unsigned char*,long*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int *,int ) ;

__attribute__((used)) static long FUNC_11(BIO *VAR_2, int VAR_3, long VAR_4, void *VAR_5)
{
    BIO_B64_CTX *VAR_6;
    long VAR_7 = 1;
    int VAR_8;
    BIO *VAR_9;

    VAR_6 = (BIO_B64_CTX *)FUNC_3(VAR_2);
    VAR_9 = FUNC_5(VAR_2);
    if ((VAR_6 == ((void*)0)) || (VAR_9 == ((void*)0)))
        return 0;

    switch (VAR_3) {
    case 131:
        VAR_6->cont = 1;
        VAR_6->start = 1;
        VAR_6->encode = VAR_0;
        VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        break;
    case 136:
        if (VAR_6->cont <= 0)
            VAR_7 = 1;
        else
            VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        break;
    case 129:
        FUNC_9(VAR_6->buf_len >= VAR_6->buf_off);
        VAR_7 = VAR_6->buf_len - VAR_6->buf_off;
        if ((VAR_7 == 0) && (VAR_6->encode != VAR_0)
            && (FUNC_6(VAR_6->base64) != 0))
            VAR_7 = 1;
        else if (VAR_7 <= 0)
            VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        break;
    case 132:
        FUNC_9(VAR_6->buf_len >= VAR_6->buf_off);
        VAR_7 = VAR_6->buf_len - VAR_6->buf_off;
        if (VAR_7 <= 0)
            VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        break;
    case 135:

 again:
        while (VAR_6->buf_len != VAR_6->buf_off) {
            VAR_8 = FUNC_10(VAR_2, ((void*)0), 0);
            if (VAR_8 < 0)
                return VAR_8;
        }
        if (FUNC_4(VAR_2) & VAR_1) {
            if (VAR_6->tmp_len != 0) {
                VAR_6->buf_len = FUNC_7((unsigned char *)VAR_6->buf,
                                               (unsigned char *)VAR_6->tmp,
                                               VAR_6->tmp_len);
                VAR_6->buf_off = 0;
                VAR_6->tmp_len = 0;
                goto again;
            }
        } else if (VAR_6->encode != VAR_0
                   && FUNC_6(VAR_6->base64) != 0) {
            VAR_6->buf_off = 0;
            FUNC_8(VAR_6->base64,
                            (unsigned char *)VAR_6->buf, &(VAR_6->buf_len));

            goto again;
        }

        VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        break;

    case 128:
        FUNC_0(VAR_2);
        VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        FUNC_1(VAR_2);
        break;

    case 137:
        break;
    case 133:
    case 134:
    case 130:
    default:
        VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);
        break;
    }
    return VAR_7;
}

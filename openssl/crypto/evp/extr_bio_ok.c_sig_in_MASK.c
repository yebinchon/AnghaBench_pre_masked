
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t buf_len; size_t buf_off; scalar_t__ cont; int * buf; scalar_t__ sigio; int * md; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int *) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int const*) ;
 int VAR_1 ;
 int FUNC_8 (void*,int) ;
 scalar_t__ FUNC_9 (int *,unsigned char*,int) ;
 int FUNC_10 (void*,int *,int) ;
 int FUNC_11 (int *,int *,size_t) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(BIO *VAR_2)
{
    BIO_OK_CTX *VAR_3;
    EVP_MD_CTX *VAR_4;
    unsigned char VAR_5[VAR_0];
    int VAR_6 = 0;
    const EVP_MD *VAR_7;
    int VAR_8;
    void *VAR_9;

    VAR_3 = FUNC_1(VAR_2);
    VAR_4 = VAR_3->md;
    VAR_7 = FUNC_5(VAR_4);
    VAR_8 = FUNC_7(VAR_7);
    VAR_9 = FUNC_6(VAR_4);

    if ((int)(VAR_3->buf_len - VAR_3->buf_off) < 2 * VAR_8)
        return 1;

    if (!FUNC_3(VAR_4, VAR_7, ((void*)0)))
        goto berr;
    FUNC_10(VAR_9, &(VAR_3->buf[VAR_3->buf_off]), VAR_8);
    FUNC_8(VAR_9, VAR_8);
    VAR_3->buf_off += VAR_8;

    if (!FUNC_4(VAR_4, VAR_1, FUNC_12(VAR_1)))
        goto berr;
    if (!FUNC_2(VAR_4, VAR_5, ((void*)0)))
        goto berr;
    VAR_6 = FUNC_9(&(VAR_3->buf[VAR_3->buf_off]), VAR_5, VAR_8) == 0;
    VAR_3->buf_off += VAR_8;
    if (VAR_6 == 1) {
        VAR_3->sigio = 0;
        if (VAR_3->buf_len != VAR_3->buf_off) {
            FUNC_11(VAR_3->buf, &(VAR_3->buf[VAR_3->buf_off]),
                    VAR_3->buf_len - VAR_3->buf_off);
        }
        VAR_3->buf_len -= VAR_3->buf_off;
        VAR_3->buf_off = 0;
    } else {
        VAR_3->cont = 0;
    }
    return 1;
 berr:
    FUNC_0(VAR_2);
    return 0;
}

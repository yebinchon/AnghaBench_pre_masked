
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t buf_len; unsigned char* buf; int blockout; int * md; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef TYPE_1__ BIO_OK_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int *) ;
 int FUNC_3 (int *,unsigned char*,unsigned long) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_6(BIO *VAR_1)
{
    BIO_OK_CTX *VAR_2;
    EVP_MD_CTX *VAR_3;
    unsigned long VAR_4;
    const EVP_MD *VAR_5;
    int VAR_6;

    VAR_2 = FUNC_1(VAR_1);
    VAR_3 = VAR_2->md;
    VAR_5 = FUNC_4(VAR_3);
    VAR_6 = FUNC_5(VAR_5);

    VAR_4 = VAR_2->buf_len - VAR_0;
    VAR_2->buf[0] = (unsigned char)(VAR_4 >> 24);
    VAR_2->buf[1] = (unsigned char)(VAR_4 >> 16);
    VAR_2->buf[2] = (unsigned char)(VAR_4 >> 8);
    VAR_2->buf[3] = (unsigned char)(VAR_4);
    if (!FUNC_3(VAR_3,
                          (unsigned char *)&(VAR_2->buf[VAR_0]), VAR_4))
        goto berr;
    if (!FUNC_2(VAR_3, &(VAR_2->buf[VAR_2->buf_len]), ((void*)0)))
        goto berr;
    VAR_2->buf_len += VAR_6;
    VAR_2->blockout = 1;
    return 1;
 berr:
    FUNC_0(VAR_1);
    return 0;
}

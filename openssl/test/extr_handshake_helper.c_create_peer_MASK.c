
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* ssl; unsigned char* write_buf; unsigned char* read_buf; int write_buf_len; int read_buf_len; } ;
typedef int SSL_CTX ;
typedef unsigned char SSL ;
typedef TYPE_1__ PEER ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int const) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static int FUNC_5(PEER *VAR_0, SSL_CTX *VAR_1)
{
    static const int VAR_2 = 64 * 1024;
    SSL *VAR_3 = ((void*)0);
    unsigned char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

    if (!FUNC_4(VAR_3 = FUNC_3(VAR_1))
            || !FUNC_4(VAR_5 = FUNC_1(VAR_2))
            || !FUNC_4(VAR_4 = FUNC_1(VAR_2)))
        goto err;

    VAR_0->ssl = VAR_3;
    VAR_0->write_buf = VAR_5;
    VAR_0->read_buf = VAR_4;
    VAR_0->write_buf_len = VAR_0->read_buf_len = VAR_2;
    return 1;
err:
    FUNC_2(VAR_3);
    FUNC_0(VAR_5);
    FUNC_0(VAR_4);
    return 0;
}

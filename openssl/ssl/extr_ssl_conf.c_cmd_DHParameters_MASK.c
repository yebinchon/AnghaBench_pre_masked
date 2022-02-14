
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ssl; scalar_t__ ctx; } ;
typedef TYPE_1__ SSL_CONF_CTX ;
typedef int DH ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_8(SSL_CONF_CTX *VAR_0, const char *VAR_1)
{
    int VAR_2 = 0;
    DH *VAR_3 = ((void*)0);
    BIO *VAR_4 = ((void*)0);
    if (VAR_0->ctx || VAR_0->ssl) {
        VAR_4 = FUNC_1(FUNC_3());
        if (VAR_4 == ((void*)0))
            goto end;
        if (FUNC_2(VAR_4, VAR_1) <= 0)
            goto end;
        VAR_3 = FUNC_5(VAR_4, ((void*)0), ((void*)0), ((void*)0));
        if (VAR_3 == ((void*)0))
            goto end;
    } else
        return 1;
    if (VAR_0->ctx)
        VAR_2 = FUNC_6(VAR_0->ctx, VAR_3);
    if (VAR_0->ssl)
        VAR_2 = FUNC_7(VAR_0->ssl, VAR_3);
 end:
    FUNC_4(VAR_3);
    FUNC_0(VAR_4);
    return VAR_2 > 0;
}

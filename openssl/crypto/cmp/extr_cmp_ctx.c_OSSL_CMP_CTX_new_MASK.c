
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int failInfoCode; int msgtimeout; int pbm_slen; int pbm_itercnt; int revocationReason; int popoMethod; void* digest; int pbm_mac; void* pbm_owf; int * untrusted_certs; void* proxyPort; void* serverPort; int log_verbosity; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 () ;

OSSL_CMP_CTX *FUNC_3(void)
{
    OSSL_CMP_CTX *VAR_6 = FUNC_0(sizeof(*VAR_6));

    if (VAR_6 == ((void*)0))
        return ((void*)0);

    VAR_6->log_verbosity = VAR_4;

    VAR_6->status = -1;
    VAR_6->failInfoCode = -1;

    VAR_6->serverPort = VAR_3;
    VAR_6->proxyPort = VAR_3;
    VAR_6->msgtimeout = 2 * 60;

    if ((VAR_6->untrusted_certs = FUNC_2()) == ((void*)0))
        goto err;

    VAR_6->pbm_slen = 16;
    VAR_6->pbm_owf = VAR_2;
    VAR_6->pbm_itercnt = 500;
    VAR_6->pbm_mac = VAR_1;

    VAR_6->digest = VAR_2;
    VAR_6->popoMethod = VAR_5;
    VAR_6->revocationReason = VAR_0;


    return VAR_6;

 err:
    FUNC_1(VAR_6);
    return ((void*)0);
}

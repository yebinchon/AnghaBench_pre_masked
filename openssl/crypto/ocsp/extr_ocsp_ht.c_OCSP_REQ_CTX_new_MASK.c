
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iobuflen; int * mem; int * iobuf; int * io; int max_resp_len; int state; } ;
typedef TYPE_1__ OCSP_REQ_CTX ;
typedef int BIO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;

OCSP_REQ_CTX *FUNC_5(BIO *VAR_3, int VAR_4)
{
    OCSP_REQ_CTX *VAR_5 = FUNC_4(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0))
        return ((void*)0);
    VAR_5->state = VAR_2;
    VAR_5->max_resp_len = VAR_1;
    VAR_5->mem = FUNC_0(FUNC_1());
    VAR_5->io = VAR_3;
    if (VAR_4 > 0)
        VAR_5->iobuflen = VAR_4;
    else
        VAR_5->iobuflen = VAR_0;
    VAR_5->iobuf = FUNC_3(VAR_5->iobuflen);
    if (VAR_5->iobuf == ((void*)0) || VAR_5->mem == ((void*)0)) {
        FUNC_2(VAR_5);
        return ((void*)0);
    }
    return VAR_5;
}

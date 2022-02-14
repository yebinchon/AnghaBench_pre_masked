
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * hCertStore; int pCrlInfo; int cbCrlEncoded; int pbCrlEncoded; int dwCertEncodingType; } ;
struct TYPE_5__ {int base; TYPE_2__ ctx; } ;
typedef TYPE_1__ crl_t ;
typedef int context_t ;
typedef int WINECRYPT_CERTSTORE ;
typedef int DWORD ;
typedef int CRL_CONTEXT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,int *,int *) ;
 scalar_t__ FUNC_3 (int,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static context_t *FUNC_7(context_t *VAR_3, WINECRYPT_CERTSTORE *VAR_4, BOOL VAR_5)
{
    crl_t *VAR_6;

    if(VAR_5) {
        VAR_6 = (crl_t*)FUNC_3(sizeof(CRL_CONTEXT), VAR_3, VAR_4);
        if(!VAR_6)
            return ((void*)0);
    }else {
        const crl_t *VAR_7 = (const crl_t*)VAR_3;
        DWORD VAR_8 = 0;
        BOOL VAR_9;

        VAR_6 = (crl_t*)FUNC_2(sizeof(CRL_CONTEXT), &VAR_2, VAR_4);
        if(!VAR_6)
            return ((void*)0);

        FUNC_1(&VAR_6->ctx, &VAR_7->ctx);

        VAR_6->ctx.dwCertEncodingType = VAR_7->ctx.dwCertEncodingType;
        VAR_6->ctx.pbCrlEncoded = FUNC_5(VAR_7->ctx.cbCrlEncoded);
        FUNC_6(VAR_6->ctx.pbCrlEncoded, VAR_7->ctx.pbCrlEncoded, VAR_7->ctx.cbCrlEncoded);
        VAR_6->ctx.cbCrlEncoded = VAR_7->ctx.cbCrlEncoded;


        VAR_9 = FUNC_4(VAR_6->ctx.dwCertEncodingType, VAR_1,
         VAR_6->ctx.pbCrlEncoded, VAR_6->ctx.cbCrlEncoded, VAR_0, ((void*)0),
         &VAR_6->ctx.pCrlInfo, &VAR_8);
        if(!VAR_9) {
            FUNC_0(&VAR_6->ctx);
            return ((void*)0);
        }
    }

    VAR_6->ctx.hCertStore = VAR_4;
    return &VAR_6->base;
}

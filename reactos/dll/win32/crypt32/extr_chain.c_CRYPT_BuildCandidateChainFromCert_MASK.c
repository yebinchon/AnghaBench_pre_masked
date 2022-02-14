
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int cbSize; int cChain; scalar_t__ dwRevocationFreshnessTime; void* fHasRevocationFreshnessTime; int * rgpLowerQualityChainContext; scalar_t__ cLowerQualityChainContext; TYPE_2__** rgpChain; int TrustStatus; } ;
struct TYPE_13__ {int ref; TYPE_1__ context; int world; } ;
struct TYPE_12__ {int hWorld; } ;
struct TYPE_11__ {int TrustStatus; } ;
typedef TYPE_2__* PCERT_SIMPLE_CHAIN ;
typedef int PCCERT_CONTEXT ;
typedef int LPFILETIME ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_3__ CertificateChainEngine ;
typedef TYPE_4__ CertificateChain ;
typedef int CERT_CHAIN_CONTEXT ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (TYPE_3__*,int ,int ,int ,int ,TYPE_2__**) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 void* FUNC_4 (int) ;
 void* VAR_2 ;

__attribute__((used)) static BOOL FUNC_5(CertificateChainEngine *VAR_3,
 PCCERT_CONTEXT VAR_4, LPFILETIME VAR_5, HCERTSTORE VAR_6, DWORD VAR_7,
 CertificateChain **VAR_8)
{
    PCERT_SIMPLE_CHAIN VAR_9 = ((void*)0);
    HCERTSTORE VAR_10;
    BOOL VAR_11;

    VAR_10 = FUNC_3(VAR_1, 0, 0,
     VAR_0, ((void*)0));
    FUNC_2(VAR_10, VAR_3->hWorld, 0, 0);
    if (VAR_6)
        FUNC_2(VAR_10, VAR_6, 0, 0);



    if ((VAR_11 = FUNC_1(VAR_3, VAR_10, VAR_4, VAR_5, VAR_7, &VAR_9)))
    {
        CertificateChain *VAR_12 = FUNC_4(sizeof(CertificateChain));

        if (VAR_12)
        {
            VAR_12->ref = 1;
            VAR_12->world = VAR_10;
            VAR_12->context.cbSize = sizeof(CERT_CHAIN_CONTEXT);
            VAR_12->context.TrustStatus = VAR_9->TrustStatus;
            VAR_12->context.cChain = 1;
            VAR_12->context.rgpChain = FUNC_4(sizeof(PCERT_SIMPLE_CHAIN));
            VAR_12->context.rgpChain[0] = VAR_9;
            VAR_12->context.cLowerQualityChainContext = 0;
            VAR_12->context.rgpLowerQualityChainContext = ((void*)0);
            VAR_12->context.fHasRevocationFreshnessTime = VAR_2;
            VAR_12->context.dwRevocationFreshnessTime = 0;
        }
        else
        {
            FUNC_0(VAR_9);
            VAR_11 = VAR_2;
        }
        *VAR_8 = VAR_12;
    }
    return VAR_11;
}

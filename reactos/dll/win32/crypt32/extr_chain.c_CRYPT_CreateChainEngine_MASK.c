
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_8__ {int cbSize; scalar_t__ CycleDetectionModulus; int MaximumCachedCertificates; int dwUrlRetrievalTimeout; int dwFlags; void** rghAdditionalStore; int cAdditionalStore; void* hRestrictedRoot; void* hExclusiveRoot; } ;
struct TYPE_7__ {int ref; scalar_t__ CycleDetectionModulus; int MaximumCachedCertificates; int dwUrlRetrievalTimeout; int dwFlags; void* hWorld; void* hRoot; } ;
typedef void* HCERTSTORE ;
typedef TYPE_1__* HCERTCHAINENGINE ;
typedef int DWORD ;
typedef TYPE_1__ CertificateChainEngine ;
typedef TYPE_3__ CERT_CHAIN_ENGINE_CONFIG ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,void**) ;
 int FUNC_2 (int ,void**) ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (int ,int ,int ,int ,char const*) ;
 TYPE_1__* FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 char const* VAR_4 ;

HCERTCHAINENGINE FUNC_7(HCERTSTORE VAR_5, DWORD VAR_6, const CERT_CHAIN_ENGINE_CONFIG *VAR_7)
{
    CertificateChainEngine *VAR_8;
    HCERTSTORE VAR_9[4];

    static const WCHAR VAR_10[] = { 'C','A',0 };
    static const WCHAR VAR_11[] = { 'M','y',0 };
    static const WCHAR VAR_12[] = { 'T','r','u','s','t',0 };

    if(!VAR_5) {
        if(VAR_7->cbSize >= sizeof(CERT_CHAIN_ENGINE_CONFIG) && VAR_7->hExclusiveRoot)
            VAR_5 = FUNC_4(VAR_7->hExclusiveRoot);
        else if (VAR_7->hRestrictedRoot)
            VAR_5 = FUNC_4(VAR_7->hRestrictedRoot);
        else
            VAR_5 = FUNC_5(VAR_2, 0, 0, VAR_6, VAR_4);
        if(!VAR_5)
            return ((void*)0);
    }

    VAR_8 = FUNC_6(sizeof(CertificateChainEngine));
    if(!VAR_8) {
        FUNC_3(VAR_5, 0);
        return ((void*)0);
    }

    VAR_8->ref = 1;
    VAR_8->hRoot = VAR_5;
    VAR_8->hWorld = FUNC_5(VAR_1, 0, 0, VAR_0, ((void*)0));
    VAR_9[0] = FUNC_4(VAR_8->hRoot);
    VAR_9[1] = FUNC_5(VAR_2, 0, 0, VAR_6, VAR_10);
    VAR_9[2] = FUNC_5(VAR_2, 0, 0, VAR_6, VAR_11);
    VAR_9[3] = FUNC_5(VAR_2, 0, 0, VAR_6, VAR_12);

    FUNC_1(VAR_8->hWorld, FUNC_0(VAR_9), VAR_9);
    FUNC_1(VAR_8->hWorld, VAR_7->cAdditionalStore, VAR_7->rghAdditionalStore);
    FUNC_2(FUNC_0(VAR_9), VAR_9);

    VAR_8->dwFlags = VAR_7->dwFlags;
    VAR_8->dwUrlRetrievalTimeout = VAR_7->dwUrlRetrievalTimeout;
    VAR_8->MaximumCachedCertificates = VAR_7->MaximumCachedCertificates;
    if(VAR_7->CycleDetectionModulus)
        VAR_8->CycleDetectionModulus = VAR_7->CycleDetectionModulus;
    else
        VAR_8->CycleDetectionModulus = VAR_3;

    return VAR_8;
}

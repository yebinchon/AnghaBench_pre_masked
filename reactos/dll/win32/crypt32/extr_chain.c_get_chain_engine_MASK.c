
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int config ;
struct TYPE_3__ {int member_0; } ;
typedef scalar_t__ HCERTCHAINENGINE ;
typedef int CertificateChainEngine ;
typedef TYPE_1__ CERT_CHAIN_ENGINE_CONFIG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_1__ const*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void**,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static CertificateChainEngine *FUNC_3(HCERTCHAINENGINE VAR_6, BOOL VAR_7)
{
    const CERT_CHAIN_ENGINE_CONFIG VAR_8 = { sizeof(VAR_8) };

    if(VAR_6 == VAR_2) {
        if(!VAR_7)
            return ((void*)0);

        if(!VAR_4) {
            VAR_6 = FUNC_0(((void*)0), VAR_0, &VAR_8);
            FUNC_2((void**)&VAR_4, VAR_6, ((void*)0));
            if(VAR_4 != VAR_6)
                FUNC_1(VAR_6);
        }

        return VAR_4;
    }

    if(VAR_6 == VAR_3) {
        if(!VAR_7)
            return ((void*)0);

        if(!VAR_5) {
            VAR_6 = FUNC_0(((void*)0), VAR_1, &VAR_8);
            FUNC_2((void**)&VAR_5, VAR_6, ((void*)0));
            if(VAR_5 != VAR_6)
                FUNC_1(VAR_6);
        }

        return VAR_5;
    }

    return (CertificateChainEngine*)VAR_6;
}

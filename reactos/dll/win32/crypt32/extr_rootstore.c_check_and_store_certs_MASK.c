
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int chainPara ;
typedef int chainEngineConfig ;
struct TYPE_18__ {int member_0; int member_1; } ;
struct TYPE_12__ {int member_0; } ;
struct TYPE_17__ {int member_0; TYPE_1__ member_1; } ;
struct TYPE_13__ {int dwErrorStatus; } ;
struct TYPE_16__ {int cChain; TYPE_4__** rgpChain; TYPE_2__ TrustStatus; } ;
struct TYPE_15__ {int cElement; TYPE_3__** rgpElement; } ;
struct TYPE_14__ {int pCertContext; } ;
typedef int * PCCERT_CONTEXT ;
typedef TYPE_5__* PCCERT_CHAIN_CONTEXT ;
typedef int HCERTSTORE ;
typedef scalar_t__ HCERTCHAINENGINE ;
typedef int DWORD ;
typedef TYPE_6__ CERT_CHAIN_PARA ;
typedef TYPE_7__ CERT_CHAIN_ENGINE_CONFIG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int *,int *,int ,TYPE_6__*,int ,int *,TYPE_5__**) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(HCERTSTORE VAR_7, HCERTSTORE VAR_8)
{
    DWORD VAR_9 = 0;
    CERT_CHAIN_ENGINE_CONFIG VAR_10 =
     { sizeof(VAR_10), 0 };
    HCERTCHAINENGINE VAR_11;

    FUNC_7("\n");

    FUNC_2(VAR_8);
    VAR_11 = FUNC_0(VAR_8, VAR_2, &VAR_10);
    if (VAR_11)
    {
        PCCERT_CONTEXT VAR_12 = ((void*)0);

        do {
            VAR_12 = FUNC_3(VAR_7, VAR_12);
            if (VAR_12)
            {
                CERT_CHAIN_PARA VAR_13 = { sizeof(VAR_13), { 0 } };
                PCCERT_CHAIN_CONTEXT VAR_14;
                BOOL VAR_15;

                VAR_15 = FUNC_6(VAR_11, VAR_12, ((void*)0), VAR_7,
                 &VAR_13, VAR_0, ((void*)0), &VAR_14);
                if (!VAR_15)
                    FUNC_7("rejecting %s: %s\n", FUNC_8(VAR_12),
                     "chain creation failed");
                else
                {
                    DWORD VAR_16 = VAR_6 |
                     VAR_5 |
                     VAR_3 |
                     VAR_4;
                    if (VAR_14->TrustStatus.dwErrorStatus & ~VAR_16)
                        FUNC_7("rejecting %s: %s\n", FUNC_8(VAR_12),
                         FUNC_9(VAR_14->TrustStatus.dwErrorStatus &
                         ~VAR_6));
                    else
                    {
                        DWORD VAR_17, VAR_18;

                        for (VAR_17 = 0; VAR_17 < VAR_14->cChain; VAR_17++)
                            for (VAR_18 = 0; VAR_18 < VAR_14->rgpChain[VAR_17]->cElement; VAR_18++)
                                if (FUNC_1(VAR_8,
                                 VAR_14->rgpChain[VAR_17]->rgpElement[VAR_18]->pCertContext,
                                 VAR_1, ((void*)0)))
                                    VAR_9++;
                    }
                    FUNC_4(VAR_14);
                }
            }
        } while (VAR_12);
        FUNC_5(VAR_11);
    }
    FUNC_7("Added %d root certificates\n", VAR_9);
}

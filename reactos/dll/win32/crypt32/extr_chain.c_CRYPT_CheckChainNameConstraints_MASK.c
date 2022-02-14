
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dwErrorStatus; int dwInfoStatus; } ;
struct TYPE_8__ {int pCertInfo; } ;
struct TYPE_7__ {int cElement; TYPE_1__** rgpElement; int TrustStatus; } ;
struct TYPE_6__ {TYPE_4__ TrustStatus; TYPE_3__* pCertContext; } ;
typedef TYPE_2__* PCERT_SIMPLE_CHAIN ;
typedef int DWORD ;
typedef int CERT_NAME_CONSTRAINTS_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(PCERT_SIMPLE_CHAIN VAR_2)
{
    int VAR_3, VAR_4;
    for (VAR_3 = VAR_2->cElement - 1; VAR_3 > 0; VAR_3--)
    {
        CERT_NAME_CONSTRAINTS_INFO *VAR_5;

        if ((VAR_5 = FUNC_2(
         VAR_2->rgpElement[VAR_3]->pCertContext->pCertInfo)))
        {
            if (!FUNC_4(VAR_5))
                VAR_2->rgpElement[VAR_3]->TrustStatus.dwErrorStatus |=
                 VAR_0;
            else
            {
                for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--)
                {
                    DWORD VAR_6 = 0;




                    if (VAR_4 == 0 || !FUNC_3(
                     VAR_2->rgpElement[VAR_4]->pCertContext))
                    {
                        FUNC_0(VAR_5,
                         VAR_2->rgpElement[VAR_4]->pCertContext->pCertInfo,
                         &VAR_6);
                        if (VAR_6)
                        {
                            VAR_2->rgpElement[VAR_3]->TrustStatus.dwErrorStatus |=
                             VAR_6;
                            FUNC_1(&VAR_2->TrustStatus,
                             &VAR_2->rgpElement[VAR_3]->TrustStatus);
                        }
                        else
                            VAR_2->rgpElement[VAR_3]->TrustStatus.dwInfoStatus |=
                             VAR_1;
                    }
                }
            }
            FUNC_5(VAR_5);
        }
    }
}

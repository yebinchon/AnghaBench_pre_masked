
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cUsageIdentifier; int * rgpszUsageIdentifier; } ;
typedef int LPSTR ;
typedef TYPE_1__ CERT_ENHKEY_USAGE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int * FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static CERT_ENHKEY_USAGE *FUNC_4(CERT_ENHKEY_USAGE *VAR_0, LPSTR VAR_1)
{
    if (!VAR_0->cUsageIdentifier)
        VAR_0->rgpszUsageIdentifier = FUNC_1(FUNC_0(), 0,
         sizeof(LPSTR));
    else
        VAR_0->rgpszUsageIdentifier = FUNC_3(FUNC_0(), 0,
         VAR_0->rgpszUsageIdentifier,
         (VAR_0->cUsageIdentifier + 1) * sizeof(LPSTR));
    if (VAR_0->rgpszUsageIdentifier)
        VAR_0->rgpszUsageIdentifier[VAR_0->cUsageIdentifier++] = VAR_1;
    else
    {
        FUNC_2(FUNC_0(), 0, VAR_0);
        VAR_0 = ((void*)0);
    }
    return VAR_0;
}

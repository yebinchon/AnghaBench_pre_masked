
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct detail_data {TYPE_1__* pCertViewInfo; } ;
struct TYPE_8__ {scalar_t__ fCritical; } ;
struct TYPE_7__ {TYPE_2__* pCertInfo; } ;
struct TYPE_6__ {size_t cExtension; TYPE_4__* rgExtension; } ;
struct TYPE_5__ {TYPE_3__* pCertContext; } ;
typedef TYPE_3__* PCCERT_CONTEXT ;
typedef int HWND ;
typedef size_t DWORD ;


 int FUNC_0 (int ,struct detail_data*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(HWND VAR_0, struct detail_data *VAR_1)
{
    DWORD VAR_2;
    PCCERT_CONTEXT VAR_3 = VAR_1->pCertViewInfo->pCertContext;

    for (VAR_2 = 0; VAR_2 < VAR_3->pCertInfo->cExtension; VAR_2++)
        if (VAR_3->pCertInfo->rgExtension[VAR_2].fCritical)
            FUNC_0(VAR_0, VAR_1,
             &VAR_3->pCertInfo->rgExtension[VAR_2]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct detail_data {TYPE_1__* pCertViewInfo; } ;
struct TYPE_10__ {TYPE_4__* pCertInfo; } ;
struct TYPE_7__ {scalar_t__ cbData; } ;
struct TYPE_8__ {TYPE_2__ PublicKey; } ;
struct TYPE_9__ {TYPE_3__ SubjectPublicKeyInfo; } ;
struct TYPE_6__ {TYPE_5__* pCertContext; } ;
typedef TYPE_5__* PCCERT_CONTEXT ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct detail_data*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(HWND VAR_1, struct detail_data *VAR_2)
{
    unsigned int VAR_3;
    PCCERT_CONTEXT VAR_4 = VAR_2->pCertViewInfo->pCertContext;




    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0) - 1; VAR_3++)
        FUNC_1(VAR_1, VAR_2, &VAR_0[VAR_3]);
    if (VAR_4->pCertInfo->SubjectPublicKeyInfo.PublicKey.cbData)
        FUNC_1(VAR_1, VAR_2, &VAR_0[VAR_3]);
}

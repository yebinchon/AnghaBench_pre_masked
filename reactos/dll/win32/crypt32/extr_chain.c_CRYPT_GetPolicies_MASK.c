
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* pCertInfo; } ;
struct TYPE_8__ {int cbData; int pbData; } ;
struct TYPE_9__ {TYPE_2__ Value; } ;
struct TYPE_7__ {int rgExtension; int cExtension; } ;
typedef TYPE_3__* PCERT_EXTENSION ;
typedef TYPE_4__* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef int CERT_POLICIES_INFO ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int **,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static CERT_POLICIES_INFO *FUNC_2(PCCERT_CONTEXT VAR_4)
{
    PCERT_EXTENSION VAR_5;
    CERT_POLICIES_INFO *VAR_6 = ((void*)0);

    VAR_5 = FUNC_0(VAR_3, VAR_4->pCertInfo->cExtension,
     VAR_4->pCertInfo->rgExtension);
    if (VAR_5)
    {
        DWORD VAR_7;

        FUNC_1(VAR_1, VAR_2,
         VAR_5->Value.pbData, VAR_5->Value.cbData, VAR_0, ((void*)0),
         &VAR_6, &VAR_7);
    }
    return VAR_6;
}

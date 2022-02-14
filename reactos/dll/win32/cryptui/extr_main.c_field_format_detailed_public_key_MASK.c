
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {TYPE_3__* pCertInfo; } ;
struct TYPE_6__ {int cbData; int pbData; } ;
struct TYPE_7__ {TYPE_1__ PublicKey; } ;
struct TYPE_8__ {TYPE_2__ SubjectPublicKeyInfo; } ;
typedef TYPE_4__* PCCERT_CONTEXT ;


 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static WCHAR *FUNC_1(PCCERT_CONTEXT VAR_0, void *VAR_1)
{
    return FUNC_0(
     VAR_0->pCertInfo->SubjectPublicKeyInfo.PublicKey.pbData,
     VAR_0->pCertInfo->SubjectPublicKeyInfo.PublicKey.cbData);
}

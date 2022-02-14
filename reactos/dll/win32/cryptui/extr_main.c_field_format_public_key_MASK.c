
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int __ms_va_list ;
typedef int WCHAR ;
struct TYPE_10__ {int cbData; } ;
struct TYPE_9__ {int pszObjId; } ;
struct TYPE_14__ {TYPE_2__ PublicKey; TYPE_1__ Algorithm; } ;
struct TYPE_13__ {TYPE_3__* pCertInfo; } ;
struct TYPE_12__ {int * pwszName; } ;
struct TYPE_11__ {TYPE_8__ SubjectPublicKeyInfo; } ;
typedef TYPE_4__* PCCRYPT_OID_INFO ;
typedef TYPE_5__* PCCERT_CONTEXT ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_8__*) ;
 TYPE_4__* FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int *,int ,int ,int *,int,int *) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static WCHAR *FUNC_8(PCCERT_CONTEXT VAR_7)
{
    PCCRYPT_OID_INFO VAR_8;
    WCHAR *VAR_9 = ((void*)0);

    VAR_8 = FUNC_2(VAR_0,
     VAR_7->pCertInfo->SubjectPublicKeyInfo.Algorithm.pszObjId, 0);
    if (VAR_8)
    {
        WCHAR VAR_10[VAR_4];

        if (FUNC_6(VAR_6, VAR_3, VAR_10, FUNC_0(VAR_10)))
        {
            DWORD VAR_11;
            VAR_11 = FUNC_7(VAR_10) + FUNC_7(VAR_8->pwszName) +
                VAR_7->pCertInfo->SubjectPublicKeyInfo.PublicKey.cbData * 8;
            VAR_9 = FUNC_5(FUNC_4(), 0, VAR_11 * sizeof(*VAR_9));
            if (VAR_9)
            {
                DWORD_PTR VAR_12[2];
                VAR_12[0] = (DWORD_PTR)VAR_8->pwszName;
                VAR_12[1] = FUNC_1(VAR_5,
                              &VAR_7->pCertInfo->SubjectPublicKeyInfo);
                FUNC_3(VAR_2|VAR_1,
                               VAR_10, 0, 0, VAR_9, VAR_11, (__ms_va_list*)VAR_12);
            }
        }
    }
    return VAR_9;
}

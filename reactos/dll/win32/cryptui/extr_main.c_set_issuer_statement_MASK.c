
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct IssuerStatement {void* userNotice; void* cps; } ;
typedef int ULONG_PTR ;
struct TYPE_12__ {int dwFlags; TYPE_2__* pCertContext; } ;
struct TYPE_10__ {int cbData; int pbData; } ;
struct TYPE_11__ {TYPE_3__ Value; int pszObjId; } ;
struct TYPE_9__ {TYPE_1__* pCertInfo; } ;
struct TYPE_8__ {int rgExtension; int cExtension; } ;
typedef TYPE_4__* PCERT_EXTENSION ;
typedef TYPE_5__* PCCRYPTUI_VIEWCERTIFICATE_STRUCTW ;
typedef void* LPWSTR ;
typedef int HWND ;
typedef int DWORD ;
typedef int CRYPT_OBJID_BLOB ;
typedef int CERT_POLICIES_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int **,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 struct IssuerStatement* FUNC_5 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_8 (int *,int ) ;
 void* FUNC_9 (int *) ;
 void* FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(HWND VAR_9,
 PCCRYPTUI_VIEWCERTIFICATE_STRUCTW VAR_10)
{
    PCERT_EXTENSION VAR_11;

    if (!(VAR_10->dwFlags & VAR_0) &&
     (VAR_11 = FUNC_0(VAR_6,
     VAR_10->pCertContext->pCertInfo->cExtension,
     VAR_10->pCertContext->pCertInfo->rgExtension)))
    {
        CERT_POLICIES_INFO *VAR_12;
        DWORD VAR_13;

        if (FUNC_1(VAR_5, VAR_11->pszObjId,
         VAR_11->Value.pbData, VAR_11->Value.cbData,
         VAR_1, ((void*)0), &VAR_12, &VAR_13))
        {
            CRYPT_OBJID_BLOB *VAR_14;
            LPWSTR VAR_15 = ((void*)0), VAR_16 = ((void*)0);

            if ((VAR_14 = FUNC_8(VAR_12,
             VAR_7)))
                VAR_15 = FUNC_9(VAR_14);
            if ((VAR_14 = FUNC_8(VAR_12,
             VAR_8)))
                VAR_16 = FUNC_10(VAR_14);
            if (VAR_15 || VAR_16)
            {
                struct IssuerStatement *VAR_17 =
                 FUNC_5(FUNC_4(), 0, sizeof(struct IssuerStatement));

                if (VAR_17)
                {
                    VAR_17->cps = VAR_15;
                    VAR_17->userNotice = VAR_16;
                    FUNC_2(FUNC_3(VAR_9, VAR_3), VAR_4);
                    FUNC_7(VAR_9, VAR_2,
                     (ULONG_PTR)VAR_17);
                }
            }
            FUNC_6(VAR_12);
        }
    }
}

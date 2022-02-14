
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pbData; int cbData; } ;
struct TYPE_7__ {int Algid; } ;
struct TYPE_10__ {int cbSize; int pwszCNGExtraAlgid; int pwszCNGAlgid; TYPE_2__ ExtraInfo; TYPE_1__ u; int dwGroupId; scalar_t__* pwszName; int pszOID; } ;
struct OIDInfo {int entry; TYPE_4__ info; } ;
typedef int WCHAR ;
typedef int UINT_PTR ;
struct TYPE_11__ {int pwszCNGExtraAlgid; int pwszCNGAlgid; TYPE_3__* blob; int Algid; int dwGroupId; int pszOID; scalar_t__* pwszName; } ;
struct TYPE_9__ {int pbData; int cbData; } ;
typedef scalar_t__* LPWSTR ;
typedef int LPCWSTR ;
typedef size_t DWORD ;
typedef int CRYPT_OID_INFO ;


 size_t FUNC_0 (TYPE_5__*) ;
 struct OIDInfo* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,int ,scalar_t__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct OIDInfo*,int ,int) ;
 int FUNC_6 (struct OIDInfo*,int ,int) ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void)
{
    DWORD VAR_3;

    FUNC_7();
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
    {
        if (!FUNC_2(VAR_2[VAR_3].pwszName))
        {
            struct OIDInfo *VAR_4;


            VAR_4 = FUNC_1(sizeof(struct OIDInfo));
            if (VAR_4)
            {
                FUNC_6(VAR_4, 0, sizeof(*VAR_4));
                VAR_4->info.cbSize = sizeof(CRYPT_OID_INFO);
                VAR_4->info.pszOID = VAR_2[VAR_3].pszOID;
                VAR_4->info.pwszName = VAR_2[VAR_3].pwszName;
                VAR_4->info.dwGroupId = VAR_2[VAR_3].dwGroupId;
                VAR_4->info.u.Algid = VAR_2[VAR_3].Algid;
                if (VAR_2[VAR_3].blob)
                {
                    VAR_4->info.ExtraInfo.cbData =
                     VAR_2[VAR_3].blob->cbData;
                    VAR_4->info.ExtraInfo.pbData =
                     VAR_2[VAR_3].blob->pbData;
                }
                VAR_4->info.pwszCNGAlgid = VAR_2[VAR_3].pwszCNGAlgid;
                VAR_4->info.pwszCNGExtraAlgid = VAR_2[VAR_3].pwszCNGExtraAlgid;
                FUNC_4(&VAR_1, &VAR_4->entry);
            }
        }
        else
        {
            LPCWSTR VAR_5;
            int VAR_6 = FUNC_3(VAR_0,
             (UINT_PTR)VAR_2[VAR_3].pwszName,
             (LPWSTR)&VAR_5, 0);

            if (VAR_6)
            {
                struct OIDInfo *VAR_7 = FUNC_1(sizeof(struct OIDInfo) +
                 (VAR_6 + 1) * sizeof(WCHAR));

                if (VAR_7)
                {
                    FUNC_6(VAR_7, 0, sizeof(*VAR_7));
                    VAR_7->info.cbSize = sizeof(CRYPT_OID_INFO);
                    VAR_7->info.pszOID = VAR_2[VAR_3].pszOID;
                    VAR_7->info.pwszName = (LPWSTR)(VAR_7 + 1);
                    VAR_7->info.dwGroupId = VAR_2[VAR_3].dwGroupId;
                    VAR_7->info.u.Algid = VAR_2[VAR_3].Algid;
                    FUNC_5(VAR_7 + 1, VAR_5, VAR_6*sizeof(WCHAR));
                    ((LPWSTR)(VAR_7 + 1))[VAR_6] = 0;
                    if (VAR_2[VAR_3].blob)
                    {
                        VAR_7->info.ExtraInfo.cbData =
                         VAR_2[VAR_3].blob->cbData;
                        VAR_7->info.ExtraInfo.pbData =
                         VAR_2[VAR_3].blob->pbData;
                    }
                    VAR_7->info.pwszCNGAlgid = VAR_2[VAR_3].pwszCNGAlgid;
                    VAR_7->info.pwszCNGExtraAlgid = VAR_2[VAR_3].pwszCNGExtraAlgid;
                    FUNC_4(&VAR_1, &VAR_7->entry);
                }
            }
        }
    }
}

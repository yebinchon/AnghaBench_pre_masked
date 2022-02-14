
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cbData; } ;
struct TYPE_4__ {int Algid; } ;
struct TYPE_6__ {int pwszCNGExtraAlgid; int pwszCNGAlgid; TYPE_2__ ExtraInfo; TYPE_1__ u; int dwGroupId; int pwszName; int pszOID; } ;
struct OIDInfo {int entry; TYPE_3__ info; } ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_6 ;
 struct OIDInfo* FUNC_8 (int ,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_9(void)
{
    DWORD VAR_7, VAR_8;
    HKEY VAR_9;

    VAR_7 = FUNC_2(VAR_3, "Software\\Microsoft\\Cryptography\\OID\\EncodingType 0\\CryptDllFindOIDInfo",
                        0, VAR_4, &VAR_9);
    if (VAR_7 != VAR_2) return;

    VAR_8 = 0;
    for (;;)
    {
        char VAR_10[VAR_5];
        struct OIDInfo *VAR_11;
        DWORD VAR_12;

        VAR_7 = FUNC_1(VAR_9, VAR_8++, VAR_10, VAR_5);
        if (VAR_7 == VAR_1)
            break;

        if (VAR_7 == VAR_2)
        {
            if ((VAR_11 = FUNC_8(VAR_9, VAR_10, &VAR_12)))
            {
                FUNC_3("adding oid %s, name %s, groupid %u, algid %u, extra %u, CNG algid %s, CNG extra %s\n",
                      FUNC_4(VAR_11->info.pszOID), FUNC_5(VAR_11->info.pwszName),
                      VAR_11->info.dwGroupId, VAR_11->info.u.Algid, VAR_11->info.ExtraInfo.cbData,
                      FUNC_5(VAR_11->info.pwszCNGAlgid), FUNC_5(VAR_11->info.pwszCNGExtraAlgid));

                if (VAR_12 & VAR_0)
                    FUNC_6(&VAR_6, &VAR_11->entry);
                else
                    FUNC_7(&VAR_6, &VAR_11->entry);
            }
        }
    }

    FUNC_0(VAR_9);
}

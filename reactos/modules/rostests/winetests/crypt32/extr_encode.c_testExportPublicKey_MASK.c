
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pszObjId; } ;
struct TYPE_7__ {TYPE_1__ Algorithm; } ;
typedef TYPE_2__* PCERT_PUBLIC_KEY_INFO ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,TYPE_2__*,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(HCRYPTPROV VAR_5, PCERT_PUBLIC_KEY_INFO *VAR_6)
{
    BOOL VAR_7;
    DWORD VAR_8 = 0;
    HCRYPTKEY VAR_9;




    VAR_7 = FUNC_1(0, 0, 0, ((void*)0), 0, ((void*)0), ((void*)0), &VAR_8);
    FUNC_6(!VAR_7 && FUNC_3() == VAR_1,
     "Expected ERROR_INVALID_PARAMETER, got %08x\n", FUNC_3());
    VAR_7 = FUNC_1(0, VAR_0, 0, ((void*)0), 0, ((void*)0), ((void*)0),
     &VAR_8);
    FUNC_6(!VAR_7 && FUNC_3() == VAR_1,
     "Expected ERROR_INVALID_PARAMETER, got %08x\n", FUNC_3());
    VAR_7 = FUNC_1(0, 0, VAR_3, ((void*)0), 0, ((void*)0),
     ((void*)0), &VAR_8);
    FUNC_6(!VAR_7 && FUNC_3() == VAR_1,
     "Expected ERROR_INVALID_PARAMETER, got %08x\n", FUNC_3());
    VAR_7 = FUNC_1(0, VAR_0, VAR_3, ((void*)0),
     0, ((void*)0), ((void*)0), &VAR_8);
    FUNC_6(!VAR_7 && FUNC_3() == VAR_1,
     "Expected ERROR_INVALID_PARAMETER, got %08x\n", FUNC_3());

    VAR_7 = FUNC_1(VAR_5, VAR_0, VAR_3, ((void*)0),
     0, ((void*)0), ((void*)0), &VAR_8);
    FUNC_6(!VAR_7 && FUNC_3() == VAR_2, "Expected NTE_NO_KEY, got %08x\n",
     FUNC_3());
    VAR_7 = FUNC_2(VAR_5, VAR_0, 0, &VAR_9);
    FUNC_6(VAR_7, "CryptGenKey failed: %08x\n", FUNC_3());
    if (VAR_7)
    {
        VAR_7 = FUNC_1(VAR_5, VAR_0, VAR_3,
         ((void*)0), 0, ((void*)0), ((void*)0), &VAR_8);
        FUNC_6(VAR_7, "CryptExportPublicKeyInfoEx failed: %08x\n", FUNC_3());
        *VAR_6 = FUNC_5(FUNC_4(), 0, VAR_8);
        if (*VAR_6)
        {
            VAR_7 = FUNC_1(VAR_5, VAR_0,
             VAR_3, ((void*)0), 0, ((void*)0), *VAR_6, &VAR_8);
            FUNC_6(VAR_7, "CryptExportPublicKeyInfoEx failed: %08x\n",
             FUNC_3());
            if (VAR_7)
            {



                FUNC_6(!FUNC_7((*VAR_6)->Algorithm.pszObjId, VAR_4),
                 "Expected %s, got %s\n", VAR_4,
                 (*VAR_6)->Algorithm.pszObjId);
            }
        }
    }
    FUNC_0(VAR_9);
}

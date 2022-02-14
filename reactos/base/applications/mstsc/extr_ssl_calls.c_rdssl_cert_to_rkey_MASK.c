
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_5__ {TYPE_1__* pCertInfo; } ;
struct TYPE_4__ {int SubjectPublicKeyInfo; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int,int *,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__,int ) ;

uint8 *FUNC_9(PCCERT_CONTEXT VAR_7, uint32 * VAR_8)
{
    HCRYPTPROV VAR_9;
    HCRYPTKEY VAR_10;
    BOOL VAR_11;
    BYTE * VAR_12;
    DWORD VAR_13, VAR_14;
    VAR_11 = FUNC_0(&VAR_9,
                              ((void*)0),
                              VAR_1,
                              VAR_4,
                              0);
    if (!VAR_11)
    {
        VAR_14 = FUNC_5();
        if (VAR_14 == VAR_2)
        {
            VAR_11 = FUNC_0(&VAR_9,
                                      L"MSTSC",
                                      VAR_1,
                                      VAR_4,
                                      VAR_0);
        }
    }
    if (!VAR_11)
    {
        VAR_14 = FUNC_5();
        FUNC_6("CryptAcquireContext call failed with %lx\n", VAR_14);
        return ((void*)0);
    }
    VAR_11 = FUNC_3(VAR_9,
                                     VAR_6 | VAR_3,
                                     &(VAR_7->pCertInfo->SubjectPublicKeyInfo),
                                     0,
                                     0,
                                     ((void*)0),
                                     &VAR_10);
    if (!VAR_11)
    {
        VAR_14 = FUNC_5();
        FUNC_4(VAR_9, 0);
        FUNC_6("CryptImportPublicKeyInfoEx call failed with %lx\n", VAR_14);
        return ((void*)0);
    }
    VAR_11 = FUNC_2(VAR_10,
                         0,
                         VAR_5,
                         0,
                         ((void*)0),
                         &VAR_13);
    if (!VAR_11)
    {
        VAR_14 = FUNC_5();
        FUNC_1(VAR_10);
        FUNC_4(VAR_9, 0);
        FUNC_6("CryptExportKey call failed with %lx\n", VAR_14);
        return ((void*)0);
    }
    VAR_12 = FUNC_8(VAR_13, 0);
    VAR_11 = FUNC_2(VAR_10,
                         0,
                         VAR_5,
                         0,
                         VAR_12,
                         &VAR_13);
    if (!VAR_11)
    {
        VAR_14 = FUNC_5();
        FUNC_7(VAR_12);
        FUNC_1(VAR_10);
        FUNC_4(VAR_9, 0);
        FUNC_6("CryptExportKey call failed with %lx\n", VAR_14);
        return ((void*)0);
    }
    FUNC_1(VAR_10);
    FUNC_4(VAR_9, 0);
    return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc4_state {scalar_t__ hKey; int hCryptProv; } ;
struct TYPE_2__ {scalar_t__ reserved; int bVersion; int bType; int aiKeyAlg; } ;
typedef TYPE_1__ PUBLICKEYSTRUC ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int,int ,int ,scalar_t__*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *,char*,int) ;

void
FUNC_7(void* VAR_4, char* VAR_5, int VAR_6)
{
    struct rc4_state *VAR_7 = VAR_4;
    BOOL VAR_8;
    DWORD VAR_9;
    BYTE * VAR_10;
    PUBLICKEYSTRUC *VAR_11;
    DWORD * VAR_12;
    BYTE * VAR_13;
    if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7->hCryptProv)
    {
        FUNC_3("rdssl_rc4_set_key %p %p %d\n", VAR_4, VAR_5, VAR_6);
        return;
    }
    VAR_10 = FUNC_5(sizeof(PUBLICKEYSTRUC) + sizeof(DWORD) + VAR_6, 0);
    if (!VAR_10)
    {
        FUNC_3("rdssl_rc4_set_key no memory\n");
        return;
    }
    VAR_11 = (PUBLICKEYSTRUC *)VAR_10;
    VAR_12 = (DWORD *)(VAR_10 + sizeof(PUBLICKEYSTRUC));
    VAR_13 = VAR_10 + sizeof(PUBLICKEYSTRUC) + sizeof(DWORD);
    VAR_11->aiKeyAlg = VAR_0;
    VAR_11->bType = VAR_3;
    VAR_11->bVersion = VAR_2;
    VAR_11->reserved = 0;
    *VAR_12 = VAR_6;
    FUNC_6(VAR_13, VAR_5, VAR_6);
    if (VAR_7->hKey)
    {
        FUNC_0(VAR_7->hKey);
        VAR_7->hKey = 0;
    }
    VAR_8 = FUNC_1(VAR_7->hCryptProv,
                         VAR_10,
                         sizeof(PUBLICKEYSTRUC) + sizeof(DWORD) + VAR_6,
                         0,
                         VAR_1,
                         &VAR_7->hKey);
    FUNC_4(VAR_10);
    if (!VAR_8)
    {
        VAR_9 = FUNC_2();
        FUNC_3("CryptImportKey failed with %lx\n", VAR_9);
    }
}

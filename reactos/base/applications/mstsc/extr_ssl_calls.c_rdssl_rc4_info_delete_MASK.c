
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc4_state {scalar_t__ hCryptProv; scalar_t__ hKey; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (void*) ;

void
FUNC_5(void* VAR_1)
{
    struct rc4_state *VAR_2 = VAR_1;
    BOOL VAR_3 = VAR_0;
    DWORD VAR_4;
    if (!VAR_2)
    {

        return;
    }
    if (VAR_2->hKey)
    {
        VAR_3 = FUNC_0(VAR_2->hKey);
        if (!VAR_3)
        {
            VAR_4 = FUNC_2();
            FUNC_3("CryptDestroyKey failed with %lx\n", VAR_4);
        }
    }
    if (VAR_2->hCryptProv)
    {
        VAR_3 = FUNC_1(VAR_2->hCryptProv, 0);
        if (!VAR_3)
        {
            VAR_4 = FUNC_2();
            FUNC_3("CryptReleaseContext failed with %lx\n", VAR_4);
        }
    }
    FUNC_4(VAR_1);
}

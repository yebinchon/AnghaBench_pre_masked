
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_context {int hHash; int hCryptProv; } ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int *,int *,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,void*,...) ;

void
FUNC_3(void* VAR_1, char* VAR_2)
{
    struct hash_context *VAR_3 = VAR_1;
    BOOL VAR_4;
    DWORD VAR_5, VAR_6;
    if (!VAR_3 || !VAR_3->hHash || !VAR_3->hCryptProv || !VAR_2)
    {
        FUNC_2("rdssl_hash_complete %p %p\n", VAR_1, VAR_2);
        return;
    }
    VAR_4 = FUNC_0(VAR_3->hHash,
                            VAR_0,
                            ((void*)0),
                            &VAR_6,
                            0);
    if (!VAR_4)
    {
        VAR_5 = FUNC_1();
        FUNC_2("CryptGetHashParam failed with %lx\n", VAR_5);
        return;
    }
    VAR_4 = FUNC_0(VAR_3->hHash,
                            VAR_0,
                            (BYTE *)VAR_2,
                            &VAR_6,
                            0);
    if (!VAR_4)
    {
        VAR_5 = FUNC_1();
        FUNC_2("CryptGetHashParam failed with %lx\n", VAR_5);
    }
}

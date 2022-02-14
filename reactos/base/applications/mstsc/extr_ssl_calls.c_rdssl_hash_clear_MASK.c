
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_context {int hHash; int hCryptProv; } ;
typedef struct hash_context* DWORD ;
typedef scalar_t__ BOOL ;
typedef int ALG_ID ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct hash_context* FUNC_2 () ;
 int FUNC_3 (char*,struct hash_context*) ;

void
FUNC_4(void* VAR_0, ALG_ID VAR_1)
{
    struct hash_context *VAR_2 = VAR_0;
    BOOL VAR_3;
    DWORD VAR_4;
    if (!VAR_2 || !VAR_2->hHash || !VAR_2->hCryptProv)
    {
        FUNC_3("rdssl_hash_clear %p\n", VAR_2);
        return;
    }
    VAR_3 = FUNC_1(VAR_2->hHash);
    if (!VAR_3)
    {
        VAR_4 = FUNC_2();
        FUNC_3("CryptDestroyHash failed with %lx\n", VAR_4);
        return;
    }
    VAR_3 = FUNC_0(VAR_2->hCryptProv,
                          VAR_1,
                          0,
                          0,
                          &VAR_2->hHash);
    if (!VAR_3)
    {
        VAR_4 = FUNC_2();
        FUNC_3("CryptCreateHash failed with %lx\n", VAR_4);
    }
}

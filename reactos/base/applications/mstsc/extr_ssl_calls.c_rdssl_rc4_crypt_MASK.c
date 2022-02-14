
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc4_state {int hKey; } ;
typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,char*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char*,int) ;

void
FUNC_6(void* VAR_1, char* VAR_2, char* VAR_3, int VAR_4)
{
    struct rc4_state *VAR_5 = VAR_1;
    BOOL VAR_6;
    DWORD VAR_7;
    BYTE * VAR_8;
    DWORD VAR_9 = VAR_4;
    if (!VAR_1 || !VAR_2 || !VAR_3 || !VAR_4 || !VAR_5->hKey)
    {
        FUNC_2("rdssl_rc4_crypt %p %p %p %d\n", VAR_1, VAR_2, VAR_3, VAR_4);
        return;
    }
    VAR_8 = FUNC_4(VAR_4, 0);
    if (!VAR_8)
    {
        FUNC_2("rdssl_rc4_set_key no memory\n");
        return;
    }
    FUNC_5(VAR_8, VAR_2, VAR_4);
    VAR_6 = FUNC_0(VAR_5->hKey,
                       0,
                       VAR_0,
                       0,
                       VAR_8,
                       &VAR_9,
                       VAR_9);
    if (!VAR_6)
    {
        VAR_7 = FUNC_1();
        FUNC_3(VAR_8);
        FUNC_2("CryptEncrypt failed with %lx\n", VAR_7);
        return;
    }
    FUNC_5(VAR_3, VAR_8, VAR_4);
    FUNC_3(VAR_8);
}

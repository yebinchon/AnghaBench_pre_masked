
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mySig ;
typedef int HCRYPTPROV ;
typedef int HCRYPTHASH ;
typedef unsigned int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int const*,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int *,unsigned int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(HCRYPTPROV VAR_2, const BYTE *VAR_3, size_t VAR_4,
 const BYTE *VAR_5, unsigned int VAR_6)
{
    HCRYPTHASH VAR_7;
    BOOL VAR_8 = FUNC_0(VAR_2, VAR_1, 0, 0, &VAR_7);

    FUNC_6(VAR_8, "CryptCreateHash failed: %08x\n", FUNC_4());
    if (VAR_8)
    {
        BYTE VAR_9[64];
        DWORD VAR_10 = sizeof(VAR_9);

        VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_4, 0);
        FUNC_6(VAR_8, "CryptHashData failed: %08x\n", FUNC_4());

        VAR_8 = FUNC_3(VAR_7, VAR_0, ((void*)0), 0, VAR_9, &VAR_10);
        FUNC_6(VAR_8, "CryptSignHash failed: %08x\n", FUNC_4());
        if (VAR_8)
        {
            FUNC_6(VAR_10 == VAR_6, "Expected sig length %d, got %d\n",
             VAR_6, VAR_10);
            FUNC_6(!FUNC_5(VAR_9, VAR_5, VAR_6), "Unexpected signature\n");
        }
        FUNC_1(VAR_7);
    }
}

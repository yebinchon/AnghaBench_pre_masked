
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int,int *) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int,char*,int,...) ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static BOOL FUNC_8(void)
{
    HCRYPTKEY VAR_17;
    BOOL VAR_18;

    VAR_15 = (void *)FUNC_5(FUNC_4("advapi32.dll"), "CryptDuplicateHash");

    VAR_14 = (HCRYPTPROV)VAR_7;






    VAR_18 = FUNC_0(&VAR_14, VAR_16, ((void*)0), VAR_12, VAR_5);
    if (!VAR_18 && FUNC_3() == VAR_11)
    {
        FUNC_7("RSA_AES provider not supported\n");
        return VAR_6;
    }
    FUNC_6(!VAR_18 && FUNC_3()==VAR_9, "%d, %08x\n", VAR_18, FUNC_3());

    if (!FUNC_0(&VAR_14, VAR_16, ((void*)0), VAR_12, 0))
    {
        FUNC_6(FUNC_3()==VAR_10, "%08x\n", FUNC_3());
        if (FUNC_3()!=VAR_10) return VAR_6;
        VAR_18 = FUNC_0(&VAR_14, VAR_16, ((void*)0), VAR_12,
                                     VAR_4);
        FUNC_6(VAR_18, "%08x\n", FUNC_3());
        if (!VAR_18) return VAR_6;
        VAR_18 = FUNC_2(VAR_14, VAR_0, 0, &VAR_17);
        FUNC_6(VAR_18, "%08x\n", FUNC_3());
        if (VAR_18) FUNC_1(VAR_17);
        VAR_18 = FUNC_2(VAR_14, VAR_1, 0, &VAR_17);
        FUNC_6(VAR_18, "%08x\n", FUNC_3());
        if (VAR_18) FUNC_1(VAR_17);


        VAR_18 = FUNC_2(VAR_14, VAR_2, 0, &VAR_17);
        FUNC_6(!VAR_18 && FUNC_3() == VAR_8, "%d %08x\n", VAR_18, FUNC_3());
        VAR_18 = FUNC_2(VAR_14, VAR_2, 128 << 16, &VAR_17);
        FUNC_6(!VAR_18 && FUNC_3() == VAR_8, "%d %08x\n", VAR_18, FUNC_3());
        VAR_18 = FUNC_2(VAR_14, VAR_3, 0, &VAR_17);
        FUNC_6(VAR_18, "%08x\n", FUNC_3());
        if (VAR_18) FUNC_1(VAR_17);
    }
    return VAR_13;
}

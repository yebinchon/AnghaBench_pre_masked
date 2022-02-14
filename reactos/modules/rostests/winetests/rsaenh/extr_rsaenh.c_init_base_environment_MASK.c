
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int ,char const*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int,char*,int,...) ;
 void* VAR_13 ;
 int VAR_14 ;
 char const* VAR_15 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9(const char *VAR_16, DWORD VAR_17)
{
    HCRYPTKEY VAR_18;
    BOOL VAR_19;

    if (VAR_16) VAR_15 = VAR_16;

    VAR_13 = (void *)FUNC_5(FUNC_4("advapi32.dll"), "CryptDuplicateHash");

    VAR_12 = (HCRYPTPROV)VAR_5;

    VAR_19 = FUNC_0(&VAR_12, VAR_14, VAR_15, VAR_10, VAR_3);
    FUNC_7(!VAR_19 && (FUNC_3()==VAR_6 ||
       FUNC_6(FUNC_3() == VAR_8 )),
       "%d, %08x\n", VAR_19, FUNC_3());

    if (!FUNC_0(&VAR_12, VAR_14, VAR_15, VAR_10, 0))
    {
        FUNC_7(FUNC_3()==VAR_7 ||
           FUNC_6(FUNC_3() == VAR_9 ) ||
           FUNC_6(FUNC_3() == VAR_8 ),
           "%08x\n", FUNC_3());
        if (FUNC_3()!=VAR_7)
        {
            FUNC_8("RSA full provider not available\n");
            return VAR_4;
        }
        VAR_19 = FUNC_0(&VAR_12, VAR_14, VAR_15, VAR_10,
                                     VAR_2);
        FUNC_7(VAR_19, "%08x\n", FUNC_3());
        if (!VAR_19)
        {
            FUNC_8("Couldn't create crypto provider\n");
            return VAR_4;
        }
        VAR_19 = FUNC_2(VAR_12, VAR_0, VAR_17, &VAR_18);
        FUNC_7(VAR_19, "%08x\n", FUNC_3());
        if (VAR_19) FUNC_1(VAR_18);
        VAR_19 = FUNC_2(VAR_12, VAR_1, VAR_17, &VAR_18);
        FUNC_7(VAR_19, "%08x\n", FUNC_3());
        if (VAR_19) FUNC_1(VAR_18);
    }
    return VAR_11;
}

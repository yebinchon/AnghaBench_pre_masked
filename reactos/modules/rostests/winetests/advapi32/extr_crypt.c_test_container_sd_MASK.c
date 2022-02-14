
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SECURITY_DESCRIPTOR ;
typedef int HCRYPTPROV ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int ,int) ;
 int FUNC_1 (int ,int ,int *,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    HCRYPTPROV VAR_8;
    SECURITY_DESCRIPTOR *VAR_9;
    DWORD VAR_10, VAR_11;
    BOOL VAR_12;

    VAR_12 = FUNC_0(&VAR_8, "winetest", "Microsoft Enhanced Cryptographic Provider v1.0",
                               VAR_7, VAR_1|VAR_2);
    FUNC_9(VAR_12, "got %u\n", FUNC_3());

    VAR_10 = 0;
    FUNC_7(0xdeadbeef);
    VAR_12 = FUNC_1(VAR_8, VAR_6, ((void*)0), &VAR_10, VAR_5);
    VAR_11 = FUNC_3();
    FUNC_9(VAR_12, "got %u\n", VAR_11);
    FUNC_9(VAR_11 == VAR_3 || FUNC_8(VAR_11 == VAR_4), "got %u\n", VAR_11);
    FUNC_9(VAR_10, "expected len > 0\n");

    VAR_9 = FUNC_5(FUNC_4(), 0, VAR_10);
    VAR_12 = FUNC_1(VAR_8, VAR_6, (BYTE *)VAR_9, &VAR_10, VAR_5);
    FUNC_9(VAR_12, "got %u\n", FUNC_3());
    FUNC_6(FUNC_4(), 0, VAR_9);

    VAR_12 = FUNC_2(VAR_8, 0);
    FUNC_9(VAR_12, "got %u\n", FUNC_3());

    VAR_12 = FUNC_0(&VAR_8, "winetest", "Microsoft Enhanced Cryptographic Provider v1.0",
                               VAR_7, VAR_1|VAR_0);
    FUNC_9(VAR_12, "got %u\n", FUNC_3());
}

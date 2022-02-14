
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int*) ;
 int FUNC_2 (int ,int ,int *,int*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_13 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    HCRYPTKEY VAR_14, VAR_15;
    DWORD VAR_16, VAR_17;
    BOOL VAR_18;


    if (!FUNC_8(((void*)0), VAR_4))
        return;

    VAR_18 = FUNC_3(VAR_13, VAR_0, &VAR_14);
    FUNC_9 (VAR_18, "%08x\n", FUNC_5());
    if (!VAR_18) return;

    VAR_16 = 0xdeadbeef;
    VAR_17 = sizeof(DWORD);
    VAR_18 = FUNC_2(VAR_14, VAR_8, (BYTE*)&VAR_16, &VAR_17, 0);
    FUNC_9(VAR_18, "%08x\n", FUNC_5());
    FUNC_9(VAR_16 ==
        (VAR_5|VAR_7|VAR_6|VAR_3|VAR_1|VAR_2) ||
        FUNC_6(VAR_16 == 0xffffffff),
        "expected CRYPT_MAC|CRYPT_WRITE|CRYPT_READ|CRYPT_EXPORT|CRYPT_DECRYPT|CRYPT_ENCRYPT,"
        " got %08x\n", VAR_16);


    VAR_18 = FUNC_1(VAR_14, 0, VAR_12, 0, ((void*)0), &VAR_17);
    FUNC_9(VAR_18, "%08x\n", FUNC_5());

    VAR_18 = FUNC_1(VAR_14, 0, VAR_11, 0, ((void*)0), &VAR_17);
    FUNC_9(VAR_18, "%08x\n", FUNC_5());

    VAR_16 &= ~VAR_3;
    VAR_18 = FUNC_4(VAR_14, VAR_8, (BYTE *)&VAR_16, 0);
    FUNC_9(VAR_18 ||
        FUNC_6(!VAR_18 && FUNC_5() == VAR_9) ||
        FUNC_6(!VAR_18 && FUNC_5() == VAR_10),
        "%08x\n", FUNC_5());

    VAR_16 = 0xdeadbeef;
    VAR_17 = sizeof(DWORD);
    VAR_18 = FUNC_2(VAR_14, VAR_8, (BYTE*)&VAR_16, &VAR_17, 0);
    FUNC_9(VAR_18, "%08x\n", FUNC_5());
    FUNC_9(VAR_16 ==
        (VAR_5|VAR_7|VAR_6|VAR_3|VAR_1|VAR_2) ||
        FUNC_6(VAR_16 == 0xffffffff),
        "expected CRYPT_MAC|CRYPT_WRITE|CRYPT_READ|CRYPT_EXPORT|CRYPT_DECRYPT|CRYPT_ENCRYPT,"
        " got %08x\n", VAR_16);



    VAR_18 = FUNC_1(VAR_14, 0, VAR_11, 0, ((void*)0), &VAR_17);
    FUNC_9(VAR_18, "%08x\n", FUNC_5());

    VAR_18 = FUNC_3(VAR_13, VAR_0, &VAR_15);
    FUNC_9 (VAR_18, "%08x\n", FUNC_5());




    VAR_16 = 0xdeadbeef;
    VAR_17 = sizeof(DWORD);
    VAR_18 = FUNC_2(VAR_15, VAR_8, (BYTE*)&VAR_16, &VAR_17, 0);
    FUNC_9(VAR_18, "%08x\n", FUNC_5());
    FUNC_9(VAR_16 ==
        (VAR_5|VAR_7|VAR_6|VAR_3|VAR_1|VAR_2) ||
        FUNC_6(VAR_16 == 0xffffffff),
        "expected CRYPT_MAC|CRYPT_WRITE|CRYPT_READ|CRYPT_EXPORT|CRYPT_DECRYPT|CRYPT_ENCRYPT,"
        " got %08x\n", VAR_16);

    FUNC_0(VAR_15);
    FUNC_0(VAR_14);

    FUNC_7();
}

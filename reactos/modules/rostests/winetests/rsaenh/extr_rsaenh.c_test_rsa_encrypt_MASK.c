
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int abData ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int,int ,char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ,char*,int*,int) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int*) ;
 int FUNC_4 (int ,int ,char*,int*,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (int) ;
 int VAR_23 ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_24 ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    HCRYPTKEY VAR_25;
    BYTE VAR_26[2048] = "Wine rocks!";
    BOOL VAR_27;
    DWORD VAR_28, VAR_29;
    DWORD VAR_30;


    VAR_27 = FUNC_5(VAR_24, VAR_0, &VAR_25);
    FUNC_12 (VAR_27, "%08x\n", FUNC_7());
    if (!VAR_27) return;

    VAR_29 = 12;
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, 0, ((void*)0), &VAR_29, (DWORD)sizeof(VAR_26));
    if(!VAR_9 && !VAR_27 && FUNC_7() == VAR_16)
    {
        FUNC_1(VAR_25);
        return;
    }
    FUNC_12(VAR_27, "CryptEncrypt failed: %08x\n", FUNC_7());
    FUNC_12(VAR_29 == 128, "Unexpected length %d\n", VAR_29);

    VAR_29 = 12;
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, 0, VAR_26, &VAR_29, (DWORD)sizeof(VAR_26));
    FUNC_12 (VAR_27, "%08x\n", FUNC_7());
    if (!VAR_27) return;

    VAR_27 = FUNC_0(VAR_25, 0, VAR_23, 0, VAR_26, &VAR_29);
    FUNC_12 (VAR_27 && VAR_29 == 12 && !FUNC_10(VAR_26, "Wine rocks!", 12), "%08x\n", FUNC_7());



    VAR_29 = 1;
    FUNC_8(0xdeadbeef);
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29, 20 * 2 + 2);
    VAR_30 = FUNC_7();
    FUNC_12(!VAR_27 && VAR_30 == VAR_10, "%08x\n", VAR_30);


    VAR_29 = sizeof(VAR_26) - (20 * 2 + 2) + 1;
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29, (DWORD)sizeof(VAR_26));
    VAR_30 = FUNC_7();
    FUNC_12(!VAR_27 && VAR_30 == VAR_18, "%08x\n", VAR_30);


    VAR_29 = 12;
    FUNC_8(0xdeadbeef);
    FUNC_11(VAR_26, "Wine rocks!", VAR_29);
    VAR_27 = FUNC_0(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29);
    VAR_30 = FUNC_7();

    FUNC_12(!VAR_27 && (VAR_30 == VAR_14 || FUNC_9(VAR_30 == VAR_19)), "%08x\n", VAR_30);


    VAR_29 = 12;
    FUNC_8(0xdeadbeef);
    FUNC_11(VAR_26, "Wine rocks!", 12);
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29, (DWORD)sizeof(VAR_26));
    FUNC_12(VAR_27, "%08x\n", FUNC_7());
    VAR_29 = 11;
    FUNC_8(0xdeadbeef);
    VAR_27 = FUNC_0(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29);
    VAR_30 = FUNC_7();

    FUNC_12((!VAR_27 && VAR_29 == 11 && VAR_30 == VAR_14) || FUNC_9(VAR_27 == VAR_23 && VAR_29 == 12 && VAR_30 == VAR_11),
       "%08x %d %08x\n", VAR_27, VAR_29, VAR_30);


    VAR_29 = 12;
    FUNC_11(VAR_26, "Wine rocks!", VAR_29);
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29, (DWORD)sizeof(VAR_26));
    FUNC_12(VAR_27, "%08x\n", FUNC_7());
    VAR_27 = FUNC_0(VAR_25, 0, VAR_23, VAR_6, VAR_26, &VAR_29);
    FUNC_12(VAR_27 && VAR_29 == 12 && !FUNC_10(VAR_26, "Wine rocks!", 12), "%08x\n", FUNC_7());

    VAR_28 = 0xdeadbeef;
    VAR_29 = sizeof(DWORD);
    VAR_27 = FUNC_4(VAR_25, VAR_12, (BYTE*)&VAR_28, &VAR_29, 0);
    FUNC_12(VAR_27, "%08x\n", FUNC_7());
    FUNC_12(VAR_28 ==
        (VAR_5|VAR_8|VAR_7|VAR_2|VAR_3) ||
        FUNC_9(VAR_28 == 0xffffffff),
        "expected CRYPT_MAC|CRYPT_WRITE|CRYPT_READ|CRYPT_DECRYPT|CRYPT_ENCRYPT,"
        " got %08x\n", VAR_28);


    VAR_27 = FUNC_4(VAR_25, VAR_13, ((void*)0), &VAR_29, 0);
    FUNC_12(!VAR_27 && (FUNC_7() == VAR_16 || FUNC_7() == VAR_20 ),
       "expected NTE_BAD_KEY or NTE_NOT_FOUND, got %08x\n", FUNC_7());


    VAR_27 = FUNC_3(VAR_25, 0, VAR_22, 0, ((void*)0), &VAR_29);
    FUNC_12(VAR_27, "%08x\n", FUNC_7());

    FUNC_8(0xdeadbeef);
    VAR_27 = FUNC_3(VAR_25, 0, VAR_21, 0, ((void*)0), &VAR_29);
    FUNC_12((!VAR_27 && FUNC_7() == VAR_17) ||
        FUNC_9(VAR_27),
        "expected NTE_BAD_KEY_STATE, got %08x\n", FUNC_7());

    VAR_28 |= VAR_4;
    FUNC_8(0xdeadbeef);
    VAR_27 = FUNC_6(VAR_25, VAR_12, (BYTE *)&VAR_28, 0);
    FUNC_12(!VAR_27 &&
        (FUNC_7() == VAR_14 || FUNC_7() == VAR_15),
        "expected NTE_BAD_DATA or NTE_BAD_FLAGS, got %08x\n", FUNC_7());

    FUNC_1(VAR_25);


    VAR_27 = FUNC_5(VAR_24, VAR_1, &VAR_25);
    FUNC_12 (VAR_27, "%08x\n", FUNC_7());
    if (!VAR_27) return;

    VAR_28 = 0xdeadbeef;
    VAR_29 = sizeof(DWORD);
    VAR_27 = FUNC_4(VAR_25, VAR_12, (BYTE*)&VAR_28, &VAR_29, 0);
    FUNC_12(VAR_27, "%08x\n", FUNC_7());
    FUNC_12(VAR_28 ==
        (VAR_5|VAR_8|VAR_7|VAR_2|VAR_3) ||
        FUNC_9(VAR_28 == 0xffffffff),
        "expected CRYPT_MAC|CRYPT_WRITE|CRYPT_READ|CRYPT_DECRYPT|CRYPT_ENCRYPT,"
        " got %08x\n", VAR_28);


    VAR_27 = FUNC_3(VAR_25, 0, VAR_22, 0, ((void*)0), &VAR_29);
    FUNC_12(VAR_27, "%08x\n", FUNC_7());

    FUNC_8(0xdeadbeef);
    VAR_27 = FUNC_3(VAR_25, 0, VAR_21, 0, ((void*)0), &VAR_29);
    FUNC_12((!VAR_27 && FUNC_7() == VAR_17) ||
        FUNC_9(VAR_27),
        "expected NTE_BAD_KEY_STATE, got %08x\n", FUNC_7());

    VAR_28 |= VAR_4;
    FUNC_8(0xdeadbeef);
    VAR_27 = FUNC_6(VAR_25, VAR_12, (BYTE *)&VAR_28, 0);
    FUNC_12(!VAR_27 &&
        (FUNC_7() == VAR_14 || FUNC_7() == VAR_15),
        "expected NTE_BAD_DATA or NTE_BAD_FLAGS, got %08x\n", FUNC_7());

    VAR_29 = 12;
    VAR_27 = FUNC_2(VAR_25, 0, VAR_23, 0, VAR_26, &VAR_29, (DWORD)sizeof(VAR_26));
    FUNC_12 (!VAR_27 && FUNC_7() == VAR_16, "%08x\n", FUNC_7());

    FUNC_1(VAR_25);
}

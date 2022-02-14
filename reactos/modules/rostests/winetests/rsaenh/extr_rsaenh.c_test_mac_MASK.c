
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac_40 ;
typedef int abData ;
typedef int HCRYPTKEY ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int*,int*,int) ;
 int FUNC_5 (int ,int ,int*,int*,int ) ;
 int FUNC_6 (int ,int*,int,int ) ;
 scalar_t__ FUNC_7 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int *,int) ;
 int VAR_6 ;
 int FUNC_11 (int*,int const*,int) ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void) {
    HCRYPTKEY VAR_7;
    HCRYPTHASH VAR_8;
    BOOL VAR_9;
    DWORD VAR_10;
    BYTE VAR_11[256], VAR_12[264];
    static const BYTE VAR_13[8] = { 0xb7, 0xa2, 0x46, 0xe9, 0x11, 0x31, 0xe0, 0xad};
    int VAR_14;

    for (VAR_14=0; VAR_14 < FUNC_0(VAR_11); VAR_14++) VAR_11[VAR_14] = (BYTE)VAR_14;
    for (VAR_14=0; VAR_14 < FUNC_0(VAR_11); VAR_14++) VAR_12[VAR_14] = (BYTE)VAR_14;

    if (!FUNC_10(VAR_1, &VAR_7, 40)) return;

    VAR_10 = 256;
    VAR_9 = FUNC_4(VAR_7, 0, VAR_5, 0, VAR_12, &VAR_10, 264);
    FUNC_12 (VAR_9 && VAR_10 == 264, "%08x, dwLen: %d\n", FUNC_7(), VAR_10);

    VAR_9 = FUNC_1(VAR_6, VAR_0, VAR_7, 0, &VAR_8);
    FUNC_12(VAR_9, "%08x\n", FUNC_7());
    if (!VAR_9) return;

    VAR_9 = FUNC_6(VAR_8, VAR_11, sizeof(VAR_11), 0);
    FUNC_12(VAR_9, "%08x\n", FUNC_7());

    VAR_10 = FUNC_0(VAR_11);
    VAR_9 = FUNC_5(VAR_8, VAR_3, VAR_11, &VAR_10, 0);
    FUNC_12(VAR_9 && VAR_10 == 8, "%08x, dwLen: %d\n", FUNC_7(), VAR_10);

    FUNC_12(!FUNC_11(VAR_11, VAR_13, sizeof(VAR_13)), "MAC failed!\n");

    VAR_9 = FUNC_2(VAR_8);
    FUNC_12(VAR_9, "%08x\n", FUNC_7());

    VAR_9 = FUNC_3(VAR_7);
    FUNC_12(VAR_9, "%08x\n", FUNC_7());


    if (!FUNC_10(VAR_2, &VAR_7, 56)) return;

    FUNC_8(0xdeadbeef);
    VAR_9 = FUNC_1(VAR_6, VAR_0, VAR_7, 0, &VAR_8);
    FUNC_12((!VAR_9 && FUNC_7() == VAR_4) ||
            FUNC_9(VAR_9),
            "%08x\n", FUNC_7());

    VAR_9 = FUNC_3(VAR_7);
    FUNC_12(VAR_9, "%08x\n", FUNC_7());
}

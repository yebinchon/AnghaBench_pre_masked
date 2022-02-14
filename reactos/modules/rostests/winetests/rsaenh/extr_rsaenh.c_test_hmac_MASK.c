
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hmac ;
typedef int abData ;
struct TYPE_2__ {int member_4; int * member_3; int member_2; int * member_1; int member_0; } ;
typedef TYPE_1__ HMAC_INFO ;
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
 int FUNC_4 (int ,int ,int*,int*,int ) ;
 int FUNC_5 (int ,int*,int,int ) ;
 int FUNC_6 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int *,int) ;
 int VAR_6 ;
 int FUNC_9 (int*,int const*,int) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void) {
    HCRYPTKEY VAR_7;
    HCRYPTHASH VAR_8;
    BOOL VAR_9;

    HMAC_INFO VAR_10 = { VAR_1, ((void*)0), 0, ((void*)0), 0 };
    DWORD VAR_11;
    BYTE VAR_12[256];
    static const BYTE VAR_13[16] = {
        0x1a, 0x7d, 0x49, 0xc5, 0x9b, 0x2d, 0x0b, 0x9c,
        0xcf, 0x10, 0x6b, 0xb6, 0x7d, 0x0f, 0x13, 0x32 };
    int VAR_14;

    for (VAR_14=0; VAR_14 < FUNC_0(VAR_12); VAR_14++) VAR_12[VAR_14] = (BYTE)VAR_14;

    if (!FUNC_8(VAR_2, &VAR_7, 56)) return;

    VAR_9 = FUNC_1(VAR_6, VAR_0, VAR_7, 0, &VAR_8);
    FUNC_10(VAR_9, "%08x\n", FUNC_7());
    if (!VAR_9) return;

    VAR_9 = FUNC_6(VAR_8, VAR_4, (BYTE*)&VAR_10, 0);
    FUNC_10(VAR_9, "%08x\n", FUNC_7());

    VAR_9 = FUNC_5(VAR_8, VAR_12, sizeof(VAR_12), 0);
    FUNC_10(VAR_9, "%08x\n", FUNC_7());

    VAR_11 = FUNC_0(VAR_12);
    VAR_9 = FUNC_4(VAR_8, VAR_3, VAR_12, &VAR_11, 0);
    FUNC_10(VAR_9, "%08x\n", FUNC_7());

    FUNC_10(!FUNC_9(VAR_12, VAR_13, sizeof(VAR_13)), "HMAC failed!\n");

    VAR_9 = FUNC_2(VAR_8);
    FUNC_10(VAR_9, "%08x\n", FUNC_7());

    VAR_9 = FUNC_3(VAR_7);
    FUNC_10(VAR_9, "%08x\n", FUNC_7());


    VAR_9 = FUNC_1(VAR_6, VAR_0, 0, 0, &VAR_8);
    FUNC_10(!VAR_9 && FUNC_7() == VAR_5, "%08x\n", FUNC_7());
}

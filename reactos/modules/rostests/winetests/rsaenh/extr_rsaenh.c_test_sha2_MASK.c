
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pbData ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int*,int ) ;
 int FUNC_3 (int ,unsigned char*,int,int ) ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int *,unsigned char const*,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const unsigned char VAR_7[32] = {
        0x10, 0xfc, 0x3c, 0x51, 0xa1, 0x52, 0xe9, 0x0e, 0x5b, 0x90,
        0x31, 0x9b, 0x60, 0x1d, 0x92, 0xcc, 0xf3, 0x72, 0x90, 0xef,
        0x53, 0xc3, 0x5f, 0xf9, 0x25, 0x07, 0x68, 0x7d, 0x8a, 0x91,
        0x1a, 0x08
    };
    static const unsigned char VAR_8[48] = {
        0x98, 0xd3, 0x3f, 0x89, 0x0b, 0x23, 0x33, 0x44, 0x61, 0x32,
        0x5a, 0x7c, 0xa3, 0x03, 0x89, 0xb5, 0x11, 0xd7, 0x41, 0xc8,
        0x54, 0x6b, 0x12, 0x0c, 0x40, 0x15, 0xb6, 0x2a, 0x03, 0x43,
        0xe5, 0x64, 0x7f, 0x10, 0x1e, 0xae, 0x47, 0xa9, 0x39, 0x05,
        0x6f, 0x40, 0x60, 0x94, 0xd6, 0xad, 0x80, 0x55
    };
    static const unsigned char VAR_9[64] = {
        0x37, 0x86, 0x0e, 0x7d, 0x25, 0xd9, 0xf9, 0x84, 0x3e, 0x3d,
        0xc7, 0x13, 0x95, 0x73, 0x42, 0x04, 0xfd, 0x13, 0xad, 0x23,
        0x39, 0x16, 0x32, 0x5f, 0x99, 0x3e, 0x3c, 0xee, 0x3f, 0x11,
        0x36, 0xf9, 0xc9, 0x66, 0x08, 0x70, 0xcc, 0x49, 0xd8, 0xe0,
        0x7d, 0xa1, 0x57, 0x62, 0x71, 0xa6, 0xc9, 0xa4, 0x24, 0x60,
        0xfc, 0xde, 0x9d, 0xb2, 0xf1, 0xd2, 0xc2, 0xfb, 0x2d, 0xbf,
        0xb7, 0xf4, 0x81, 0xd4
    };
    unsigned char VAR_10[2048];
    BOOL VAR_11;
    HCRYPTHASH VAR_12;
    BYTE VAR_13[64];
    DWORD VAR_14, VAR_15;
    int VAR_16;

    for (VAR_16=0; VAR_16<2048; VAR_16++) VAR_10[VAR_16] = (unsigned char)VAR_16;


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_0(VAR_6, VAR_0, 0, 0, &VAR_12);
    if (!VAR_11 && FUNC_4() == VAR_5) {
        FUNC_8("SHA-256/384/512 hashes are not supported before Windows XP SP3\n");
        return;
    }
    FUNC_7(VAR_11, "%08x\n", FUNC_4());
    if (VAR_11) {
        VAR_15 = sizeof(DWORD);
        VAR_11 = FUNC_2(VAR_12, VAR_3, (BYTE*)&VAR_14, &VAR_15, 0);
        FUNC_7(VAR_11 && (VAR_14 == 32), "%08x, hashlen: %d\n", FUNC_4(), VAR_14);

        VAR_11 = FUNC_3(VAR_12, VAR_10, sizeof(VAR_10), 0);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());

        VAR_15 = 32;
        VAR_11 = FUNC_2(VAR_12, VAR_4, VAR_13, &VAR_15, 0);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());

        FUNC_7(!FUNC_6(VAR_13, VAR_7, 32), "Wrong SHA-256 hash!\n");

        VAR_11 = FUNC_1(VAR_12);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());
    }


    VAR_11 = FUNC_0(VAR_6, VAR_1, 0, 0, &VAR_12);
    FUNC_7(VAR_11, "%08x\n", FUNC_4());
    if (VAR_11) {
        VAR_15 = sizeof(DWORD);
        VAR_11 = FUNC_2(VAR_12, VAR_3, (BYTE*)&VAR_14, &VAR_15, 0);
        FUNC_7(VAR_11 && (VAR_14 == 48), "%08x, hashlen: %d\n", FUNC_4(), VAR_14);

        VAR_11 = FUNC_3(VAR_12, VAR_10, sizeof(VAR_10), 0);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());

        VAR_15 = 48;
        VAR_11 = FUNC_2(VAR_12, VAR_4, VAR_13, &VAR_15, 0);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());

        FUNC_7(!FUNC_6(VAR_13, VAR_8, 48), "Wrong SHA-384 hash!\n");

        VAR_11 = FUNC_1(VAR_12);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());
    }


    VAR_11 = FUNC_0(VAR_6, VAR_2, 0, 0, &VAR_12);
    FUNC_7(VAR_11, "%08x\n", FUNC_4());
    if (VAR_11) {
        VAR_15 = sizeof(DWORD);
        VAR_11 = FUNC_2(VAR_12, VAR_3, (BYTE*)&VAR_14, &VAR_15, 0);
        FUNC_7(VAR_11 && (VAR_14 == 64), "%08x, hashlen: %d\n", FUNC_4(), VAR_14);

        VAR_11 = FUNC_3(VAR_12, VAR_10, sizeof(VAR_10), 0);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());

        VAR_15 = 64;
        VAR_11 = FUNC_2(VAR_12, VAR_4, VAR_13, &VAR_15, 0);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());

        FUNC_7(!FUNC_6(VAR_13, VAR_9, 64), "Wrong SHA-512 hash!\n");

        VAR_11 = FUNC_1(VAR_12);
        FUNC_7(VAR_11, "%08x\n", FUNC_4());
    }
}

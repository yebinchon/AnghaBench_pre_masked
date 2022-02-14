
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int GLenum ;
typedef unsigned int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 unsigned int* FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,unsigned int,unsigned int,int *,int ,int *,unsigned int) ;

__attribute__((used)) static inline BOOL FUNC_6(const BYTE *VAR_2, BYTE *VAR_3, DWORD VAR_4,
        DWORD VAR_5, unsigned int VAR_6, unsigned int VAR_7, GLenum VAR_8, BOOL VAR_9)
{
    static const unsigned char VAR_10[] =
    {
        0x00, 0x08, 0x10, 0x19, 0x21, 0x29, 0x31, 0x3a,
        0x42, 0x4a, 0x52, 0x5a, 0x63, 0x6b, 0x73, 0x7b,
        0x84, 0x8c, 0x94, 0x9c, 0xa5, 0xad, 0xb5, 0xbd,
        0xc5, 0xce, 0xd6, 0xde, 0xe6, 0xef, 0xf7, 0xff,
    };
    unsigned int VAR_11, VAR_12;
    DWORD *VAR_13;
    WORD VAR_14;

    FUNC_4("Converting %ux%u pixels, pitches %u %u.\n", VAR_6, VAR_7, VAR_4, VAR_5);

    VAR_13 = FUNC_2(FUNC_1(), 0, VAR_7 * VAR_6 * sizeof(DWORD));
    if (!VAR_13)
    {
        FUNC_0("Failed to allocate memory for conversion\n");
        return VAR_0;
    }

    for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12)
    {
        const WORD *VAR_15 = (const WORD *)(VAR_2 + VAR_12 * VAR_4);
        DWORD *VAR_16 = VAR_13 + VAR_12 * VAR_6;
        for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11)
        {
            VAR_14 = VAR_15[VAR_11];
            if (VAR_9)
            {
                VAR_16[VAR_11] = ((VAR_14 & 0x8000) ? 0xff000000 : 0) |
                              VAR_10[(VAR_14 & 0x001f)] << 16 |
                              VAR_10[(VAR_14 & 0x03e0) >> 5] << 8 |
                              VAR_10[(VAR_14 & 0x7c00) >> 10];
            }
            else
            {
                VAR_16[VAR_11] = 0xff000000 |
                              VAR_10[(VAR_14 & 0x001f)] << 16 |
                              VAR_10[(VAR_14 & 0x03e0) >> 5] << 8 |
                              VAR_10[(VAR_14 & 0x7c00) >> 10];
            }
        }
    }

    FUNC_5(4, VAR_6, VAR_7, (BYTE *)VAR_13, VAR_8, VAR_3, VAR_5);
    FUNC_3(FUNC_1(), 0, VAR_13);
    return VAR_1;
}

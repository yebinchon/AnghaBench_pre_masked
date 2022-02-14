
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef unsigned int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int const*,unsigned int,unsigned int,unsigned int*) ;

__attribute__((used)) static inline BOOL FUNC_2(const BYTE *VAR_1, BYTE *VAR_2, DWORD VAR_3,
        DWORD VAR_4, unsigned int VAR_5, unsigned int VAR_6, BOOL VAR_7)
{
    unsigned int VAR_8, VAR_9;
    DWORD VAR_10;

    FUNC_0("Converting %ux%u pixels, pitches %u %u\n", VAR_5, VAR_6, VAR_3, VAR_4);

    for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
    {
        WORD *VAR_11 = (WORD *)(VAR_2 + VAR_9 * VAR_4);
        for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8)
        {

            FUNC_1(0, VAR_1 + (VAR_9 / 4) * VAR_3 + (VAR_8 / 4) * 16,
                                      VAR_8 & 3, VAR_9 & 3, &VAR_10);
            if (VAR_7)
            {
                VAR_11[VAR_8] = ((VAR_10 & 0x80000000) >> 16) | ((VAR_10 & 0xf80000) >> 19) |
                              ((VAR_10 & 0xf800) >> 6) | ((VAR_10 & 0xf8) << 7);
            }
            else
            {
                VAR_11[VAR_8] = 0x8000 | ((VAR_10 & 0xf80000) >> 19) |
                              ((VAR_10 & 0xf800) >> 6) | ((VAR_10 & 0xf8) << 7);
            }
        }
    }

    return VAR_0;
}

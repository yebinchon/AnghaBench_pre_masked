
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef unsigned int DWORD ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const BYTE *VAR_0, BYTE *VAR_1,
        DWORD VAR_2, DWORD VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
    unsigned int VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

    FUNC_0("Converting %ux%u pixels, pitches %u %u\n", VAR_4, VAR_5, VAR_2, VAR_3);

    for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
    {
        const BYTE *VAR_14 = VAR_0 + VAR_7 * VAR_2;
        WORD *VAR_15 = (WORD *)(VAR_1 + VAR_7 * VAR_3);
        for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
        {







            if (!(VAR_6 & 1))
            {
                VAR_9 = (int) VAR_14[1] - 128;
                VAR_10 = (int) VAR_14[3] - 128;
                VAR_11 = 409 * VAR_10 + 128;
                VAR_12 = - 100 * VAR_9 - 208 * VAR_10 + 128;
                VAR_13 = 516 * VAR_9 + 128;
            }
            VAR_8 = 298 * ((int) VAR_14[0] - 16);
            VAR_15[VAR_6] = (FUNC_1((VAR_8 + VAR_11) >> 8) >> 3) << 11
                | (FUNC_1((VAR_8 + VAR_12) >> 8) >> 2) << 5
                | (FUNC_1((VAR_8 + VAR_13) >> 8) >> 3);



            VAR_14 += 2;
        }
    }
}

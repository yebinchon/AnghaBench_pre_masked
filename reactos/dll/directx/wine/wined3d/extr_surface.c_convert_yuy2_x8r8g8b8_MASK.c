
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int DWORD ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const BYTE *VAR_0, BYTE *VAR_1,
        DWORD VAR_2, DWORD VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
    unsigned int VAR_12, VAR_13;

    FUNC_0("Converting %ux%u pixels, pitches %u %u.\n", VAR_4, VAR_5, VAR_2, VAR_3);

    for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13)
    {
        const BYTE *VAR_14 = VAR_0 + VAR_13 * VAR_2;
        DWORD *VAR_15 = (DWORD *)(VAR_1 + VAR_13 * VAR_3);
        for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12)
        {







            if (!(VAR_12 & 1))
            {
                VAR_7 = (int) VAR_14[1] - 128;
                VAR_8 = (int) VAR_14[3] - 128;
                VAR_9 = 409 * VAR_8 + 128;
                VAR_10 = - 100 * VAR_7 - 208 * VAR_8 + 128;
                VAR_11 = 516 * VAR_7 + 128;
            }
            VAR_6 = 298 * ((int) VAR_14[0] - 16);
            VAR_15[VAR_12] = 0xff000000
                | FUNC_1((VAR_6 + VAR_9) >> 8) << 16
                | FUNC_1((VAR_6 + VAR_10) >> 8) << 8
                | FUNC_1((VAR_6 + VAR_11) >> 8);



            VAR_14 += 2;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef unsigned int UINT ;
typedef int DWORD ;
typedef int BYTE ;



__attribute__((used)) static void FUNC_0(const BYTE *VAR_0, BYTE *VAR_1, UINT VAR_2, UINT VAR_3,
        UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8)
{
    unsigned int VAR_9, VAR_10, VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
        for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10)
        {
            const WORD *VAR_12 = (const WORD *)(VAR_0 + VAR_11 * VAR_3 + VAR_10 * VAR_2);
            DWORD *VAR_13 = (DWORD *)(VAR_1 + VAR_11 * VAR_5 + VAR_10 * VAR_4);

            for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
            {



                WORD VAR_14 = VAR_12[VAR_9] >> 1;
                DWORD VAR_15 = (VAR_14 << 9) + (VAR_14 >> 6);
                VAR_13[VAR_9] = (VAR_15 << 8) | (VAR_12[VAR_9] & 0x1);
            }
        }
    }
}

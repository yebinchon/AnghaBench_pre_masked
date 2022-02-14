
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT ;
typedef int DWORD ;
typedef int BYTE ;


 float FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(const BYTE *VAR_0, BYTE *VAR_1, UINT VAR_2, UINT VAR_3,
        UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8)
{
    unsigned int VAR_9, VAR_10, VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
        for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10)
        {
            const DWORD *VAR_12 = (const DWORD *)(VAR_0 + VAR_11 * VAR_3 + VAR_10 * VAR_2);
            float *VAR_13 = (float *)(VAR_1 + VAR_11 * VAR_5 + VAR_10 * VAR_4);
            DWORD *VAR_14 = (DWORD *)VAR_13;

            for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
            {
                VAR_13[VAR_9 * 2] = FUNC_0((VAR_12[VAR_9] & 0xffffff00u) >> 8);
                VAR_14[VAR_9 * 2 + 1] = VAR_12[VAR_9] & 0xff;
            }
        }
    }
}

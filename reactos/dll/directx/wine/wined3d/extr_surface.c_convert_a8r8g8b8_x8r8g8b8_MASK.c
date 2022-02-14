
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(const BYTE *VAR_0, BYTE *VAR_1,
        DWORD VAR_2, DWORD VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
    unsigned int VAR_6, VAR_7;

    FUNC_0("Converting %ux%u pixels, pitches %u %u.\n", VAR_4, VAR_5, VAR_2, VAR_3);

    for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
    {
        const DWORD *VAR_8 = (const DWORD *)(VAR_0 + VAR_7 * VAR_2);
        DWORD *VAR_9 = (DWORD *)(VAR_1 + VAR_7 * VAR_3);

        for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
        {
            VAR_9[VAR_6] = 0xff000000 | (VAR_8[VAR_6] & 0xffffff);
        }
    }
}

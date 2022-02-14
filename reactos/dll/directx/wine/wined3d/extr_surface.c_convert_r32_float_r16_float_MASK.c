
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned short FUNC_1 (float const*) ;

__attribute__((used)) static void FUNC_2(const BYTE *VAR_0, BYTE *VAR_1,
        DWORD VAR_2, DWORD VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
    unsigned short *VAR_6;
    const float *VAR_7;
    unsigned int VAR_8, VAR_9;

    FUNC_0("Converting %ux%u pixels, pitches %u %u.\n", VAR_4, VAR_5, VAR_2, VAR_3);

    for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9)
    {
        VAR_7 = (const float *)(VAR_0 + VAR_9 * VAR_2);
        VAR_6 = (unsigned short *) (VAR_1 + VAR_9 * VAR_3);
        for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
        {
            VAR_6[VAR_8] = FUNC_1(VAR_7 + VAR_8);
        }
    }
}

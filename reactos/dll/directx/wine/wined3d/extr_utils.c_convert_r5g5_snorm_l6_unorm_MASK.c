
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT ;
typedef int BYTE ;



__attribute__((used)) static void FUNC_0(const BYTE *VAR_0, BYTE *VAR_1, UINT VAR_2, UINT VAR_3,
        UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8)
{
    unsigned int VAR_9, VAR_10, VAR_11;
    unsigned char VAR_12, VAR_13, VAR_14;
    const unsigned short *VAR_15;
    unsigned short *VAR_16;





    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
        {
            VAR_16 = (unsigned short *) (VAR_1 + VAR_11 * VAR_5 + VAR_10 * VAR_4);
            VAR_15 = (const unsigned short *)(VAR_0 + VAR_11 * VAR_3 + VAR_10 * VAR_2);
            for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ )
            {
                VAR_14 = (*VAR_15 & 0xfc00u) >> 10;
                VAR_13 = (*VAR_15 & 0x03e0u) >> 5;
                VAR_12 = *VAR_15 & 0x001fu;

                *VAR_16 = ((VAR_12 + 16) << 11) | (VAR_14 << 5) | (VAR_13 + 16);
                VAR_16++;
                VAR_15++;
            }
        }
    }
}

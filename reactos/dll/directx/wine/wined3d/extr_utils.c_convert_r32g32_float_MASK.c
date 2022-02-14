
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
    const float *VAR_12;
    float *VAR_13;

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
        {
            VAR_12 = (const float *)(VAR_0 + VAR_11 * VAR_3 + VAR_10 * VAR_2);
            VAR_13 = (float *) (VAR_1 + VAR_11 * VAR_5 + VAR_10 * VAR_4);
            for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ )
            {
                float VAR_14 = (*VAR_12++);
                float VAR_15 = (*VAR_12++);
                VAR_13[0] = VAR_14;
                VAR_13[1] = VAR_15;
                VAR_13[2] = 1.0f;
                VAR_13 += 3;
            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float** D3DRMMATRIX4D ;



__attribute__((used)) static void FUNC_0(D3DRMMATRIX4D VAR_0)
{
    unsigned int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < 4; ++VAR_1)
    {
        for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
        {
            if (VAR_0[VAR_1][VAR_2] > -1e-7f && VAR_0[VAR_1][VAR_2] < 1e-7f)
                VAR_0[VAR_1][VAR_2] = 0.0f;
        }
    }
}

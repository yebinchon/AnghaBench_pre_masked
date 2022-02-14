
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argb_conversion_info {unsigned int* srcmask; unsigned int* srcshift; int * process_channel; } ;
typedef unsigned int DWORD ;
typedef unsigned int BYTE ;



__attribute__((used)) static void FUNC_0(const struct argb_conversion_info *VAR_0, const BYTE *VAR_1, DWORD *VAR_2)
{
    unsigned int VAR_3, VAR_4;
    unsigned int VAR_5, VAR_6;

    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
    {
        if (!VAR_0->process_channel[VAR_3])
            continue;

        VAR_5 = 0;
        VAR_6 = VAR_0->srcmask[VAR_3];
        for (VAR_4 = 0; VAR_4 < 4 && VAR_6; ++VAR_4)
        {
            if (VAR_0->srcshift[VAR_3] < VAR_4 * 8)
                VAR_5 |= (VAR_1[VAR_4] & VAR_6) << (VAR_4 * 8 - VAR_0->srcshift[VAR_3]);
            else
                VAR_5 |= (VAR_1[VAR_4] & VAR_6) >> (VAR_0->srcshift[VAR_3] - VAR_4 * 8);
            VAR_6 >>= 8;
        }
        VAR_2[VAR_3] = VAR_5;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const) ;
 scalar_t__ FUNC_1 (float const) ;
 scalar_t__ FUNC_2 (float const) ;

__attribute__((used)) static inline unsigned short FUNC_3(const float *VAR_0)
{
    int VAR_1 = 0;
    float VAR_2 = FUNC_0(*VAR_0);
    unsigned int VAR_3;
    unsigned short VAR_4;


    if (*VAR_0 == 0.0f)
        return 0x0000;
    if (FUNC_2(*VAR_0))
        return 0x7c01;
    if (FUNC_1(*VAR_0))
        return (*VAR_0 < 0.0f ? 0xfc00 : 0x7c00);

    if (VAR_2 < (float)(1u << 10))
    {
        do
        {
            VAR_2 = VAR_2 * 2.0f;
            VAR_1--;
        } while (VAR_2 < (float)(1u << 10));
    }
    else if (VAR_2 >= (float)(1u << 11))
    {
        do
        {
            VAR_2 /= 2.0f;
            VAR_1++;
        } while (VAR_2 >= (float)(1u << 11));
    }

    VAR_3 = (unsigned int)VAR_2;
    if (VAR_2 - VAR_3 >= 0.5f)
        ++VAR_3;

    VAR_1 += 10;
    VAR_1 += 15;

    if (VAR_1 > 30)
    {
        VAR_4 = 0x7c00;
    }
    else if (VAR_1 <= 0)
    {

        while (VAR_1 <= 0)
        {
            VAR_3 = VAR_3 >> 1;
            ++VAR_1;
        }
        VAR_4 = VAR_3 & 0x3ff;
    }
    else
    {
        VAR_4 = (VAR_1 << 10) | (VAR_3 & 0x3ff);
    }

    VAR_4 |= ((*VAR_0 < 0.0f ? 1 : 0) << 15);
    return VAR_4;
}

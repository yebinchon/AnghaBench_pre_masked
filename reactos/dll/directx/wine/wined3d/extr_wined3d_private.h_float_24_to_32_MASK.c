
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 float const VAR_0 ;
 float VAR_1 ;
 float const FUNC_0 (int,float) ;

__attribute__((used)) static inline float FUNC_1(DWORD VAR_2)
{
    const float VAR_3 = VAR_2 & 0x800000u ? -1.0f : 1.0f;
    const unsigned short VAR_4 = (VAR_2 & 0x780000u) >> 19;
    const unsigned int VAR_5 = VAR_2 & 0x7ffffu;

    if (VAR_4 == 0)
    {
        if (VAR_5 == 0) return VAR_3 * 0.0f;
        else return VAR_3 * FUNC_0(2, -6.0f) * ((float)VAR_5 / 524288.0f);
    }
    else if (VAR_4 < 15)
    {
        return VAR_3 * FUNC_0(2, (float)VAR_4 - 7.0f) * (1.0f + ((float)VAR_5 / 524288.0f));
    }
    else
    {
        if (VAR_5 == 0) return VAR_3 * VAR_0;
        else return VAR_1;
    }
}

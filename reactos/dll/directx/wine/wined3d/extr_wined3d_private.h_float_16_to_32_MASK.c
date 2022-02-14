
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const VAR_0 ;
 float VAR_1 ;
 float const FUNC_0 (int,float) ;

__attribute__((used)) static inline float FUNC_1(const unsigned short *VAR_2)
{
    const unsigned short VAR_3 = ((*VAR_2) & 0x8000u);
    const unsigned short VAR_4 = ((*VAR_2) & 0x7c00u) >> 10;
    const unsigned short VAR_5 = (*VAR_2) & 0x3ffu;
    const float VAR_6 = (VAR_3 ? -1.0f : 1.0f);

    if(VAR_4 == 0) {
        if(VAR_5 == 0) return VAR_6 * 0.0f;
        else return VAR_6 * FUNC_0(2, -14.0f) * ((float)VAR_5 / 1024.0f);
    } else if(VAR_4 < 31) {
        return VAR_6 * FUNC_0(2, (float)VAR_4 - 15.0f) * (1.0f + ((float)VAR_5 / 1024.0f));
    } else {
        if(VAR_5 == 0) return VAR_6 * VAR_0;
        else return VAR_1;
    }
}

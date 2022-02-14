
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 float VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static uint8_t FUNC_1(float VAR_1, float VAR_2, float VAR_3) {
    const float VAR_4 = VAR_0 * 2.0f;
    float VAR_5 = (1.0f - VAR_2 / (VAR_3 - 1.0f)) * VAR_4;
    float VAR_6 = VAR_1 * VAR_4 + VAR_5-VAR_0;
    if((1*VAR_0) < VAR_6 && VAR_6 < (3*VAR_0))
    {
      float VAR_7 = 0.5 * (FUNC_0(VAR_6) + 1.0f);
      return (uint8_t)(255.0f * VAR_7);
    }
    else
    {
      return 0;
    }
}

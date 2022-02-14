
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint16_t VAR_0) {







    float VAR_1 = 100.0f * (VAR_0 / 65535.0f);
    float VAR_2 = 0.0f;
    if (VAR_1 <= 8.0f) {
       VAR_2 = VAR_1 / 902.3;
    }
    else {
        VAR_2 = ((VAR_1 + 16.0f) / 116.0f);
        VAR_2 = VAR_2 * VAR_2 * VAR_2;
        if (VAR_2 > 1.0f) {
            VAR_2 = 1.0f;
        }
    }
    return VAR_2 * 65535.0f;
}

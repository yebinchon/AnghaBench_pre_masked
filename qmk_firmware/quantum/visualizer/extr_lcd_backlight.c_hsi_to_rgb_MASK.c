
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float,float) ;

__attribute__((used)) static void FUNC_3(float VAR_0, float VAR_1, float VAR_2, uint16_t* VAR_3, uint16_t* VAR_4, uint16_t* VAR_5) {
    unsigned int VAR_6, VAR_7, VAR_8;
    VAR_0 = FUNC_2(VAR_0, 360.0f);
    VAR_0 = 3.14159f * VAR_0 / 180.0f;
    VAR_1 = VAR_1 > 0.0f ? (VAR_1 < 1.0f ? VAR_1 : 1.0f) : 0.0f;
    VAR_2 = VAR_2 > 0.0f ? (VAR_2 < 1.0f ? VAR_2 : 1.0f) : 0.0f;


    if (VAR_0 < 2.09439f) {
        VAR_6 = 65535.0f * VAR_2 / 3.0f * (1.0f + VAR_1 * FUNC_0(VAR_0) / FUNC_1(1.047196667f - VAR_0));
        VAR_7 = 65535.0f * VAR_2 / 3.0f * (1.0f + VAR_1 * (1.0f - FUNC_1(VAR_0) / FUNC_0(1.047196667f - VAR_0)));
        VAR_8 = 65535.0f * VAR_2 / 3.0f * (1.0f - VAR_1);
    } else if (VAR_0 < 4.188787) {
        VAR_0 = VAR_0 - 2.09439;
        VAR_7 = 65535.0f * VAR_2 / 3.0f * (1.0f + VAR_1 * FUNC_1(VAR_0) / FUNC_1(1.047196667f - VAR_0));
        VAR_8 = 65535.0f * VAR_2 / 3.0f * (1.0f + VAR_1 * (1.0f - FUNC_1(VAR_0) / FUNC_1(1.047196667f - VAR_0)));
        VAR_6 = 65535.0f * VAR_2 / 3.0f * (1.0f - VAR_1);
    } else {
        VAR_0 = VAR_0 - 4.188787;
        VAR_8 = 65535.0f * VAR_2 / 3.0f * (1.0f + VAR_1 * FUNC_1(VAR_0) / FUNC_1(1.047196667f - VAR_0));
        VAR_6 = 65535.0f * VAR_2 / 3.0f * (1.0f + VAR_1 * (1.0f - FUNC_1(VAR_0) / FUNC_1(1.047196667f - VAR_0)));
        VAR_7 = 65535.0f * VAR_2 / 3.0f * (1.0f - VAR_1);
    }
    *VAR_3 = VAR_6 > 65535 ? 65535 : VAR_6;
    *VAR_4 = VAR_7 > 65535 ? 65535 : VAR_7;
    *VAR_5 = VAR_8 > 65535 ? 65535 : VAR_8;
}

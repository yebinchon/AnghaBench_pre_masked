
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(signed char *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2;
    int VAR_3;
    int VAR_4;

    for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
        VAR_0[VAR_2] = 1 & (VAR_1[VAR_2 >> 3] >> (VAR_2 & 7));
    }

    for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
        if (VAR_0[VAR_2]) {
            for (VAR_3 = 1; VAR_3 <= 6 && VAR_2 + VAR_3 < 256; ++VAR_3) {
                if (VAR_0[VAR_2 + VAR_3]) {
                    if (VAR_0[VAR_2] + (VAR_0[VAR_2 + VAR_3] << VAR_3) <= 15) {
                        VAR_0[VAR_2] += VAR_0[VAR_2 + VAR_3] << VAR_3;
                        VAR_0[VAR_2 + VAR_3] = 0;
                    } else if (VAR_0[VAR_2] - (VAR_0[VAR_2 + VAR_3] << VAR_3) >= -15) {
                        VAR_0[VAR_2] -= VAR_0[VAR_2 + VAR_3] << VAR_3;
                        for (VAR_4 = VAR_2 + VAR_3; VAR_4 < 256; ++VAR_4) {
                            if (!VAR_0[VAR_4]) {
                                VAR_0[VAR_4] = 1;
                                break;
                            }
                            VAR_0[VAR_4] = 0;
                        }
                    } else {
                        break;
                    }
                }
            }
        }
    }
}

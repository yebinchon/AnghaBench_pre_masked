
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const,char*,int) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0, uint16_t VAR_1)
{


    uint8_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    const uint8_t *VAR_8 = (uint8_t *)VAR_0 + FUNC_4(VAR_0) + 1;
    const uint8_t *VAR_9 = (uint8_t *)VAR_0 + VAR_1;
    char *VAR_10 = FUNC_2(VAR_1 + 1, 3);
    char *VAR_11 = VAR_10;
    char *VAR_12 = VAR_10 + VAR_1 * 3;

    if (!VAR_10)
        return ((void*)0);
    if (VAR_9 - VAR_8 <= 1) {
        FUNC_3(VAR_10, VAR_0, VAR_1);
        return VAR_10;
    }

    VAR_2 = *VAR_8++;
    VAR_3 = 0;
    VAR_4 = 0;
    VAR_5 = 0;

    while (VAR_8 < VAR_9 && VAR_11 < VAR_12) {
        if (VAR_4 == 0) {
            VAR_3 = *VAR_8++;
            VAR_4 = 8;
        }
        VAR_4 -= 2;
        switch ((VAR_3 >> VAR_4) & 3) {
        case 0:
            if (!(VAR_8 + 1 <= VAR_9)) { FUNC_0(VAR_10); return ((void*)0); } else ((void)0);
            VAR_11 += FUNC_1(*VAR_8++, VAR_11, VAR_12 - VAR_11);
            VAR_5++;
            break;
        case 1:
            if (!(VAR_8 + 1 <= VAR_9)) { FUNC_0(VAR_10); return ((void*)0); } else ((void)0);
            VAR_11 += FUNC_1(((uint16_t)VAR_2 << 8) | *VAR_8++, VAR_11, VAR_12 - VAR_11);
            VAR_5++;
            break;
        case 2:
            if (!(VAR_8 + 2 <= VAR_9)) { FUNC_0(VAR_10); return ((void*)0); } else ((void)0);
            VAR_11 += FUNC_1(((uint16_t)*(VAR_8 + 1) << 8) | *VAR_8, VAR_11, VAR_12 - VAR_11);
            VAR_8 += 2;
            VAR_5++;
            break;
        case 3:
            if (!(VAR_8 + 1 <= VAR_9)) { FUNC_0(VAR_10); return ((void*)0); } else ((void)0);
            VAR_6 = *VAR_8++;
            if ((VAR_6 & 0x80)) {
                uint8_t VAR_13 = *VAR_8++;
                for (VAR_7 = 0; VAR_7 < (VAR_6 & 0x7F) + 2; VAR_7++) {
                    if (!(VAR_5 < VAR_1)) { FUNC_0(VAR_10); return ((void*)0); } else ((void)0);
                    VAR_11 += FUNC_1(((uint16_t)VAR_2 << 8) | (VAR_0[VAR_5] + (VAR_13 & 0xFF)), VAR_11, VAR_12 - VAR_11);
                    VAR_5++;
                }
            }
            else {
                for (VAR_7 = 0; VAR_7 < (VAR_6 & 0x7F) + 2; VAR_7++) {
                    if (!(VAR_5 < VAR_1)) { FUNC_0(VAR_10); return ((void*)0); } else ((void)0);
                    VAR_11 += FUNC_1(VAR_0[VAR_5], VAR_11, VAR_12 - VAR_11);
                    VAR_5++;
                }
            }
            break;
        }
    }

    return VAR_10;


}

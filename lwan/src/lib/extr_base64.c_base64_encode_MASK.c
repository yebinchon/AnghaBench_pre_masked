
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 unsigned char* FUNC_0 (size_t) ;

unsigned char *
FUNC_1(const unsigned char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
    unsigned char *VAR_4, *VAR_5;
    const unsigned char *VAR_6, *VAR_7;
    size_t VAR_8;
    int VAR_9;

    VAR_8 = VAR_2 * 4 / 3 + 4;
    VAR_8 += VAR_8 / 72;
    VAR_8++;
    if (VAR_8 < VAR_2)
        return ((void*)0);
    VAR_4 = FUNC_0(VAR_8);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_6 = VAR_1 + VAR_2;
    VAR_7 = VAR_1;
    VAR_5 = VAR_4;
    VAR_9 = 0;
    while (VAR_6 - VAR_7 >= 3) {
        *VAR_5++ = VAR_0[VAR_7[0] >> 2];
        *VAR_5++ = VAR_0[((VAR_7[0] & 0x03) << 4) | (VAR_7[1] >> 4)];
        *VAR_5++ = VAR_0[((VAR_7[1] & 0x0f) << 2) | (VAR_7[2] >> 6)];
        *VAR_5++ = VAR_0[VAR_7[2] & 0x3f];
        VAR_7 += 3;
        VAR_9 += 4;
        if (VAR_9 >= 72) {
            *VAR_5++ = '\n';
            VAR_9 = 0;
        }
    }

    if (VAR_6 - VAR_7) {
        *VAR_5++ = VAR_0[VAR_7[0] >> 2];
        if (VAR_6 - VAR_7 == 1) {
            *VAR_5++ = VAR_0[(VAR_7[0] & 0x03) << 4];
            *VAR_5++ = '=';
        } else {
            *VAR_5++ = VAR_0[((VAR_7[0] & 0x03) << 4) | (VAR_7[1] >> 4)];
            *VAR_5++ = VAR_0[(VAR_7[1] & 0x0f) << 2];
        }
        *VAR_5++ = '=';
        VAR_9 += 4;
    }

    *VAR_5 = '\0';
    if (VAR_3)
        *VAR_3 = (size_t)(VAR_5 - VAR_4);
    return VAR_4;
}

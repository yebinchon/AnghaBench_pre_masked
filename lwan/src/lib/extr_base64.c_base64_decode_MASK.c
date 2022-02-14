
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;

unsigned char *
FUNC_2(const unsigned char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
    unsigned char *VAR_4, *VAR_5, VAR_6[4];
    size_t VAR_7, VAR_8, VAR_9;
    int VAR_10 = 0;

    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        if (VAR_0[VAR_1[VAR_7]] != 0x80)
            VAR_8++;
    }

    if (VAR_8 == 0 || VAR_8 % 4)
        return ((void*)0);

    VAR_9 = (VAR_8 / 4 * 3) + 1;
    VAR_5 = VAR_4 = FUNC_1(VAR_9);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        unsigned char VAR_11 = VAR_0[VAR_1[VAR_7]];
        if (VAR_11 == 0x80)
            continue;

        if (VAR_1[VAR_7] == '=')
            VAR_10++;
        VAR_6[VAR_8] = VAR_11;
        VAR_8++;
        if (VAR_8 == 4) {
            *VAR_5++ = (unsigned char)((VAR_6[0] << 2) | (VAR_6[1] >> 4));
            *VAR_5++ = (unsigned char)((VAR_6[1] << 4) | (VAR_6[2] >> 2));
            *VAR_5++ = (unsigned char)((VAR_6[2] << 6) | VAR_6[3]);
            VAR_8 = 0;
            if (VAR_10) {
                if (VAR_10 == 1)
                    VAR_5--;
                else if (VAR_10 == 2)
                    VAR_5 -= 2;
                else {

                    FUNC_0(VAR_4);
                    return ((void*)0);
                }
                break;
            }
        }
    }
    *VAR_5 = '\0';

    *VAR_3 = (size_t)(VAR_5 - VAR_4);
    return VAR_4;
}

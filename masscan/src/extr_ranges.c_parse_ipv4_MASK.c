
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, unsigned *VAR_1, unsigned VAR_2, unsigned *VAR_3)
{
    unsigned VAR_4 = *VAR_1;
    unsigned VAR_5 = 0;
    unsigned VAR_6;

    for (VAR_6=0; VAR_6<4; VAR_6++) {
        unsigned VAR_7 = 0;
        unsigned VAR_8 = 0;

        if (VAR_4 >= VAR_2)
            return -4;
        if (!FUNC_0(VAR_0[VAR_4]&0xFF))
            return -1;


        while (VAR_4 < VAR_2 && VAR_0[VAR_4] == '0')
            VAR_4++;


        while (VAR_4 < VAR_2 && FUNC_0(VAR_0[VAR_4]&0xFF)) {
            VAR_7 = VAR_7 * 10 + (VAR_0[VAR_4] - '0');
            VAR_4++;
            if (++VAR_8 > 3)
                return -2;
        }
        if (VAR_7 > 255)
            return -5;
        VAR_5 = VAR_5 * 256 + (VAR_7 & 0xFF);
        if (VAR_6 == 3)
            break;

        if (VAR_0[VAR_4] != '.')
            return -3;
        VAR_4++;
    }

    *VAR_1 = VAR_4;
    *VAR_3 = VAR_5;

    return 0;
}

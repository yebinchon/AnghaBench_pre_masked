
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int const) ;
 char* FUNC_2 (size_t) ;

char *FUNC_3(const void *VAR_0, size_t VAR_1, bool VAR_2) {
        char *VAR_3, *VAR_4;
        const uint8_t *VAR_5;
        size_t VAR_6;

        FUNC_0(VAR_0 || VAR_1 == 0);

        if (VAR_2)

                VAR_6 = 8 * (VAR_1 + 4) / 5;
        else {

                VAR_6 = 8 * VAR_1 / 5;

                switch (VAR_1 % 5) {
                case 4:
                        VAR_6 += 7;
                        break;
                case 3:
                        VAR_6 += 5;
                        break;
                case 2:
                        VAR_6 += 4;
                        break;
                case 1:
                        VAR_6 += 2;
                        break;
                }
        }

        VAR_4 = VAR_3 = FUNC_2(VAR_6 + 1);
        if (!VAR_3)
                return ((void*)0);

        for (VAR_5 = VAR_0; VAR_5 < (const uint8_t*) VAR_0 + (VAR_1 / 5) * 5; VAR_5 += 5) {


                *(VAR_4++) = FUNC_1(VAR_5[0] >> 3);
                *(VAR_4++) = FUNC_1((VAR_5[0] & 7) << 2 | VAR_5[1] >> 6);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 63) >> 1);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 1) << 4 | VAR_5[2] >> 4);
                *(VAR_4++) = FUNC_1((VAR_5[2] & 15) << 1 | VAR_5[3] >> 7);
                *(VAR_4++) = FUNC_1((VAR_5[3] & 127) >> 2);
                *(VAR_4++) = FUNC_1((VAR_5[3] & 3) << 3 | VAR_5[4] >> 5);
                *(VAR_4++) = FUNC_1((VAR_5[4] & 31));
        }

        switch (VAR_1 % 5) {
        case 4:
                *(VAR_4++) = FUNC_1(VAR_5[0] >> 3);
                *(VAR_4++) = FUNC_1((VAR_5[0] & 7) << 2 | VAR_5[1] >> 6);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 63) >> 1);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 1) << 4 | VAR_5[2] >> 4);
                *(VAR_4++) = FUNC_1((VAR_5[2] & 15) << 1 | VAR_5[3] >> 7);
                *(VAR_4++) = FUNC_1((VAR_5[3] & 127) >> 2);
                *(VAR_4++) = FUNC_1((VAR_5[3] & 3) << 3);
                if (VAR_2)
                        *(VAR_4++) = '=';

                break;

        case 3:
                *(VAR_4++) = FUNC_1(VAR_5[0] >> 3);
                *(VAR_4++) = FUNC_1((VAR_5[0] & 7) << 2 | VAR_5[1] >> 6);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 63) >> 1);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 1) << 4 | VAR_5[2] >> 4);
                *(VAR_4++) = FUNC_1((VAR_5[2] & 15) << 1);
                if (VAR_2) {
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                }

                break;

        case 2:
                *(VAR_4++) = FUNC_1(VAR_5[0] >> 3);
                *(VAR_4++) = FUNC_1((VAR_5[0] & 7) << 2 | VAR_5[1] >> 6);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 63) >> 1);
                *(VAR_4++) = FUNC_1((VAR_5[1] & 1) << 4);
                if (VAR_2) {
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                }

                break;

        case 1:
                *(VAR_4++) = FUNC_1(VAR_5[0] >> 3);
                *(VAR_4++) = FUNC_1((VAR_5[0] & 7) << 2);
                if (VAR_2) {
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                        *(VAR_4++) = '=';
                }

                break;
        }

        *VAR_4 = 0;
        return VAR_3;
}

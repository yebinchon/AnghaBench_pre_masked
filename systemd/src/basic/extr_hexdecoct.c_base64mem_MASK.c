
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 void* FUNC_1 (int const) ;
 char* FUNC_2 (int) ;

ssize_t FUNC_3(const void *VAR_1, size_t VAR_2, char **VAR_3) {
        char *VAR_4, *VAR_5;
        const uint8_t *VAR_6;

        FUNC_0(VAR_1 || VAR_2 == 0);
        FUNC_0(VAR_3);


        VAR_5 = VAR_4 = FUNC_2(4 * (VAR_2 + 2) / 3 + 1);
        if (!VAR_4)
                return -VAR_0;

        for (VAR_6 = VAR_1; VAR_6 < (const uint8_t*) VAR_1 + (VAR_2 / 3) * 3; VAR_6 += 3) {

                *(VAR_5++) = FUNC_1(VAR_6[0] >> 2);
                *(VAR_5++) = FUNC_1((VAR_6[0] & 3) << 4 | VAR_6[1] >> 4);
                *(VAR_5++) = FUNC_1((VAR_6[1] & 15) << 2 | VAR_6[2] >> 6);
                *(VAR_5++) = FUNC_1(VAR_6[2] & 63);
        }

        switch (VAR_2 % 3) {
        case 2:
                *(VAR_5++) = FUNC_1(VAR_6[0] >> 2);
                *(VAR_5++) = FUNC_1((VAR_6[0] & 3) << 4 | VAR_6[1] >> 4);
                *(VAR_5++) = FUNC_1((VAR_6[1] & 15) << 2);
                *(VAR_5++) = '=';

                break;
        case 1:
                *(VAR_5++) = FUNC_1(VAR_6[0] >> 2);
                *(VAR_5++) = FUNC_1((VAR_6[0] & 3) << 4);
                *(VAR_5++) = '=';
                *(VAR_5++) = '=';

                break;
        }

        *VAR_5 = 0;
        *VAR_3 = VAR_4;
        return VAR_5 - VAR_4;
}

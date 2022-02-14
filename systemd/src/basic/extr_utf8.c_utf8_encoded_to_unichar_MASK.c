
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char32_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 size_t FUNC_1 (char const) ;

int FUNC_2(const char *VAR_1, char32_t *VAR_2) {
        char32_t VAR_3;
        size_t VAR_4, VAR_5;

        FUNC_0(VAR_1);

        VAR_4 = FUNC_1(VAR_1[0]);

        switch (VAR_4) {
        case 1:
                *VAR_2 = (char32_t)VAR_1[0];
                return 0;
        case 2:
                VAR_3 = VAR_1[0] & 0x1f;
                break;
        case 3:
                VAR_3 = (char32_t)VAR_1[0] & 0x0f;
                break;
        case 4:
                VAR_3 = (char32_t)VAR_1[0] & 0x07;
                break;
        case 5:
                VAR_3 = (char32_t)VAR_1[0] & 0x03;
                break;
        case 6:
                VAR_3 = (char32_t)VAR_1[0] & 0x01;
                break;
        default:
                return -VAR_0;
        }

        for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++) {
                if (((char32_t)VAR_1[VAR_5] & 0xc0) != 0x80)
                        return -VAR_0;

                VAR_3 <<= 6;
                VAR_3 |= (char32_t)VAR_1[VAR_5] & 0x3f;
        }

        *VAR_2 = VAR_3;

        return 0;
}

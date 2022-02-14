
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* u_short ;
typedef int u_char ;


 int VAR_0 ;
 void** FUNC_0 (int) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,void**,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int**,int) ;

__attribute__((used)) static u_short *
FUNC_6(u_short *VAR_1, u_char *VAR_2, size_t *VAR_3)
{
    u_char *VAR_4;
    u_short *VAR_5, *VAR_6;
    uint32_t VAR_7;

    VAR_4 = VAR_2;
    VAR_5 = VAR_1;
    VAR_6 = VAR_1 + *VAR_3;

    while (VAR_5 < VAR_6) {

        if (*VAR_4 < 0x80) {
            *VAR_5++ = (u_short) *VAR_4;

            if (*VAR_4 == 0) {
                *VAR_3 = VAR_5 - VAR_1;
                return VAR_1;
            }

            VAR_4++;

            continue;
        }

        if (VAR_5 + 1 == VAR_6) {
            *VAR_3 = VAR_5 - VAR_1;
            break;
        }

        VAR_7 = FUNC_5(&VAR_4, 4);

        if (VAR_7 > 0x10ffff) {
            FUNC_3(VAR_0);
            return ((void*)0);
        }

        if (VAR_7 > 0xffff) {
            VAR_7 -= 0x10000;
            *VAR_5++ = (u_short) (0xd800 + (VAR_7 >> 10));
            *VAR_5++ = (u_short) (0xdc00 + (VAR_7 & 0x03ff));
            continue;
        }

        *VAR_5++ = (u_short) VAR_7;
    }



    VAR_5 = FUNC_0(((VAR_4 - VAR_2) + FUNC_4(VAR_4) + 1) * sizeof(u_short));
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(VAR_5, VAR_1, *VAR_3 * 2);

    VAR_1 = VAR_5;
    VAR_5 += *VAR_3;

    for ( ;; ) {

        if (*VAR_4 < 0x80) {
            *VAR_5++ = (u_short) *VAR_4;

            if (*VAR_4 == 0) {
                *VAR_3 = VAR_5 - VAR_1;
                return VAR_1;
            }

            VAR_4++;

            continue;
        }

        VAR_7 = FUNC_5(&VAR_4, 4);

        if (VAR_7 > 0x10ffff) {
            FUNC_1(VAR_1);
            FUNC_3(VAR_0);
            return ((void*)0);
        }

        if (VAR_7 > 0xffff) {
            VAR_7 -= 0x10000;
            *VAR_5++ = (u_short) (0xd800 + (VAR_7 >> 10));
            *VAR_5++ = (u_short) (0xdc00 + (VAR_7 & 0x03ff));
            continue;
        }

        *VAR_5++ = (u_short) VAR_7;
    }


}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int const) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int const) ;
 int * VAR_0 ;

void FUNC_5(FILE *VAR_1, const void *VAR_2, size_t VAR_3) {
        const uint8_t *VAR_4 = VAR_2;
        unsigned VAR_5 = 0;

        FUNC_0(VAR_4 || VAR_3 == 0);

        if (!VAR_1)
                VAR_1 = VAR_0;

        while (VAR_3 > 0) {
                size_t VAR_6;

                FUNC_1(VAR_1, "%04x  ", VAR_5);

                for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {

                        if (VAR_6 >= VAR_3)
                                FUNC_3("   ", VAR_1);
                        else
                                FUNC_1(VAR_1, "%02x ", VAR_4[VAR_6]);

                        if (VAR_6 == 7)
                                FUNC_2(' ', VAR_1);
                }

                FUNC_2(' ', VAR_1);

                for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {

                        if (VAR_6 >= VAR_3)
                                FUNC_2(' ', VAR_1);
                        else
                                FUNC_2(FUNC_4(VAR_4[VAR_6]) ? (char) VAR_4[VAR_6] : '.', VAR_1);
                }

                FUNC_2('\n', VAR_1);

                if (VAR_3 < 16)
                        break;

                VAR_5 += 16;
                VAR_4 += 16;
                VAR_3 -= 16;
        }
}

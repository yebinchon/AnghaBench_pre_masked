
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int ULONG ;
typedef int UBYTE ;



__attribute__((used)) static int FUNC_0(ULONG VAR_0, ULONG VAR_1, UBYTE *VAR_2, UWORD *VAR_3) {
    register UWORD VAR_4;
    register ULONG VAR_5;
    register UBYTE VAR_6 = 1;
    ULONG VAR_7;
    ULONG VAR_8 = 0;
    ULONG VAR_9 = 1 << VAR_1;
    ULONG VAR_10 = VAR_9 >> 1;
    ULONG VAR_11 = VAR_10;


    while (VAR_6 <= VAR_1) {
        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            if (VAR_2[VAR_4] == VAR_6) {
                VAR_5 = VAR_8;

                if((VAR_8 += VAR_10) > VAR_9) return 1;


                VAR_7 = VAR_10;
                while (VAR_7-- > 0) VAR_3[VAR_5++] = VAR_4;
            }
        }
        VAR_10 >>= 1;
        VAR_6++;
    }


    if (VAR_8 != VAR_9) {

        for (VAR_4 = VAR_8; VAR_4 < VAR_9; VAR_4++) VAR_3[VAR_4] = 0;


        VAR_8 <<= 16;
        VAR_9 <<= 16;
        VAR_10 = 1 << 15;

        while (VAR_6 <= 16) {
            for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
                if (VAR_2[VAR_4] == VAR_6) {
                    VAR_5 = VAR_8 >> 16;
                    for (VAR_7 = 0; VAR_7 < VAR_6 - VAR_1; VAR_7++) {

                        if (VAR_3[VAR_5] == 0) {
                            VAR_3[(VAR_11 << 1)] = 0;
                            VAR_3[(VAR_11 << 1) + 1] = 0;
                            VAR_3[VAR_5] = VAR_11++;
                        }

                        VAR_5 = VAR_3[VAR_5] << 1;
                        if ((VAR_8 >> (15-VAR_7)) & 1) VAR_5++;
                    }
                    VAR_3[VAR_5] = VAR_4;

                    if ((VAR_8 += VAR_10) > VAR_9) return 1;
                }
            }
            VAR_10 >>= 1;
            VAR_6++;
        }
    }


    if (VAR_8 == VAR_9) return 0;


    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) if (VAR_2[VAR_4]) return 1;
    return 0;
}

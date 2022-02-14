
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long xmlChar ;



__attribute__((used)) static unsigned long
FUNC_0(const xmlChar *VAR_0, int VAR_1, int VAR_2) {
    unsigned long VAR_3 = VAR_2;

    if (VAR_0 == ((void*)0)) return(0);
    VAR_3 = *VAR_0;
    VAR_3 <<= 5;
    if (VAR_1 > 10) {
        VAR_3 += VAR_0[VAR_1 - 1];
        VAR_1 = 10;
    }
    switch (VAR_1) {
        case 10: VAR_3 += VAR_0[9];

        case 9: VAR_3 += VAR_0[8];

        case 8: VAR_3 += VAR_0[7];

        case 7: VAR_3 += VAR_0[6];

        case 6: VAR_3 += VAR_0[5];

        case 5: VAR_3 += VAR_0[4];

        case 4: VAR_3 += VAR_0[3];

        case 3: VAR_3 += VAR_0[2];

        case 2: VAR_3 += VAR_0[1];

        default: break;
    }
    return(VAR_3);
}

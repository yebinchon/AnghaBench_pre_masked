
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;



__attribute__((used)) static unsigned long
FUNC_0(const xmlChar *VAR_0, int VAR_1,
                       const xmlChar *VAR_2, int VAR_3, int VAR_4)
{
    unsigned long VAR_5 = (unsigned long) VAR_4;

    if (VAR_1 == 0)
 VAR_5 += 30 * (unsigned long) ':';
    else
 VAR_5 += 30 * (*VAR_0);

    if (VAR_3 > 10) {
        int VAR_6 = VAR_3 - (VAR_1 + 1 + 1);
 if (VAR_6 < 0)
     VAR_6 = VAR_3 - (10 + 1);
 VAR_5 += VAR_2[VAR_6];
        VAR_3 = 10;
 if (VAR_1 > 10)
     VAR_1 = 10;
    }
    switch (VAR_1) {
        case 10: VAR_5 += VAR_0[9];

        case 9: VAR_5 += VAR_0[8];

        case 8: VAR_5 += VAR_0[7];

        case 7: VAR_5 += VAR_0[6];

        case 6: VAR_5 += VAR_0[5];

        case 5: VAR_5 += VAR_0[4];

        case 4: VAR_5 += VAR_0[3];

        case 3: VAR_5 += VAR_0[2];

        case 2: VAR_5 += VAR_0[1];

        case 1: VAR_5 += VAR_0[0];

        default: break;
    }
    VAR_3 -= VAR_1;
    if (VAR_3 > 0) {
        VAR_5 += (unsigned long) ':';
 VAR_3--;
    }
    switch (VAR_3) {
        case 10: VAR_5 += VAR_2[9];

        case 9: VAR_5 += VAR_2[8];

        case 8: VAR_5 += VAR_2[7];

        case 7: VAR_5 += VAR_2[6];

        case 6: VAR_5 += VAR_2[5];

        case 5: VAR_5 += VAR_2[4];

        case 4: VAR_5 += VAR_2[3];

        case 3: VAR_5 += VAR_2[2];

        case 2: VAR_5 += VAR_2[1];

        case 1: VAR_5 += VAR_2[0];

        default: break;
    }
    return(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int FUNC_0 (unsigned long) ;

int FUNC_1(const char *VAR_0, struct in_addr *VAR_1)
{
    int VAR_2 = 0;
    register unsigned long VAR_3 = 0, VAR_4 = 0;

    do {
        register char VAR_5 = *VAR_0;

        switch (VAR_5) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            VAR_3 = VAR_3 * 10 + (VAR_5 - '0');
            break;

        case '.':
            if (++VAR_2 > 3) {
                return 0;
            }


        case '\0':
            if (VAR_3 > 255) {
                return 0;
            }
            VAR_4 = VAR_4 << 8 | VAR_3;
            VAR_3 = 0;
            break;

        default:
            return 0;
        }
    } while (*VAR_0++) ;


    if (VAR_2 < 3) {
        VAR_4 <<= 8 * (3 - VAR_2) ;
    }


    if (VAR_1) {
        VAR_1->s_addr = FUNC_0(VAR_4);
    }

    return 1;
}

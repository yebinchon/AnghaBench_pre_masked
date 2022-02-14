
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PCSTR ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(PCSTR VAR_0) {
    const char *VAR_1 = VAR_0;
    int VAR_2, VAR_3;

    if(FUNC_1(VAR_0) == 4) {
        VAR_2 = VAR_3 = 0;
        while (*VAR_1) {
            VAR_2 *= 2;
            VAR_3 *= 2;
            switch (*VAR_1) {
                case 'r':
                    VAR_2++;
                    break;
                case 'g':
                    VAR_3++;
                    break;
                case 'o':
                    VAR_2++;
                    VAR_3++;
                    break;
            }
            VAR_1++;
        }
        FUNC_0(((VAR_2<<4) & 0xF0) + (VAR_3 & 0xF));
    }
}

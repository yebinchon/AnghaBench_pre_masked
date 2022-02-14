
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned int,unsigned int) ;
 unsigned char VAR_0 ;
 int FUNC_3 (unsigned char*) ;

unsigned char *FUNC_4(unsigned char *VAR_1, int VAR_2) {
    unsigned char *VAR_3;
    unsigned int VAR_4, VAR_5 = 0;
    if (VAR_2 < 0) {
        VAR_2 = (-VAR_2)-1;
        VAR_3 = FUNC_1(VAR_1);
        if (VAR_3[0] != VAR_0) {
            FUNC_2(VAR_3, VAR_4, VAR_5);
            while (VAR_5 > 0 && VAR_2--) {
                VAR_3 -= VAR_5;
                FUNC_2(VAR_3, VAR_4, VAR_5);
            }
        }
    } else {
        VAR_3 = FUNC_0(VAR_1);
        while (VAR_3[0] != VAR_0 && VAR_2--) {
            VAR_3 += FUNC_3(VAR_3);
        }
    }
    return (VAR_3[0] == VAR_0 || VAR_2 > 0) ? ((void*)0) : VAR_3;
}

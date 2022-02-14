
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned int,unsigned int) ;
 unsigned char VAR_0 ;
 int FUNC_3 (int) ;

unsigned char *FUNC_4(unsigned char *VAR_1, unsigned char *VAR_2) {
    unsigned int VAR_3, VAR_4 = 0;




    if (VAR_2[0] == VAR_0) {
        VAR_2 = FUNC_1(VAR_1);
        return (VAR_2[0] == VAR_0) ? ((void*)0) : VAR_2;
    } else if (VAR_2 == FUNC_0(VAR_1)) {
        return ((void*)0);
    } else {
        FUNC_2(VAR_2, VAR_3, VAR_4);
        FUNC_3(VAR_4 > 0);
        return VAR_2-VAR_4;
    }
}

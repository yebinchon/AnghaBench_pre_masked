
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int rio ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,...) ;

int FUNC_3(rio *VAR_5, uint64_t VAR_6) {
    unsigned char VAR_7[2];
    size_t VAR_8;

    if (VAR_6 < (1<<6)) {

        VAR_7[0] = (VAR_6&0xFF)|(VAR_3<<6);
        if (FUNC_2(VAR_5,VAR_7,1) == -1) return -1;
        VAR_8 = 1;
    } else if (VAR_6 < (1<<14)) {

        VAR_7[0] = ((VAR_6>>8)&0xFF)|(VAR_0<<6);
        VAR_7[1] = VAR_6&0xFF;
        if (FUNC_2(VAR_5,VAR_7,2) == -1) return -1;
        VAR_8 = 2;
    } else if (VAR_6 <= VAR_4) {

        VAR_7[0] = VAR_1;
        if (FUNC_2(VAR_5,VAR_7,1) == -1) return -1;
        uint32_t VAR_9 = FUNC_0(VAR_6);
        if (FUNC_2(VAR_5,&VAR_9,4) == -1) return -1;
        VAR_8 = 1+4;
    } else {

        VAR_7[0] = VAR_2;
        if (FUNC_2(VAR_5,VAR_7,1) == -1) return -1;
        VAR_6 = FUNC_1(VAR_6);
        if (FUNC_2(VAR_5,&VAR_6,8) == -1) return -1;
        VAR_8 = 1+8;
    }
    return VAR_8;
}

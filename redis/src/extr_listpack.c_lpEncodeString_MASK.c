
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

void FUNC_1(unsigned char *VAR_3, unsigned char *VAR_4, uint32_t VAR_5) {
    if (VAR_5 < 64) {
        VAR_3[0] = VAR_5 | VAR_2;
        FUNC_0(VAR_3+1,VAR_4,VAR_5);
    } else if (VAR_5 < 4096) {
        VAR_3[0] = (VAR_5 >> 8) | VAR_0;
        VAR_3[1] = VAR_5 & 0xff;
        FUNC_0(VAR_3+2,VAR_4,VAR_5);
    } else {
        VAR_3[0] = VAR_1;
        VAR_3[1] = VAR_5 & 0xff;
        VAR_3[2] = (VAR_5 >> 8) & 0xff;
        VAR_3[3] = (VAR_5 >> 16) & 0xff;
        VAR_3[4] = (VAR_5 >> 24) & 0xff;
        FUNC_0(VAR_3+5,VAR_4,VAR_5);
    }
}

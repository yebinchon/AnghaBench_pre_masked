
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(long long VAR_4, unsigned char *VAR_5) {
    if (VAR_4 >= -(1<<7) && VAR_4 <= (1<<7)-1) {
        VAR_5[0] = (VAR_0<<6)|VAR_3;
        VAR_5[1] = VAR_4&0xFF;
        return 2;
    } else if (VAR_4 >= -(1<<15) && VAR_4 <= (1<<15)-1) {
        VAR_5[0] = (VAR_0<<6)|VAR_1;
        VAR_5[1] = VAR_4&0xFF;
        VAR_5[2] = (VAR_4>>8)&0xFF;
        return 3;
    } else if (VAR_4 >= -((long long)1<<31) && VAR_4 <= ((long long)1<<31)-1) {
        VAR_5[0] = (VAR_0<<6)|VAR_2;
        VAR_5[1] = VAR_4&0xFF;
        VAR_5[2] = (VAR_4>>8)&0xFF;
        VAR_5[3] = (VAR_4>>16)&0xFF;
        VAR_5[4] = (VAR_4>>24)&0xFF;
        return 5;
    } else {
        return 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;
 long long VAR_6 ;
 long long VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 long long VAR_13 ;
 scalar_t__ FUNC_0 (char*,unsigned int,long long*) ;

int FUNC_1(unsigned char *VAR_14, unsigned int VAR_15, long long *VAR_16, unsigned char *VAR_17) {
    long long VAR_18;

    if (VAR_15 >= 32 || VAR_15 == 0) return 0;
    if (FUNC_0((char*)VAR_14,VAR_15,&VAR_18)) {


        if (VAR_18 >= 0 && VAR_18 <= 12) {
            *VAR_17 = VAR_13+VAR_18;
        } else if (VAR_18 >= VAR_7 && VAR_18 <= VAR_6) {
            *VAR_17 = VAR_12;
        } else if (VAR_18 >= VAR_1 && VAR_18 <= VAR_0) {
            *VAR_17 = VAR_8;
        } else if (VAR_18 >= VAR_3 && VAR_18 <= VAR_2) {
            *VAR_17 = VAR_9;
        } else if (VAR_18 >= VAR_5 && VAR_18 <= VAR_4) {
            *VAR_17 = VAR_10;
        } else {
            *VAR_17 = VAR_11;
        }
        *VAR_16 = VAR_18;
        return 1;
    }
    return 0;
}

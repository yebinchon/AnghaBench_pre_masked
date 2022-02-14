
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,size_t,int) ;

int FUNC_1(unsigned char *VAR_3, size_t VAR_4, long *VAR_5) {
    uint64_t VAR_6, VAR_7, VAR_8;
    int VAR_9;
    VAR_6 = FUNC_0(VAR_3,VAR_4,0xadc83b19ULL);
    VAR_8 = VAR_6 & VAR_1;
    VAR_6 >>= VAR_0;
    VAR_6 |= ((uint64_t)1<<VAR_2);

    VAR_7 = 1;
    VAR_9 = 1;
    while((VAR_6 & VAR_7) == 0) {
        VAR_9++;
        VAR_7 <<= 1;
    }
    *VAR_5 = (int) VAR_8;
    return VAR_9;
}

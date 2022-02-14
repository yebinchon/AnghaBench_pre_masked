
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int i64 ;
typedef int i32 ;
typedef int i16 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,unsigned char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;

int64_t FUNC_5(unsigned char *VAR_8, unsigned char VAR_9) {
    int16_t VAR_10;
    int32_t VAR_11;
    int64_t VAR_12, VAR_13 = 0;
    if (VAR_9 == VAR_4) {
        VAR_13 = ((int8_t*)VAR_8)[0];
    } else if (VAR_9 == VAR_0) {
        FUNC_1(&VAR_10,VAR_8,sizeof(VAR_10));
        FUNC_2(&VAR_10);
        VAR_13 = VAR_10;
    } else if (VAR_9 == VAR_2) {
        FUNC_1(&VAR_11,VAR_8,sizeof(VAR_11));
        FUNC_3(&VAR_11);
        VAR_13 = VAR_11;
    } else if (VAR_9 == VAR_1) {
        VAR_11 = 0;
        FUNC_1(((uint8_t*)&VAR_11)+1,VAR_8,sizeof(VAR_11)-sizeof(uint8_t));
        FUNC_3(&VAR_11);
        VAR_13 = VAR_11>>8;
    } else if (VAR_9 == VAR_3) {
        FUNC_1(&VAR_12,VAR_8,sizeof(VAR_12));
        FUNC_4(&VAR_12);
        VAR_13 = VAR_12;
    } else if (VAR_9 >= VAR_7 && VAR_9 <= VAR_6) {
        VAR_13 = (VAR_9 & VAR_5)-1;
    } else {
        FUNC_0(((void*)0));
    }
    return VAR_13;
}

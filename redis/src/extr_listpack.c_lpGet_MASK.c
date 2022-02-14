
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 scalar_t__ FUNC_8 (unsigned char) ;
 scalar_t__ FUNC_9 (unsigned char) ;
 scalar_t__ FUNC_10 (unsigned char) ;
 scalar_t__ FUNC_11 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (char*,int ,char*,long long) ;

unsigned char *FUNC_13(unsigned char *VAR_4, int64_t *VAR_5, unsigned char *VAR_6) {
    int64_t VAR_7;
    uint64_t VAR_8, VAR_9, VAR_10;

    if (FUNC_11(VAR_4[0])) {
        VAR_9 = VAR_3;
        VAR_10 = 0;
        VAR_8 = VAR_4[0] & 0x7f;
    } else if (FUNC_10(VAR_4[0])) {
        *VAR_5 = FUNC_2(VAR_4);
        return VAR_4+1;
    } else if (FUNC_4(VAR_4[0])) {
        VAR_8 = ((VAR_4[0]&0x1f)<<8) | VAR_4[1];
        VAR_9 = (uint64_t)1<<12;
        VAR_10 = 8191;
    } else if (FUNC_5(VAR_4[0])) {
        VAR_8 = (uint64_t)VAR_4[1] |
               (uint64_t)VAR_4[2]<<8;
        VAR_9 = (uint64_t)1<<15;
        VAR_10 = VAR_1;
    } else if (FUNC_6(VAR_4[0])) {
        VAR_8 = (uint64_t)VAR_4[1] |
               (uint64_t)VAR_4[2]<<8 |
               (uint64_t)VAR_4[3]<<16;
        VAR_9 = (uint64_t)1<<23;
        VAR_10 = VAR_2>>8;
    } else if (FUNC_7(VAR_4[0])) {
        VAR_8 = (uint64_t)VAR_4[1] |
               (uint64_t)VAR_4[2]<<8 |
               (uint64_t)VAR_4[3]<<16 |
               (uint64_t)VAR_4[4]<<24;
        VAR_9 = (uint64_t)1<<31;
        VAR_10 = VAR_2;
    } else if (FUNC_9(VAR_4[0])) {
        VAR_8 = (uint64_t)VAR_4[1] |
               (uint64_t)VAR_4[2]<<8 |
               (uint64_t)VAR_4[3]<<16 |
               (uint64_t)VAR_4[4]<<24 |
               (uint64_t)VAR_4[5]<<32 |
               (uint64_t)VAR_4[6]<<40 |
               (uint64_t)VAR_4[7]<<48 |
               (uint64_t)VAR_4[8]<<56;
        VAR_9 = (uint64_t)1<<63;
        VAR_10 = VAR_3;
    } else if (FUNC_3(VAR_4[0])) {
        *VAR_5 = FUNC_0(VAR_4);
        return VAR_4+2;
    } else if (FUNC_8(VAR_4[0])) {
        *VAR_5 = FUNC_1(VAR_4);
        return VAR_4+5;
    } else {
        VAR_8 = 12345678900000000ULL + VAR_4[0];
        VAR_9 = VAR_3;
        VAR_10 = 0;
    }




    if (VAR_8 >= VAR_9) {


        VAR_8 = VAR_10-VAR_8;
        VAR_7 = VAR_8;
        VAR_7 = -VAR_7-1;
    } else {
        VAR_7 = VAR_8;
    }



    if (VAR_6) {
        *VAR_5 = FUNC_12((char*)VAR_6,VAR_0,"%lld",(long long)VAR_7);
        return VAR_6;
    } else {
        *VAR_5 = VAR_7;
        return ((void*)0);
    }
}

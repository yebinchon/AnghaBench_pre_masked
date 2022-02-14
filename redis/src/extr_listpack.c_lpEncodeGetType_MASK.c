
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,int,int*) ;

int FUNC_1(unsigned char *VAR_7, uint32_t VAR_8, unsigned char *VAR_9, uint64_t *VAR_10) {
    int64_t VAR_11;
    if (FUNC_0((const char*)VAR_7, VAR_8, &VAR_11)) {
        if (VAR_11 >= 0 && VAR_11 <= 127) {

            VAR_9[0] = VAR_11;
            *VAR_10 = 1;
        } else if (VAR_11 >= -4096 && VAR_11 <= 4095) {

            if (VAR_11 < 0) VAR_11 = ((int64_t)1<<13)+VAR_11;
            VAR_9[0] = (VAR_11>>8)|VAR_0;
            VAR_9[1] = VAR_11&0xff;
            *VAR_10 = 2;
        } else if (VAR_11 >= -32768 && VAR_11 <= 32767) {

            if (VAR_11 < 0) VAR_11 = ((int64_t)1<<16)+VAR_11;
            VAR_9[0] = VAR_1;
            VAR_9[1] = VAR_11&0xff;
            VAR_9[2] = VAR_11>>8;
            *VAR_10 = 3;
        } else if (VAR_11 >= -8388608 && VAR_11 <= 8388607) {

            if (VAR_11 < 0) VAR_11 = ((int64_t)1<<24)+VAR_11;
            VAR_9[0] = VAR_2;
            VAR_9[1] = VAR_11&0xff;
            VAR_9[2] = (VAR_11>>8)&0xff;
            VAR_9[3] = VAR_11>>16;
            *VAR_10 = 4;
        } else if (VAR_11 >= -2147483648 && VAR_11 <= 2147483647) {

            if (VAR_11 < 0) VAR_11 = ((int64_t)1<<32)+VAR_11;
            VAR_9[0] = VAR_3;
            VAR_9[1] = VAR_11&0xff;
            VAR_9[2] = (VAR_11>>8)&0xff;
            VAR_9[3] = (VAR_11>>16)&0xff;
            VAR_9[4] = VAR_11>>24;
            *VAR_10 = 5;
        } else {

            uint64_t VAR_12 = VAR_11;
            VAR_9[0] = VAR_4;
            VAR_9[1] = VAR_12&0xff;
            VAR_9[2] = (VAR_12>>8)&0xff;
            VAR_9[3] = (VAR_12>>16)&0xff;
            VAR_9[4] = (VAR_12>>24)&0xff;
            VAR_9[5] = (VAR_12>>32)&0xff;
            VAR_9[6] = (VAR_12>>40)&0xff;
            VAR_9[7] = (VAR_12>>48)&0xff;
            VAR_9[8] = VAR_12>>56;
            *VAR_10 = 9;
        }
        return VAR_5;
    } else {
        if (VAR_8 < 64) *VAR_10 = 1+VAR_8;
        else if (VAR_8 < 4096) *VAR_10 = 2+VAR_8;
        else *VAR_10 = 5+VAR_8;
        return VAR_6;
    }
}

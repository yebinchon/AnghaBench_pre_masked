
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint64_t ;
typedef unsigned char uint32_t ;
typedef int rio ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,int) ;

int FUNC_4(rio *VAR_5, int *VAR_6, uint64_t *VAR_7) {
    unsigned char VAR_8[2];
    int VAR_9;

    if (VAR_6) *VAR_6 = 0;
    if (FUNC_3(VAR_5,VAR_8,1) == 0) return -1;
    VAR_9 = (VAR_8[0]&0xC0)>>6;
    if (VAR_9 == VAR_4) {

        if (VAR_6) *VAR_6 = 1;
        *VAR_7 = VAR_8[0]&0x3F;
    } else if (VAR_9 == VAR_3) {

        *VAR_7 = VAR_8[0]&0x3F;
    } else if (VAR_9 == VAR_0) {

        if (FUNC_3(VAR_5,VAR_8+1,1) == 0) return -1;
        *VAR_7 = ((VAR_8[0]&0x3F)<<8)|VAR_8[1];
    } else if (VAR_8[0] == VAR_1) {

        uint32_t VAR_10;
        if (FUNC_3(VAR_5,&VAR_10,4) == 0) return -1;
        *VAR_7 = FUNC_0(VAR_10);
    } else if (VAR_8[0] == VAR_2) {

        uint64_t VAR_11;
        if (FUNC_3(VAR_5,&VAR_11,8) == 0) return -1;
        *VAR_7 = FUNC_1(VAR_11);
    } else {
        FUNC_2(
            "Unknown length encoding %d in rdbLoadLen()",VAR_9);
        return -1;
    }
    return 0;
}

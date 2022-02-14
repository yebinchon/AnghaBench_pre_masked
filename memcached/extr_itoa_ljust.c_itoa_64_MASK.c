
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 char* FUNC_0 (scalar_t__,char*) ;

char* FUNC_1(int64_t VAR_0, char* VAR_1) {
    uint64_t VAR_2 = VAR_0;
    if (VAR_0 < 0) {
        *VAR_1++ = '-';
        VAR_2 = -VAR_2;
    }
    return FUNC_0(VAR_2, VAR_1);
}

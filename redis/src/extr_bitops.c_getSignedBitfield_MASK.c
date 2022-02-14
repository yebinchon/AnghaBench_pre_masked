
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int FUNC_0 (unsigned char*,int,int) ;

int64_t FUNC_1(unsigned char *VAR_0, uint64_t VAR_1, uint64_t VAR_2) {
    int64_t VAR_3;
    union {uint64_t u; int64_t i;} VAR_4;
    VAR_4.u = FUNC_0(VAR_0,VAR_1,VAR_2);
    VAR_3 = VAR_4.i;




    if (VAR_3 & ((uint64_t)1 << (VAR_2-1)))
        VAR_3 |= ((uint64_t)-1) << VAR_2;
    return VAR_3;
}

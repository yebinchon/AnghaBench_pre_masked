
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(uint64_t VAR_3, uint64_t *VAR_4, uint64_t *VAR_5) {
    if (VAR_3 >= VAR_2) return VAR_0;
    *VAR_4 = VAR_3 / sizeof(uint64_t) / 8;
    *VAR_5 = 1ULL << (VAR_3 % (sizeof(uint64_t) * 8));
    return VAR_1;
}

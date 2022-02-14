
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct mp_chmap {size_t num; int* speaker; } ;


 size_t VAR_0 ;

void FUNC_0(struct mp_chmap *VAR_1, uint64_t VAR_2)
{
    VAR_1->num = 0;
    for (int VAR_3 = 0; VAR_3 < 64; VAR_3++) {
        if (VAR_2 & (1ULL << VAR_3)) {
            if (VAR_1->num >= VAR_0) {
                VAR_1->num = 0;
                return;
            }
            VAR_1->speaker[VAR_1->num] = VAR_3;
            VAR_1->num++;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct mp_chmap {int num; int* speaker; } ;


 scalar_t__ FUNC_0 (struct mp_chmap*) ;

uint64_t FUNC_1(const struct mp_chmap *VAR_0)
{
    struct mp_chmap VAR_1 = *VAR_0;
    if (VAR_1.num > 64)
        return 0;



    if (FUNC_0(&VAR_1))
        return VAR_1.num == 64 ? (uint64_t)-1 : (1ULL << VAR_1.num) - 1;
    uint64_t VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_1.num; VAR_3++) {
        if (VAR_1.speaker[VAR_3] < 64)
            VAR_2 |= 1ULL << VAR_1.speaker[VAR_3];
    }
    return VAR_2;
}

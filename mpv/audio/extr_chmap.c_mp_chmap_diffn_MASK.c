
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mp_chmap {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_chmap const*) ;

int FUNC_2(const struct mp_chmap *VAR_0, const struct mp_chmap *VAR_1)
{
    uint64_t VAR_2 = FUNC_1(VAR_0);
    uint64_t VAR_3 = FUNC_1(VAR_1);
    return FUNC_0((VAR_2 ^ VAR_3) & VAR_2);
}

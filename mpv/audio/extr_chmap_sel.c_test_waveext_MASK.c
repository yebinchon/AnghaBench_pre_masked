
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {scalar_t__ allow_waveext; } ;
struct mp_chmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct mp_chmap*) ;
 int FUNC_1 (struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_2(const struct mp_chmap_sel *VAR_0, struct mp_chmap *VAR_1)
{
    if (VAR_0->allow_waveext) {
        struct mp_chmap VAR_2 = *VAR_1;
        FUNC_1(&VAR_2);
        if (FUNC_0(&VAR_2)) {
            *VAR_1 = VAR_2;
            return 1;
        }
    }
    return 0;
}

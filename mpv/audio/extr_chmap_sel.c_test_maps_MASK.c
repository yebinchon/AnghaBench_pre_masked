
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int num_chmaps; struct mp_chmap* chmaps; } ;
struct mp_chmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct mp_chmap*,struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_1(const struct mp_chmap_sel *VAR_0, struct mp_chmap *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_chmaps; VAR_2++) {
        if (FUNC_0(&VAR_0->chmaps[VAR_2], VAR_1)) {
            *VAR_1 = VAR_0->chmaps[VAR_2];
            return 1;
        }
    }
    return 0;
}

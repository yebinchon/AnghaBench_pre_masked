
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {scalar_t__ num_chmaps; struct mp_chmap* chmaps; int tmp; struct mp_chmap* chmaps_storage; } ;
struct mp_chmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct mp_chmap*) ;
 int FUNC_1 (int ,struct mp_chmap*,scalar_t__) ;
 int FUNC_2 (struct mp_chmap const*) ;
 struct mp_chmap* FUNC_3 (int ,struct mp_chmap*,int) ;

void FUNC_4(struct mp_chmap_sel *VAR_0, const struct mp_chmap *VAR_1)
{
    if (!FUNC_2(VAR_1))
        return;
    if (!VAR_0->chmaps)
        VAR_0->chmaps = VAR_0->chmaps_storage;
    if (VAR_0->num_chmaps == FUNC_0(VAR_0->chmaps_storage)) {
        if (!VAR_0->tmp)
            return;
        VAR_0->chmaps = FUNC_3(VAR_0->tmp, VAR_0->chmaps, sizeof(VAR_0->chmaps_storage));
    }
    if (VAR_0->chmaps != VAR_0->chmaps_storage)
        FUNC_1(VAR_0->tmp, VAR_0->chmaps, VAR_0->num_chmaps);
    VAR_0->chmaps[VAR_0->num_chmaps++] = *VAR_1;
}

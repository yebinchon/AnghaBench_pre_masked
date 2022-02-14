
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int num_chmaps; struct mp_chmap* chmaps; } ;
struct mp_chmap {int dummy; } ;


 int FUNC_0 (struct mp_chmap_sel*,struct mp_chmap*) ;

void FUNC_1(struct mp_chmap *VAR_0, struct mp_chmap *VAR_1, int VAR_2)
{


    struct mp_chmap_sel VAR_3 = {
        .chmaps = VAR_1,
        .num_chmaps = VAR_2,
    };
    FUNC_0(&VAR_3, VAR_0);
}

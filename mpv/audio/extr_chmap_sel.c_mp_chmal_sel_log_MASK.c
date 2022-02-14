
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct mp_chmap_sel {int num_chmaps; scalar_t__ allow_any; scalar_t__ allow_waveext; int * speakers; int * chmaps; } ;
struct mp_chmap {int num; int speaker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (struct mp_chmap*) ;
 int FUNC_2 (struct mp_log*,int,char*,...) ;
 int FUNC_3 (struct mp_log*,int) ;

void FUNC_4(const struct mp_chmap_sel *VAR_2, struct mp_log *VAR_3, int VAR_4)
{
    if (!FUNC_3(VAR_3, VAR_4))
        return;

    for (int VAR_5 = 0; VAR_5 < VAR_2->num_chmaps; VAR_5++)
        FUNC_2(VAR_3, VAR_4, " - %s\n", FUNC_0(&VAR_2->chmaps[VAR_5]));
    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (!VAR_2->speakers[VAR_6])
            continue;
        struct mp_chmap VAR_7 = {.num = 1, .speaker = VAR_6 };
        FUNC_2(VAR_3, VAR_4, " - #%s\n",
                    VAR_6 == VAR_1 ? "fc" : FUNC_1(&VAR_7));
    }
    if (VAR_2->allow_waveext)
        FUNC_2(VAR_3, VAR_4, " - waveext\n");
    if (VAR_2->allow_any)
        FUNC_2(VAR_3, VAR_4, " - anything\n");
}

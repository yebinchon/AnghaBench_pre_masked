
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msc_debug_info {int nomap; TYPE_1__* omapp; } ;
struct TYPE_2__ {unsigned int from; unsigned int to; } ;
typedef TYPE_1__ OMAP_DATA ;



__attribute__((used)) static unsigned int FUNC_0(const struct msc_debug_info* VAR_0,
                                        unsigned int VAR_1)
{
    int VAR_2 = VAR_0->nomap;
    const OMAP_DATA* VAR_3 = VAR_0->omapp;
    int VAR_4;

    if (!VAR_2 || !VAR_3) return VAR_1;


    for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++)
        if (VAR_3[VAR_4].from <= VAR_1 && VAR_3[VAR_4+1].from > VAR_1)
            return !VAR_3[VAR_4].to ? 0 : VAR_3[VAR_4].to + (VAR_1 - VAR_3[VAR_4].from);

    return 0;
}

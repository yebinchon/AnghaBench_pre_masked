
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {unsigned int cache_nr; int has_modifier; TYPE_1__** cache; } ;
struct TYPE_2__ {char* modifier; int ce_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3 (struct index_state *VAR_0, void *VAR_1, unsigned int VAR_2)
{
    char *VAR_3 = VAR_1, *VAR_4 = VAR_1, *VAR_5;
    unsigned int VAR_6;
    unsigned int VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
        if (*VAR_4 == '\n') {
            while (VAR_7 < VAR_0->cache_nr &&
                   FUNC_0(VAR_0->cache[VAR_7]->ce_mode))
                ++VAR_7;
            if (VAR_7 >= VAR_0->cache_nr) {
                FUNC_2 ("More modifiers than cache entries.\n");
                return -1;
            }

            VAR_5 = FUNC_1(VAR_3, VAR_4 - VAR_3);
            VAR_0->cache[VAR_7]->modifier = VAR_5;
            VAR_7++;
            VAR_3 = VAR_4 + 1;
        }
        ++VAR_4;
    }

    while (VAR_7 < VAR_0->cache_nr &&
           FUNC_0(VAR_0->cache[VAR_7]->ce_mode))
        ++VAR_7;

    if (VAR_7 != VAR_0->cache_nr) {
        FUNC_2 ("Less modifiers than cached entries.\n");
        return -1;
    }

    VAR_0->has_modifier = 1;

    return 0;
}

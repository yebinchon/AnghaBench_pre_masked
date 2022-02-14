
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int * speakers; } ;
struct mp_chmap {int num; size_t* speaker; } ;



__attribute__((used)) static bool FUNC_0(const struct mp_chmap_sel *VAR_0, struct mp_chmap *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->num; VAR_2++) {
        if (!VAR_0->speakers[VAR_1->speaker[VAR_2]])
            return 0;
    }
    return 1;
}

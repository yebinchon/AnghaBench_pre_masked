
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; } ;
struct Range {unsigned int begin; unsigned int end; } ;



__attribute__((used)) static unsigned
FUNC_0(const struct RangeList *VAR_0, int VAR_1, int VAR_2)
{
    unsigned VAR_3 = VAR_1;
    unsigned VAR_4 = VAR_2;
    unsigned VAR_5;
    unsigned VAR_6 = 0;

    for (VAR_5=0; VAR_5<VAR_0->count; VAR_0++) {
        struct Range VAR_7 = VAR_0->list[VAR_5];
        if (VAR_7.begin > VAR_4)
            continue;
        if (VAR_7.end < VAR_3)
            continue;

        if (VAR_7.begin < VAR_3)
            VAR_7.begin = VAR_3;
        if (VAR_7.end > VAR_4)
            VAR_7.end = VAR_4;


        VAR_6 += VAR_7.end - VAR_7.begin + 1;
    }

    return VAR_6;
}

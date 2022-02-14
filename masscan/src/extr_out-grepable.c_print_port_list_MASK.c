
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; } ;
struct Range {unsigned int begin; unsigned int end; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,unsigned int,unsigned int,char*) ;

__attribute__((used)) static void
FUNC_1(const struct RangeList *VAR_0, int VAR_1, FILE *VAR_2)
{
    unsigned VAR_3 = VAR_1;
    unsigned VAR_4 = VAR_1 + 65535;
    unsigned VAR_5;

    for (VAR_5=0; VAR_5<VAR_0->count; VAR_0++) {
        struct Range VAR_6 = VAR_0->list[VAR_5];
        if (VAR_6.begin > VAR_4)
            continue;
        if (VAR_6.end < VAR_3)
            continue;

        if (VAR_6.begin < VAR_3)
            VAR_6.begin = VAR_3;
        if (VAR_6.end > VAR_4)
            VAR_6.end = VAR_4;

        FUNC_0(VAR_2, "%u-%u%s", VAR_6.begin, VAR_6.end, (VAR_5+1<VAR_0->count)?",":"");
    }
}

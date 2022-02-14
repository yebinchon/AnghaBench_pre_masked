
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RangeList {unsigned int count; TYPE_1__* list; } ;
struct Range {unsigned int begin; unsigned int end; } ;
struct TYPE_2__ {unsigned int begin; unsigned int end; } ;


 int FUNC_0 (TYPE_1__,struct Range) ;
 int FUNC_1 (struct RangeList*,unsigned int,unsigned int) ;
 int FUNC_2 (struct RangeList*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct RangeList *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    unsigned VAR_3;
    struct Range VAR_4;

    VAR_4.begin = VAR_1;
    VAR_4.end = VAR_2;



    for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
        if (!FUNC_0(VAR_0->list[VAR_3], VAR_4))
            continue;



        if (VAR_1 <= VAR_0->list[VAR_3].begin && VAR_2 >= VAR_0->list[VAR_3].end) {
            FUNC_2(VAR_0, VAR_3);
            VAR_3--;
            continue;
        }



        if (VAR_1 > VAR_0->list[VAR_3].begin && VAR_2 < VAR_0->list[VAR_3].end) {
            struct Range VAR_5;

            VAR_5.begin = VAR_2+1;
            VAR_5.end = VAR_0->list[VAR_3].end;


            VAR_0->list[VAR_3].end = VAR_1-1;

            FUNC_1(VAR_0, VAR_5.begin, VAR_5.end);
            VAR_3--;
            continue;
        }


        if (VAR_2 >= VAR_0->list[VAR_3].begin && VAR_2 < VAR_0->list[VAR_3].end) {
            VAR_0->list[VAR_3].begin = VAR_2+1;
        }


        if (VAR_1 > VAR_0->list[VAR_3].begin && VAR_1 <= VAR_0->list[VAR_3].end) {
             VAR_0->list[VAR_3].end = VAR_1-1;
        }


    }
}

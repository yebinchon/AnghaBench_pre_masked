
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; int is_sorted; int member_0; } ;
struct Range {scalar_t__ end; scalar_t__ begin; } ;
typedef int range ;


 struct Range VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Range*) ;
 int FUNC_2 (struct Range*,struct Range*,int) ;
 int FUNC_3 (struct Range,struct Range*,struct Range*) ;
 scalar_t__ FUNC_4 (struct Range) ;
 int FUNC_5 (struct RangeList*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct RangeList*) ;

void
FUNC_7( struct RangeList *VAR_1,
                  const struct RangeList *VAR_2)
{
    unsigned VAR_3;
    unsigned VAR_4;
    struct RangeList VAR_5 = {0};


    FUNC_6(VAR_1);
    FUNC_0(VAR_2->is_sorted);




    VAR_4 = 0;
    for (VAR_3=0; VAR_3<VAR_1->count; VAR_3++) {
        struct Range VAR_6 = VAR_1->list[VAR_3];



        while (VAR_4 < VAR_2->count && VAR_2->list[VAR_4].end < VAR_6.begin)
            VAR_4++;


        while (VAR_4 < VAR_2->count && VAR_2->list[VAR_4].begin <= VAR_6.end) {
            struct Range VAR_7 = VAR_0;

            FUNC_3(VAR_2->list[VAR_4], &VAR_6, &VAR_7);



            if (FUNC_4(VAR_7)) {
                FUNC_5(&VAR_5, VAR_6.begin, VAR_6.end);
                FUNC_2(&VAR_6, &VAR_7, sizeof(VAR_6));
            }

            if (VAR_2->list[VAR_4].begin > VAR_6.end)
                break;

            VAR_4++;
        }


        if (FUNC_4(VAR_6)) {
            FUNC_5(&VAR_5, VAR_6.begin, VAR_6.end);
        }
    }


    FUNC_1(VAR_1->list);
    VAR_1->list = VAR_5.list;
    VAR_1->count = VAR_5.count;
    VAR_5.list = ((void*)0);
    VAR_5.count = 0;



    FUNC_6(VAR_1);
}

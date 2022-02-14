
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range6List {size_t count; size_t max; struct Range6* list; } ;
struct Range6 {int end; int begin; } ;
typedef int ipv6address ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct Range6* FUNC_1 (struct Range6*,int,int) ;
 int FUNC_2 (struct Range6*,struct Range6*,size_t) ;
 int FUNC_3 (struct Range6*,struct Range6) ;
 scalar_t__ FUNC_4 (struct Range6,struct Range6) ;

void
FUNC_5(struct Range6List *VAR_0, const ipv6address VAR_1, const ipv6address VAR_2)
{
    struct Range6 VAR_3;

    VAR_3.begin = VAR_1;
    VAR_3.end = VAR_2;


    if (VAR_0->count + 1 >= VAR_0->max) {


        VAR_0->max = VAR_0->max * 2 + 1;

        VAR_0->list = FUNC_1(VAR_0->list, VAR_0->max, sizeof(VAR_0->list[0]));
    }

    {
        size_t VAR_4, VAR_5, VAR_6;

        VAR_4 = 0;
        VAR_5 = VAR_0->count;
        while (VAR_4 < VAR_5) {
            VAR_6 = VAR_4 + (VAR_5 - VAR_4)/2;
            if (FUNC_0(VAR_3.end, VAR_0->list[VAR_6].begin)) {

                VAR_5 = VAR_6;
            } else if (FUNC_0(VAR_0->list[VAR_6].end, VAR_3.begin)) {

                VAR_4 = VAR_6 + 1;
            } else
                break;
        }


        VAR_6 = VAR_4 + (VAR_5 - VAR_4)/2;





        if (VAR_6 < VAR_0->count && FUNC_4(VAR_0->list[VAR_6], VAR_3)) {
            FUNC_3(&VAR_0->list[VAR_6], VAR_3);
        } else {
            FUNC_2(VAR_0->list+VAR_6+1, VAR_0->list+VAR_6, (VAR_0->count - VAR_6) * sizeof(VAR_0->list[0]));
            VAR_0->list[VAR_6].begin = VAR_1;
            VAR_0->list[VAR_6].end = VAR_2;
            VAR_0->count++;
        }




        for (;;) {
            unsigned VAR_7 = 0;
            if (VAR_6 > 0 && FUNC_4(VAR_0->list[VAR_6-1], VAR_0->list[VAR_6])) {
                FUNC_3(&VAR_0->list[VAR_6-1], VAR_0->list[VAR_6]);
                FUNC_2(VAR_0->list+VAR_6, VAR_0->list+VAR_6+1, (VAR_0->count - VAR_6) * sizeof(VAR_0->list[0]));
                VAR_6--;
                VAR_7 = 1;
                VAR_0->count--;
            }
            if (VAR_6+1 < VAR_0->count && FUNC_4(VAR_0->list[VAR_6], VAR_0->list[VAR_6+1])) {
                FUNC_3(&VAR_0->list[VAR_6], VAR_0->list[VAR_6+1]);
                FUNC_2(VAR_0->list+VAR_6, VAR_0->list+VAR_6+1, (VAR_0->count - VAR_6) * sizeof(VAR_0->list[0]));
                VAR_7 = 1;
                VAR_0->count--;
            }
            if (!VAR_7)
                break;
        }
        return;
    }

}

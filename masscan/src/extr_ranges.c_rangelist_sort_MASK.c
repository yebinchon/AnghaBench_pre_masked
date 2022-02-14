
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RangeList {unsigned int count; int is_sorted; TYPE_1__* list; int member_0; } ;
struct TYPE_3__ {int end; int begin; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct RangeList*,int ,int ) ;

void
FUNC_4(struct RangeList *VAR_1)
{
    size_t VAR_2;
    struct RangeList VAR_3 = {0};
    unsigned VAR_4 = VAR_1->count;




    if (VAR_1->count == 0) {
        VAR_1->is_sorted = 1;
        return;
    }


    if (VAR_1->is_sorted) {
        return;
    }



    FUNC_0(3, "[+] range:sort: sorting...\n");
    FUNC_2( VAR_1->list,
            VAR_1->count,
            sizeof(VAR_1->list[0]),
            VAR_0);






    FUNC_0(3, "[+] range:sort: combining...\n");
    for (VAR_2=0; VAR_2<VAR_1->count; VAR_2++) {
        FUNC_3(&VAR_3, VAR_1->list[VAR_2].begin, VAR_1->list[VAR_2].end);
    }

    FUNC_0(3, "[+] range:sort: combined from %u elements to %u elements\n", VAR_4, VAR_3.count);
    FUNC_1(VAR_1->list);
    VAR_1->list = VAR_3.list;
    VAR_1->count = VAR_3.count;
    VAR_3.list = 0;

    FUNC_0(2, "[+] range:sort: done...\n");

    VAR_1->is_sorted = 1;
}

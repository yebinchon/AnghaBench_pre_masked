
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_list {struct list_item* tail; struct list_item* head; } ;
struct TYPE_2__ {struct list_item* prev; struct list_item* next; } ;
struct list_item {int v; TYPE_1__ list_node; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct the_list *VAR_0, int *VAR_1, int VAR_2)
{
    if (!VAR_0->head)
        FUNC_0(!VAR_0->tail);
    if (!VAR_0->tail)
        FUNC_0(!VAR_0->head);

    for (struct list_item *VAR_3 = VAR_0->head; VAR_3; VAR_3 = VAR_3->list_node.next) {
        if (VAR_3->list_node.prev) {
            FUNC_0(VAR_3->list_node.prev->list_node.next == VAR_3);
            FUNC_0(VAR_0->head != VAR_3);
        } else {
            FUNC_0(VAR_0->head == VAR_3);
        }
        if (VAR_3->list_node.next) {
            FUNC_0(VAR_3->list_node.next->list_node.prev == VAR_3);
            FUNC_0(VAR_0->tail != VAR_3);
        } else {
            FUNC_0(VAR_0->tail == VAR_3);
        }

        if (VAR_2 < 1)
            return 0;
        if (VAR_1[0] != VAR_3->v)
            return 0;

        VAR_2--;
        VAR_1++;
    }

    if (VAR_2)
        return 0;

    return 1;
}

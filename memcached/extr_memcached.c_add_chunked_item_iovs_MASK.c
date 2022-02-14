
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int used; struct TYPE_5__* next; int data; } ;
typedef TYPE_1__ item_chunk ;
struct TYPE_6__ {int it_flags; } ;
typedef TYPE_2__ item ;
typedef int conn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(conn *VAR_1, item *VAR_2, int VAR_3) {
    FUNC_2(VAR_2->it_flags & VAR_0);
    item_chunk *VAR_4 = (item_chunk *) FUNC_0(VAR_2);
    while (VAR_4) {
        int VAR_5 = (VAR_3 > VAR_4->used) ? VAR_4->used : VAR_3;
        if (FUNC_1(VAR_1, VAR_4->data, VAR_5) != 0) {
            return -1;
        }
        VAR_4 = VAR_4->next;
        VAR_3 -= VAR_5;
    }
    return 0;
}

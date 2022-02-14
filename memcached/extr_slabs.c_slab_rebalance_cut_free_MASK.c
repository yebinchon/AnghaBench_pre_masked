
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sl_curr; TYPE_3__* slots; } ;
typedef TYPE_2__ slabclass_t ;
struct TYPE_8__ {scalar_t__ it_flags; struct TYPE_8__* next; TYPE_1__* prev; } ;
typedef TYPE_3__ item ;
struct TYPE_6__ {TYPE_3__* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(slabclass_t *VAR_1, item *VAR_2) {

    FUNC_0(VAR_2->it_flags == VAR_0);
    if (VAR_1->slots == VAR_2) {
        VAR_1->slots = VAR_2->next;
    }
    if (VAR_2->next) VAR_2->next->prev = VAR_2->prev;
    if (VAR_2->prev) VAR_2->prev->next = VAR_2->next;
    VAR_1->sl_curr--;
}

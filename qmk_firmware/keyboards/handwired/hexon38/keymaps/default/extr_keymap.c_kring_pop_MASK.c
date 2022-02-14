
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; int ifirst; TYPE_1__* head; } ;
typedef TYPE_2__ kring_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int VAR_0 ;

void FUNC_0(kring_t *VAR_1) {
    if (VAR_1->count > 0) {
        VAR_1->ifirst += 1;
        VAR_1->ifirst %= VAR_0;
        VAR_1->head = VAR_1->head->next;
        VAR_1->count -= 1;
    }
}

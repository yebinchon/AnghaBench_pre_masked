
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int count; int ilast; TYPE_2__* items; TYPE_2__* head; scalar_t__ ifirst; } ;
typedef TYPE_3__ kring_t ;
struct TYPE_12__ {int tap; int event; } ;
typedef TYPE_4__ keyrecord_t ;
typedef size_t int8_t ;
struct TYPE_13__ {TYPE_2__* next; } ;
struct TYPE_9__ {int tap; int event; } ;
struct TYPE_10__ {int * next; TYPE_1__ record; int keycode; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int) ;

void FUNC_1(kring_t *VAR_1, uint16_t VAR_2, keyrecord_t *VAR_3) {
    if (VAR_1->count >= VAR_0) {

        return;
    }


    if (VAR_1->count == 0) {
        VAR_1->count += 1;
        VAR_1->ifirst = 0;
        VAR_1->ilast = 0;
        VAR_1->head = &(VAR_1->items[0]);
    }

    else {
        VAR_1->count += 1;
        VAR_1->ilast += 1;
        VAR_1->ilast %= VAR_0;
    }


    int8_t VAR_4 = VAR_1->ilast;


    VAR_1->items[VAR_4].keycode = VAR_2;
    VAR_1->items[VAR_4].record.event = VAR_3->event;

    VAR_1->items[VAR_4].record.tap = VAR_3->tap;

    VAR_1->items[VAR_4].next = ((void*)0);


    if (VAR_1->count > 1) {
        FUNC_0(VAR_1, VAR_1->count - 2)->next = &(VAR_1->items[VAR_4]);
    }
}

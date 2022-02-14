
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int it_flags; } ;
typedef TYPE_2__ item ;
struct TYPE_12__ {struct TYPE_12__* next; } ;
typedef TYPE_3__ io_wrap ;
struct TYPE_13__ {scalar_t__ ileft; scalar_t__ suffixleft; TYPE_3__** suffixlist; TYPE_3__** suffixcurr; TYPE_2__** ilist; TYPE_2__** icurr; TYPE_3__* io_wraplist; TYPE_1__* thread; TYPE_2__* item; } ;
typedef TYPE_4__ conn ;
struct TYPE_10__ {int io_cache; int suffix_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(conn *VAR_1) {
    FUNC_0(VAR_1 != ((void*)0));

    if (VAR_1->item) {
        FUNC_2(VAR_1->item);
        VAR_1->item = 0;
    }

    while (VAR_1->ileft > 0) {
        item *VAR_2 = *(VAR_1->icurr);
        FUNC_0((VAR_2->it_flags & VAR_0) == 0);
        FUNC_2(VAR_2);
        VAR_1->icurr++;
        VAR_1->ileft--;
    }

    if (VAR_1->suffixleft != 0) {
        for (; VAR_1->suffixleft > 0; VAR_1->suffixleft--, VAR_1->suffixcurr++) {
            FUNC_1(VAR_1->thread->suffix_cache, *(VAR_1->suffixcurr));
        }
    }
    VAR_1->icurr = VAR_1->ilist;
    VAR_1->suffixcurr = VAR_1->suffixlist;
}

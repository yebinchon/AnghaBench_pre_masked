
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ oom; int maxitems; scalar_t__ items; int static_items; int stack; } ;
typedef TYPE_1__ raxStack ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(raxStack *VAR_1) {
    VAR_1->stack = VAR_1->static_items;
    VAR_1->items = 0;
    VAR_1->maxitems = VAR_0;
    VAR_1->oom = 0;
}

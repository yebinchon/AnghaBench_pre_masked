
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; void** items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void**,void**,int) ;

void FUNC_2(list_t *VAR_0, int VAR_1, void *VAR_2) {
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->items[VAR_1 + 1], &VAR_0->items[VAR_1], sizeof(void*) * (VAR_0->length - VAR_1));
 VAR_0->length++;
 VAR_0->items[VAR_1] = VAR_2;
}

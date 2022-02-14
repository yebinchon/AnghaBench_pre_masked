
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(list_t *VAR_0, int VAR_1) {
 VAR_0->length--;
 FUNC_0(&VAR_0->items[VAR_1], &VAR_0->items[VAR_1 + 1], sizeof(void*) * (VAR_0->length - VAR_1));
}

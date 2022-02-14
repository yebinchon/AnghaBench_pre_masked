
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(list_t *VAR_0) {
 for (int VAR_1 = 0; VAR_1 < VAR_0->length; ++VAR_1) {
  FUNC_1(VAR_0->items[VAR_1]);
 }
 FUNC_0(VAR_0);
}

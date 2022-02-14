
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(list_t *VAR_0, list_t *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->length; ++VAR_2) {
  FUNC_0(VAR_0->items[VAR_2]);
 }
 FUNC_1(VAR_0);
 FUNC_2(VAR_1);
}

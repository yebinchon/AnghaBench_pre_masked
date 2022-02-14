
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(list_t *VAR_0, list_t *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_1->length; ++VAR_2) {
  FUNC_0(VAR_0, VAR_1->items[VAR_2]);
 }
}

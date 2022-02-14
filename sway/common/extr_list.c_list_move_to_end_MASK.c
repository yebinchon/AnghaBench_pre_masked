
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; void** items; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*) ;

void FUNC_3(list_t *VAR_0, void *VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->length; ++VAR_2) {
  if (VAR_0->items[VAR_2] == VAR_1) {
   break;
  }
 }
 if (!FUNC_2(VAR_2 < VAR_0->length, "Item not found in list")) {
  return;
 }
 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_1);
}

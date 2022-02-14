
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {TYPE_1__* marks; } ;
struct TYPE_2__ {int length; int * items; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sway_container*,char*) ;

void FUNC_2(struct sway_container *VAR_0) {
 for (int VAR_1 = 0; VAR_1 < VAR_0->marks->length; ++VAR_1) {
  FUNC_0(VAR_0->marks->items[VAR_1]);
 }
 VAR_0->marks->length = 0;
 FUNC_1(VAR_0, "mark");
}

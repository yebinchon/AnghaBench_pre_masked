
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {TYPE_1__* marks; } ;
typedef int json_object ;
struct TYPE_2__ {int length; scalar_t__* items; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct sway_container *VAR_0, void *VAR_1) {
 json_object *VAR_2 = (json_object *)VAR_1;
 for (int VAR_3 = 0; VAR_3 < VAR_0->marks->length; ++VAR_3) {
  char *VAR_4 = (char *)VAR_0->marks->items[VAR_3];
  FUNC_0(VAR_2, FUNC_1(VAR_4));
 }
}

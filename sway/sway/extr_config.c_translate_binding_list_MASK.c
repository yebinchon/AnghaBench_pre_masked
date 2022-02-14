
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sway_binding {int type; } ;
struct TYPE_6__ {int length; struct sway_binding** items; } ;
typedef TYPE_1__ list_t ;




 int FUNC_0 (struct sway_binding*,TYPE_1__*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct sway_binding*) ;

__attribute__((used)) static void FUNC_3(list_t *VAR_0, list_t *VAR_1,
  list_t *VAR_2) {
 for (int VAR_3 = 0; VAR_3 < VAR_0->length; ++VAR_3) {
  struct sway_binding *VAR_4 = VAR_0->items[VAR_3];
  FUNC_2(VAR_4);

  switch (VAR_4->type) {
  case 128:
   FUNC_0(VAR_4, VAR_1);
   break;
  case 129:
   FUNC_0(VAR_4, VAR_2);
   break;
  default:
   FUNC_1(0, "unexpected translated binding type: %d",
     VAR_4->type);
   break;
  }

 }
}

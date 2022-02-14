
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bar_config {int id; } ;
struct TYPE_8__ {int length; int * items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_9__ {TYPE_1__* bars; int current_config_path; } ;
struct TYPE_7__ {int length; struct bar_config** items; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (struct bar_config*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void FUNC_13(void *VAR_3) {

 list_t *VAR_4 = FUNC_2();
 for (int VAR_5 = 0; VAR_5 < VAR_1->bars->length; ++VAR_5) {
  struct bar_config *VAR_6 = VAR_1->bars->items[VAR_5];
  FUNC_5(VAR_4, FUNC_11(VAR_6->id));
 }

 if (!FUNC_7(VAR_1->current_config_path, 1, 0)) {
  FUNC_12(VAR_0, "Error(s) reloading config");
  FUNC_6(VAR_4);
  return;
 }

 FUNC_4(((void*)0), ((void*)0), "reload");

 FUNC_8();

 for (int VAR_7 = 0; VAR_7 < VAR_1->bars->length; ++VAR_7) {
  struct bar_config *VAR_8 = VAR_1->bars->items[VAR_7];
  for (int VAR_9 = 0; VAR_9 < VAR_4->length; ++VAR_9) {
   if (FUNC_10(VAR_8->id, VAR_4->items[VAR_9]) == 0) {
    FUNC_3(VAR_8);
    break;
   }
  }
 }
 FUNC_6(VAR_4);

 FUNC_1(1);
 FUNC_9(VAR_2, ((void*)0));

 FUNC_0();
}

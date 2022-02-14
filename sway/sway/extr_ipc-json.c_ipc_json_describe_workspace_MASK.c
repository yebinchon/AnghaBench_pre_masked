
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {char* representation; TYPE_3__* floating; int layout; int urgent; TYPE_2__* output; int * name; } ;
struct sway_container {int node; } ;
typedef int json_object ;
struct TYPE_6__ {int length; struct sway_container** items; } ;
struct TYPE_5__ {TYPE_1__* wlr_output; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_11(struct sway_workspace *VAR_0,
  json_object *VAR_1) {
 int VAR_2 = FUNC_4(VAR_0->name[0]) ? FUNC_0(VAR_0->name) : -1;

 FUNC_10(VAR_1, "num", FUNC_8(VAR_2));
 FUNC_10(VAR_1, "output", VAR_0->output ?
   FUNC_9(VAR_0->output->wlr_output->name) : ((void*)0));
 FUNC_10(VAR_1, "type", FUNC_9("workspace"));
 FUNC_10(VAR_1, "urgent",
   FUNC_7(VAR_0->urgent));
 FUNC_10(VAR_1, "representation", VAR_0->representation ?
   FUNC_9(VAR_0->representation) : ((void*)0));

 FUNC_10(VAR_1, "layout",
   FUNC_9(
    FUNC_2(VAR_0->layout)));
 FUNC_10(VAR_1, "orientation",
   FUNC_9(
    FUNC_3(VAR_0->layout)));


 json_object *VAR_3 = FUNC_6();
 for (int VAR_4 = 0; VAR_4 < VAR_0->floating->length; ++VAR_4) {
  struct sway_container *VAR_5 = VAR_0->floating->items[VAR_4];
  FUNC_5(VAR_3,
    FUNC_1(&VAR_5->node));
 }
 FUNC_10(VAR_1, "floating_nodes", VAR_3);
}

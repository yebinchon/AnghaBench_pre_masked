
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct sway_container {TYPE_4__ node; } ;
typedef int json_object ;
struct TYPE_6__ {TYPE_1__* scratchpad; } ;
struct TYPE_5__ {int length; struct sway_container** items; } ;


 scalar_t__ FUNC_0 (struct sway_container*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,char*,int,int *,struct wlr_box*) ;
 int * FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_8 (TYPE_2__*,struct wlr_box*) ;

__attribute__((used)) static json_object *FUNC_9(void) {
 struct wlr_box VAR_3;
 FUNC_8(VAR_2, &VAR_3);


 json_object *VAR_4 = FUNC_4();
 for (int VAR_5 = VAR_2->scratchpad->length - 1; VAR_5 >= 0; --VAR_5) {
  struct sway_container *VAR_6 = VAR_2->scratchpad->items[VAR_5];
  FUNC_3(VAR_4,
    FUNC_5(VAR_6->node.id));
 }

 json_object *VAR_7 = FUNC_1(VAR_1,
    "__i3_scratch", 0, VAR_4, &VAR_3);
 FUNC_7(VAR_7, "type",
   FUNC_6("workspace"));


 json_object *VAR_8 = FUNC_4();
 for (int VAR_9 = 0; VAR_9 < VAR_2->scratchpad->length; ++VAR_9) {
  struct sway_container *VAR_10 = VAR_2->scratchpad->items[VAR_9];
  if (FUNC_0(VAR_10)) {
   FUNC_3(VAR_8,
    FUNC_2(&VAR_10->node));
  }
 }
 FUNC_7(VAR_7, "floating_nodes", VAR_8);


 json_object *VAR_11 = FUNC_4();
 FUNC_3(VAR_11, FUNC_5(VAR_1));

 json_object *VAR_12 = FUNC_1(VAR_0,
     "__i3", 0, VAR_11, &VAR_3);
 FUNC_7(VAR_12, "type",
   FUNC_6("output"));
 FUNC_7(VAR_12, "layout",
   FUNC_6("output"));

 json_object *VAR_13 = FUNC_4();
 FUNC_3(VAR_13, VAR_7);
 FUNC_7(VAR_12, "nodes", VAR_13);

 return VAR_12;
}

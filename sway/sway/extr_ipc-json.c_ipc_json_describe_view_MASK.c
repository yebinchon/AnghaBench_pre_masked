
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wlr_box {int member_3; int member_2; int member_1; scalar_t__ member_0; } ;
struct TYPE_10__ {int border_thickness; int border; } ;
struct sway_container {char const* title; TYPE_3__* view; int content_height; int content_width; TYPE_1__ current; scalar_t__ x; scalar_t__ content_x; TYPE_2__* marks; } ;
struct TYPE_11__ {int length; char const** items; } ;
typedef TYPE_2__ list_t ;
typedef int json_object ;
struct TYPE_12__ {scalar_t__ type; int natural_height; int natural_width; scalar_t__ pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct wlr_box*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int) ;
 int * FUNC_4 (scalar_t__) ;
 int * FUNC_5 () ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (int *,char*,int *) ;
 char* FUNC_8 (TYPE_3__*) ;
 char* FUNC_9 (TYPE_3__*) ;
 char* FUNC_10 (TYPE_3__*) ;
 char* FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_15(struct sway_container *VAR_2, json_object *VAR_3) {
 FUNC_7(VAR_3, "pid", FUNC_4(VAR_2->view->pid));

 const char *VAR_4 = FUNC_8(VAR_2->view);
 FUNC_7(VAR_3, "app_id",
   VAR_4 ? FUNC_6(VAR_4) : ((void*)0));

 bool VAR_5 = FUNC_14(VAR_2->view);
 FUNC_7(VAR_3, "visible", FUNC_3(VAR_5));

 json_object *VAR_6 = FUNC_2();
 list_t *VAR_7 = VAR_2->marks;
 for (int VAR_8 = 0; VAR_8 < VAR_7->length; ++VAR_8) {
  FUNC_1(VAR_6, FUNC_6(VAR_7->items[VAR_8]));
 }

 FUNC_7(VAR_3, "marks", VAR_6);

 struct wlr_box VAR_9 = {
  VAR_2->content_x - VAR_2->x,
  (VAR_2->current.border == VAR_0) ? VAR_2->current.border_thickness : 0,
  VAR_2->content_width,
  VAR_2->content_height
 };

 FUNC_7(VAR_3, "window_rect", FUNC_0(&VAR_9));

 struct wlr_box VAR_10 = {0, 0, VAR_2->view->natural_width, VAR_2->view->natural_height};
 FUNC_7(VAR_3, "geometry", FUNC_0(&VAR_10));
}

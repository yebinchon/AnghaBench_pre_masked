
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_surface {int dummy; } ;
struct wlr_seat {int dummy; } ;
struct sway_node {scalar_t__ type; int sway_container; } ;
struct sway_cursor {TYPE_1__* seat; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
struct TYPE_2__ {struct wlr_seat* wlr_seat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sway_cursor*,char*,int *) ;
 int FUNC_2 (int ,struct wlr_surface*,struct sway_cursor*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct wlr_surface*) ;
 int FUNC_4 (struct wlr_seat*) ;
 int FUNC_5 (struct wlr_seat*,struct wlr_surface*,double,double) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sway_cursor *VAR_4, uint32_t VAR_5,
  struct sway_node *VAR_6, struct wlr_surface *VAR_7,
  double VAR_8, double VAR_9) {
 struct wlr_seat *VAR_10 = VAR_4->seat->wlr_seat;
 if (VAR_7) {
  if (FUNC_3(VAR_4->seat, VAR_7)) {
   FUNC_5(VAR_10, VAR_7, VAR_8, VAR_9);
  }
 } else if (VAR_6 && VAR_6->type == VAR_0) {

  enum wlr_edges VAR_11 = FUNC_2(VAR_6->sway_container, VAR_7, VAR_4);
  if (VAR_11 == VAR_2) {
   FUNC_1(VAR_4, "left_ptr", ((void*)0));
  } else if (FUNC_0(VAR_6->sway_container)) {
   FUNC_1(VAR_4, FUNC_6(VAR_11), ((void*)0));
  } else {
   if (VAR_11 & (VAR_1 | VAR_3)) {
    FUNC_1(VAR_4, "col-resize", ((void*)0));
   } else {
    FUNC_1(VAR_4, "row-resize", ((void*)0));
   }
  }
 } else {
  FUNC_1(VAR_4, "left_ptr", ((void*)0));
 }

 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_10);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ transform; scalar_t__ scale; } ;
struct wlr_surface {int * buffer; TYPE_4__ current; } ;
struct wlr_output {float scale; scalar_t__ transform; } ;
struct TYPE_9__ {TYPE_2__* floating; } ;
struct sway_workspace {TYPE_3__ current; } ;
struct sway_view {struct wlr_surface* surface; int container; scalar_t__ saved_buffer; } ;
struct TYPE_7__ {struct sway_workspace* active_workspace; } ;
struct sway_output {int * layers; TYPE_1__ current; struct wlr_output* wlr_output; } ;
struct sway_container {int dummy; } ;
struct TYPE_12__ {int drag_icons; int xwayland_unmanaged; } ;
struct TYPE_11__ {int presentation; } ;
struct TYPE_8__ {int length; struct sway_container** items; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct sway_container*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sway_output*,struct sway_view*,int ,size_t*) ;
 TYPE_6__* VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (struct sway_workspace*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wlr_output*,int *) ;
 int FUNC_5 (struct wlr_output*) ;
 int FUNC_6 (int ,struct wlr_surface*) ;

__attribute__((used)) static bool FUNC_7(struct sway_output *VAR_4,
  struct sway_view *VAR_5) {
 struct wlr_output *VAR_6 = VAR_4->wlr_output;
 struct sway_workspace *VAR_7 = VAR_4->current.active_workspace;
 if (!FUNC_2(VAR_7, "Expected an active workspace")) {
  return 0;
 }

 if (VAR_5->saved_buffer) {
  return 0;
 }

 for (int VAR_8 = 0; VAR_8 < VAR_7->current.floating->length; ++VAR_8) {
  struct sway_container *VAR_9 =
   VAR_7->current.floating->items[VAR_8];
  if (FUNC_0(VAR_9, VAR_5->container)) {
   return 0;
  }
 }







 if (!FUNC_3(&VAR_4->layers[VAR_0])) {
  return 0;
 }
 if (!FUNC_3(&VAR_2->drag_icons)) {
  return 0;
 }

 struct wlr_surface *VAR_10 = VAR_5->surface;
 if (VAR_10 == ((void*)0)) {
  return 0;
 }
 size_t VAR_11 = 0;
 FUNC_1(VAR_4, VAR_5,
  VAR_1, &VAR_11);
 if (VAR_11 != 1) {
  return 0;
 }

 if (VAR_10->buffer == ((void*)0)) {
  return 0;
 }

 if ((float)VAR_10->current.scale != VAR_6->scale ||
   VAR_10->current.transform != VAR_6->transform) {
  return 0;
 }

 FUNC_6(VAR_3.presentation, VAR_10);

 if (!FUNC_4(VAR_6, VAR_10->buffer)) {
  return 0;
 }
 return FUNC_5(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
struct wlr_xdg_popup {TYPE_3__ geometry; TYPE_2__* base; } ;
struct wlr_surface {int dummy; } ;
struct wlr_output {struct sway_output* data; } ;
struct sway_output {int dummy; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct sway_layer_surface {TYPE_5__* layer_surface; TYPE_4__ geo; } ;
struct sway_layer_popup {scalar_t__ parent_type; struct sway_layer_surface* parent_layer; struct wlr_xdg_popup* wlr_popup; struct sway_layer_popup* parent_popup; } ;
struct TYPE_10__ {struct wlr_output* output; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_7__ {TYPE_1__ geometry; struct wlr_surface* surface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_output*,int,int,struct wlr_surface*,int) ;

__attribute__((used)) static void FUNC_1(struct sway_layer_popup *VAR_1, bool VAR_2) {
 struct wlr_xdg_popup *VAR_3 = VAR_1->wlr_popup;
 struct wlr_surface *VAR_4 = VAR_3->base->surface;
 int VAR_5 = VAR_3->geometry.x - VAR_3->base->geometry.x;
 int VAR_6 = VAR_3->geometry.y - VAR_3->base->geometry.y;
 int VAR_7 = VAR_5, VAR_8 = VAR_6;
 struct sway_layer_surface *VAR_9;
 while (1) {
  if (VAR_1->parent_type == VAR_0) {
   VAR_1 = VAR_1->parent_popup;
   VAR_7 += VAR_1->wlr_popup->geometry.x;
   VAR_8 += VAR_1->wlr_popup->geometry.y;
  } else {
   VAR_9 = VAR_1->parent_layer;
   VAR_7 += VAR_9->geo.x;
   VAR_8 += VAR_9->geo.y;
   break;
  }
 }
 struct wlr_output *VAR_10 = VAR_9->layer_surface->output;
 struct sway_output *VAR_11 = VAR_10->data;
 FUNC_0(VAR_11, VAR_7, VAR_8, VAR_4, VAR_2);
}

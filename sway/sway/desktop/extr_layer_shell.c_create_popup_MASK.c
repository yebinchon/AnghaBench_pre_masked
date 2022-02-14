
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_xdg_popup {TYPE_4__* base; } ;
struct TYPE_10__ {int notify; } ;
struct sway_layer_popup {int parent_type; TYPE_5__ new_popup; TYPE_5__ commit; TYPE_5__ destroy; TYPE_5__ unmap; TYPE_5__ map; void* parent_layer; struct wlr_xdg_popup* wlr_popup; } ;
typedef enum layer_parent { ____Placeholder_layer_parent } layer_parent ;
struct TYPE_8__ {int new_popup; int destroy; int unmap; int map; } ;
struct TYPE_9__ {TYPE_3__ events; TYPE_2__* surface; } ;
struct TYPE_6__ {int commit; } ;
struct TYPE_7__ {TYPE_1__ events; } ;


 struct sway_layer_popup* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sway_layer_popup*) ;
 int FUNC_2 (int *,TYPE_5__*) ;

__attribute__((used)) static struct sway_layer_popup *FUNC_3(struct wlr_xdg_popup *VAR_5,
  enum layer_parent VAR_6, void *VAR_7) {
 struct sway_layer_popup *VAR_8 =
  FUNC_0(1, sizeof(struct sway_layer_popup));
 if (VAR_8 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_8->wlr_popup = VAR_5;
 VAR_8->parent_type = VAR_6;
 VAR_8->parent_layer = VAR_7;

 VAR_8->map.notify = VAR_2;
 FUNC_2(&VAR_5->base->events.map, &VAR_8->map);
 VAR_8->unmap.notify = VAR_4;
 FUNC_2(&VAR_5->base->events.unmap, &VAR_8->unmap);
 VAR_8->destroy.notify = VAR_1;
 FUNC_2(&VAR_5->base->events.destroy, &VAR_8->destroy);
 VAR_8->commit.notify = VAR_0;
 FUNC_2(&VAR_5->base->surface->events.commit, &VAR_8->commit);
 VAR_8->new_popup.notify = VAR_3;
 FUNC_2(&VAR_5->base->events.new_popup, &VAR_8->new_popup);

 FUNC_1(VAR_8);

 return VAR_8;
}

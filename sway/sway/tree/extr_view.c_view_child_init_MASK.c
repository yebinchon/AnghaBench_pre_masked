
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int destroy; int new_subsurface; int commit; } ;
struct wlr_surface {TYPE_1__ events; } ;
struct sway_view_child_impl {int dummy; } ;
struct TYPE_14__ {int notify; } ;
struct TYPE_10__ {int notify; } ;
struct TYPE_9__ {int notify; } ;
struct sway_view_child {struct sway_view* view; struct wlr_surface* surface; TYPE_7__ view_unmap; TYPE_3__ surface_unmap; TYPE_2__ surface_map; TYPE_7__ surface_destroy; TYPE_7__ surface_new_subsurface; TYPE_7__ surface_commit; int children; struct sway_view_child_impl const* impl; } ;
struct TYPE_11__ {int unmap; } ;
struct sway_view {TYPE_6__* container; TYPE_4__ events; } ;
struct sway_output {int wlr_output; } ;
struct TYPE_13__ {TYPE_5__* workspace; } ;
struct TYPE_12__ {struct sway_output* output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sway_view*,struct wlr_surface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_7__*) ;
 int FUNC_3 (struct wlr_surface*,int ) ;

void FUNC_4(struct sway_view_child *VAR_6,
  const struct sway_view_child_impl *VAR_7, struct sway_view *VAR_8,
  struct wlr_surface *VAR_9) {
 VAR_6->impl = VAR_7;
 VAR_6->view = VAR_8;
 VAR_6->surface = VAR_9;
 FUNC_1(&VAR_6->children);

 FUNC_2(&VAR_9->events.commit, &VAR_6->surface_commit);
 VAR_6->surface_commit.notify = VAR_0;
 FUNC_2(&VAR_9->events.new_subsurface,
  &VAR_6->surface_new_subsurface);
 VAR_6->surface_new_subsurface.notify =
  VAR_3;
 FUNC_2(&VAR_9->events.destroy, &VAR_6->surface_destroy);
 VAR_6->surface_destroy.notify = VAR_1;


 VAR_6->surface_map.notify = VAR_2;
 VAR_6->surface_unmap.notify = VAR_4;

 FUNC_2(&VAR_8->events.unmap, &VAR_6->view_unmap);
 VAR_6->view_unmap.notify = VAR_5;

 struct sway_output *VAR_10 = VAR_6->view->container->workspace->output;
 FUNC_3(VAR_6->surface, VAR_10->wlr_output);

 FUNC_0(VAR_6->view, VAR_9);
}

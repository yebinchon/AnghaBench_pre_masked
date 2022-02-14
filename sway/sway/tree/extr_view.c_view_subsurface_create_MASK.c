
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int destroy; } ;
struct wlr_subsurface {TYPE_1__ events; int surface; } ;
struct sway_view {int dummy; } ;
struct TYPE_7__ {int mapped; } ;
struct TYPE_6__ {int notify; } ;
struct sway_subsurface {TYPE_3__ child; TYPE_2__ destroy; } ;


 int VAR_0 ;
 struct sway_subsurface* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int *,struct sway_view*,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct sway_view *VAR_3,
  struct wlr_subsurface *VAR_4) {
 struct sway_subsurface *VAR_5 =
  FUNC_0(1, sizeof(struct sway_subsurface));
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_0, "Allocation failed");
  return;
 }
 FUNC_3(&VAR_5->child, &VAR_2, VAR_3,
  VAR_4->surface);

 FUNC_4(&VAR_4->events.destroy, &VAR_5->destroy);
 VAR_5->destroy.notify = VAR_1;

 VAR_5->child.mapped = 1;

 FUNC_2(&VAR_5->child, 1);
}

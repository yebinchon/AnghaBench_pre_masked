
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view_impl {int dummy; } ;
struct TYPE_2__ {int unmap; } ;
struct sway_view {int type; int allow_request_urgent; TYPE_1__ events; int executed_criteria; struct sway_view_impl const* impl; } ;
typedef enum sway_view_type { ____Placeholder_sway_view_type } sway_view_type ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sway_view *VAR_0, enum sway_view_type VAR_1,
  const struct sway_view_impl *VAR_2) {
 VAR_0->type = VAR_1;
 VAR_0->impl = VAR_2;
 VAR_0->executed_criteria = FUNC_0();
 VAR_0->allow_request_urgent = 1;
 FUNC_1(&VAR_0->events.unmap);
}

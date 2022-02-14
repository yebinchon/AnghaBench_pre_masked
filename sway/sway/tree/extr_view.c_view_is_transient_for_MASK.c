
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* impl; } ;
struct TYPE_2__ {scalar_t__ (* is_transient_for ) (struct sway_view*,struct sway_view*) ;} ;


 scalar_t__ FUNC_0 (struct sway_view*,struct sway_view*) ;

bool FUNC_1(struct sway_view *VAR_0,
  struct sway_view *VAR_1) {
 return VAR_0->impl->is_transient_for &&
  VAR_0->impl->is_transient_for(VAR_0, VAR_1);
}

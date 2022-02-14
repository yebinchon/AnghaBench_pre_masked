
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* set_tiled ) (struct sway_view*,int) ;} ;


 int FUNC_0 (struct sway_view*,int) ;

void FUNC_1(struct sway_view *VAR_0, bool VAR_1) {
 if (VAR_0->impl->set_tiled) {
  VAR_0->impl->set_tiled(VAR_0, VAR_1);
 }
}

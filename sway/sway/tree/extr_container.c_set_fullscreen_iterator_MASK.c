
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {TYPE_2__* view; } ;
struct TYPE_4__ {TYPE_1__* impl; } ;
struct TYPE_3__ {int (* set_fullscreen ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(struct sway_container *VAR_0, void *VAR_1) {
 if (!VAR_0->view) {
  return;
 }
 if (VAR_0->view->impl->set_fullscreen) {
  bool *VAR_2 = VAR_1;
  VAR_0->view->impl->set_fullscreen(VAR_0->view, *VAR_2);
 }
}

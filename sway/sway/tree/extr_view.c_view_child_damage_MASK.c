
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_view_child {TYPE_3__* view; int surface; TYPE_1__* impl; int mapped; } ;
struct TYPE_6__ {TYPE_2__* container; } ;
struct TYPE_5__ {scalar_t__ content_y; scalar_t__ content_x; } ;
struct TYPE_4__ {int (* get_root_coords ) (struct sway_view_child*,int*,int*) ;} ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct sway_view_child*,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct sway_view_child *VAR_0, bool VAR_1) {
 if (!VAR_0 || !VAR_0->mapped || !VAR_0->view || !VAR_0->view->container) {
  return;
 }
 int VAR_2, VAR_3;
 VAR_0->impl->get_root_coords(VAR_0, &VAR_2, &VAR_3);
 FUNC_0(VAR_0->surface,
   VAR_0->view->container->content_x + VAR_2,
   VAR_0->view->container->content_y + VAR_3, VAR_1);
}

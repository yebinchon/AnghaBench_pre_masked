
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_seat_device {TYPE_2__* input_device; int keyboard; } ;
struct sway_seat {int wlr_seat; } ;
struct sway_node {TYPE_1__* sway_container; } ;
struct TYPE_6__ {int surface; } ;
struct TYPE_5__ {int wlr_device; } ;
struct TYPE_4__ {TYPE_3__* view; } ;


 scalar_t__ FUNC_0 (struct sway_node*) ;
 struct sway_node* FUNC_1 (struct sway_seat*) ;
 int FUNC_2 (struct sway_seat*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sway_seat*,struct sway_seat_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sway_seat *VAR_0,
  struct sway_seat_device *VAR_1) {
 if (!VAR_1->keyboard) {
  FUNC_4(VAR_0, VAR_1);
 }
 FUNC_3(VAR_1->keyboard);
 FUNC_6(VAR_0->wlr_seat,
   VAR_1->input_device->wlr_device);
 struct sway_node *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 && FUNC_0(VAR_2)) {

  FUNC_5(VAR_0->wlr_seat);
  FUNC_2(VAR_0, VAR_2->sway_container->view->surface);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {scalar_t__ view; } ;
struct TYPE_2__ {scalar_t__ popup_during_fullscreen; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

bool FUNC_1(struct sway_container *VAR_2,
  struct sway_container *VAR_3) {
 return VAR_1->popup_during_fullscreen == VAR_0 &&
  VAR_2->view && VAR_3->view &&
  FUNC_0(VAR_2->view, VAR_3->view);
}

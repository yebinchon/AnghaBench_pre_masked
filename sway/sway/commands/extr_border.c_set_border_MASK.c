
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {int saved_border; int border; TYPE_1__* view; } ;
typedef enum sway_container_border { ____Placeholder_sway_container_border } sway_container_border ;
struct TYPE_2__ {int using_csd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sway_container*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(struct sway_container *VAR_1,
  enum sway_container_border VAR_2) {
 if (VAR_1->view) {
  if (VAR_1->view->using_csd && VAR_2 != VAR_0) {
   FUNC_1(VAR_1->view, 0);
  } else if (!VAR_1->view->using_csd && VAR_2 == VAR_0) {
   FUNC_1(VAR_1->view, 1);
   VAR_1->saved_border = VAR_1->border;
  }
 }
 if (VAR_2 != VAR_0 || FUNC_0(VAR_1)) {
  VAR_1->border = VAR_2;
 }
 if (VAR_1->view) {
  VAR_1->view->using_csd = VAR_2 == VAR_0;
 }
}

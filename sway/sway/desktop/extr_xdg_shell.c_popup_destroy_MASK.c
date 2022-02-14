
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
struct TYPE_3__ {int link; } ;
struct sway_xdg_popup {TYPE_2__ destroy; TYPE_1__ new_popup; } ;
struct sway_view_child {int * impl; } ;


 int FUNC_0 (struct sway_xdg_popup*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sway_view_child *VAR_1) {
 if (!FUNC_1(VAR_1->impl == &VAR_0,
   "Expected an xdg_shell popup")) {
  return;
 }
 struct sway_xdg_popup *VAR_2 = (struct sway_xdg_popup *)VAR_1;
 FUNC_2(&VAR_2->new_popup.link);
 FUNC_2(&VAR_2->destroy.link);
 FUNC_0(VAR_2);
}

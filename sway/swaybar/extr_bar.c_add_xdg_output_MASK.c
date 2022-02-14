
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_output {int * xdg_output; int output; TYPE_1__* bar; } ;
struct TYPE_2__ {int * xdg_output_manager; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,struct swaybar_output*) ;

__attribute__((used)) static void FUNC_3(struct swaybar_output *VAR_1) {
 if (VAR_1->xdg_output != ((void*)0)) {
  return;
 }
 FUNC_0(VAR_1->bar->xdg_output_manager != ((void*)0));
 VAR_1->xdg_output = FUNC_1(
  VAR_1->bar->xdg_output_manager, VAR_1->output);
 FUNC_2(VAR_1->xdg_output, &VAR_0,
  VAR_1);
}

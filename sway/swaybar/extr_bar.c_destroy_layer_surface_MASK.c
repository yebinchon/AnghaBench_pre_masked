
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_output {int frame_scheduled; scalar_t__ width; int * layer_surface; int surface; } ;


 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct swaybar_output *VAR_0) {
 if (!VAR_0->layer_surface) {
  return;
 }
 FUNC_1(VAR_0->layer_surface);
 FUNC_0(VAR_0->surface, ((void*)0), 0, 0);
 VAR_0->layer_surface = ((void*)0);
 VAR_0->width = 0;
 VAR_0->frame_scheduled = 0;
}

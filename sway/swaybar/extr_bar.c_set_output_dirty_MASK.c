
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_output {int dirty; scalar_t__ surface; scalar_t__ frame_scheduled; } ;


 int FUNC_0 (struct swaybar_output*) ;

__attribute__((used)) static void FUNC_1(struct swaybar_output *VAR_0) {
 if (VAR_0->frame_scheduled) {
  VAR_0->dirty = 1;
 } else if (VAR_0->surface) {
  FUNC_0(VAR_0);
 }
}

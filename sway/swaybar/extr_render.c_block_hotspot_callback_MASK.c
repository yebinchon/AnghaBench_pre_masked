
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct swaybar_output {TYPE_1__* bar; } ;
struct swaybar_hotspot {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct status_line {int dummy; } ;
struct i3bar_block {int dummy; } ;
typedef enum hotspot_event_handling { ____Placeholder_hotspot_event_handling } hotspot_event_handling ;
struct TYPE_2__ {struct status_line* status; } ;


 int FUNC_0 (struct status_line*,struct i3bar_block*,int,int,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static enum hotspot_event_handling FUNC_1(
  struct swaybar_output *VAR_0, struct swaybar_hotspot *VAR_1,
  int VAR_2, int VAR_3, uint32_t VAR_4, void *VAR_5) {
 struct i3bar_block *VAR_6 = VAR_5;
 struct status_line *VAR_7 = VAR_0->bar->status;
 return FUNC_0(VAR_7, VAR_6, VAR_2, VAR_3, VAR_2 - VAR_1->x,
   VAR_3 - VAR_1->y, VAR_1->width, VAR_1->height, VAR_4);
}

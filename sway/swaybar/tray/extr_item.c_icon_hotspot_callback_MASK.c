
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct swaybar_tray {TYPE_2__* bar; TYPE_4__* items; } ;
struct swaybar_sni {int dummy; } ;
struct swaybar_output {int output_x; int output_y; scalar_t__ output_height; TYPE_1__* bar; } ;
struct swaybar_hotspot {int dummy; } ;
struct TYPE_7__ {int left; int top; int bottom; } ;
struct swaybar_config {int position; TYPE_3__ gaps; } ;
typedef enum hotspot_event_handling { ____Placeholder_hotspot_event_handling } hotspot_event_handling ;
struct TYPE_8__ {struct swaybar_sni** items; } ;
struct TYPE_6__ {struct swaybar_config* config; } ;
struct TYPE_5__ {struct swaybar_tray* tray; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct swaybar_sni*,int,int,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ,void*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static enum hotspot_event_handling FUNC_3(
  struct swaybar_output *VAR_5, struct swaybar_hotspot *VAR_6,
  int VAR_7, int VAR_8, uint32_t VAR_9, void *VAR_10) {
 FUNC_2(VAR_2, "Clicked on %s", (char *)VAR_10);

 struct swaybar_tray *VAR_11 = VAR_5->bar->tray;
 int VAR_12 = FUNC_1(VAR_11->items, VAR_4, VAR_10);

 if (VAR_12 != -1) {
  struct swaybar_sni *VAR_13 = VAR_11->items->items[VAR_12];

  struct swaybar_config *VAR_14 = VAR_11->bar->config;
  int VAR_15 = VAR_5->output_x + VAR_14->gaps.left + VAR_7;
  bool VAR_16 = VAR_14->position & VAR_3;
  int VAR_17 = VAR_5->output_y + (VAR_16 ? VAR_14->gaps.top + VAR_8:
    (int) VAR_5->output_height - VAR_14->gaps.bottom - VAR_8);

  FUNC_2(VAR_2, "Guessing click position at (%d, %d)", VAR_15, VAR_17);
  FUNC_0(VAR_13, VAR_15, VAR_17, VAR_9, 1);
  return VAR_0;
 } else {
  FUNC_2(VAR_2, "but it doesn't exist");
 }

 return VAR_1;
}

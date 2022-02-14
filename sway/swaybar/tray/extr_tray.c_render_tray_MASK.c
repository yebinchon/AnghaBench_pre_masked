
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct swaybar_tray {TYPE_2__* items; } ;
struct swaybar_output {int scale; TYPE_1__* bar; scalar_t__ height; } ;
struct swaybar_config {int tray_padding; scalar_t__ tray_outputs; } ;
typedef int cairo_t ;
struct TYPE_4__ {int length; int * items; } ;
struct TYPE_3__ {struct swaybar_tray* tray; struct swaybar_config* config; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,struct swaybar_output*) ;
 int FUNC_1 (int *,struct swaybar_output*,double*,int ) ;

uint32_t FUNC_2(cairo_t *VAR_1, struct swaybar_output *VAR_2, double *VAR_3) {
 struct swaybar_config *VAR_4 = VAR_2->bar->config;
 if (VAR_4->tray_outputs) {
  if (FUNC_0(VAR_4->tray_outputs, VAR_0, VAR_2) == -1) {
   return 0;
  }
 }

 if ((int) VAR_2->height*VAR_2->scale <= 2*VAR_4->tray_padding) {
  return 2*VAR_4->tray_padding + 1;
 }

 uint32_t VAR_5 = 0;
 struct swaybar_tray *VAR_6 = VAR_2->bar->tray;
 for (int VAR_7 = 0; VAR_7 < VAR_6->items->length; ++VAR_7) {
  uint32_t VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6->items->items[VAR_7]);
  if (VAR_8 > VAR_5) {
   VAR_5 = VAR_8;
  }
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct output_config {char* name; int dpms_state; int background_option; int background; int transform; int subpixel; int scale; int y; int x; int refresh_rate; int height; int width; int enabled; } ;
struct TYPE_5__ {TYPE_1__* output_configs; } ;
struct TYPE_4__ {struct output_config** items; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct output_config*) ;
 int FUNC_1 (TYPE_1__*,struct output_config*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (struct output_config*) ;
 int FUNC_4 (struct output_config*,struct output_config*) ;
 int FUNC_5 (struct output_config*) ;
 struct output_config* FUNC_6 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;

struct output_config *FUNC_10(struct output_config *VAR_3) {
 bool VAR_4 = FUNC_7(VAR_3->name, "*") == 0;
 if (VAR_4) {
  FUNC_5(VAR_3);
 } else {
  FUNC_3(VAR_3);
 }

 int VAR_5 = FUNC_2(VAR_1->output_configs, VAR_2, VAR_3->name);
 if (VAR_5 >= 0) {
  FUNC_8(VAR_0, "Merging on top of existing output config");
  struct output_config *VAR_6 = VAR_1->output_configs->items[VAR_5];
  FUNC_4(VAR_6, VAR_3);
  FUNC_0(VAR_3);
  VAR_3 = VAR_6;
 } else if (!VAR_4) {
  FUNC_8(VAR_0, "Adding non-wildcard output config");
  VAR_5 = FUNC_2(VAR_1->output_configs, VAR_2, "*");
  if (VAR_5 >= 0) {
   FUNC_8(VAR_0, "Merging on top of output * config");
   struct output_config *VAR_7 = FUNC_6(VAR_3->name);
   FUNC_4(VAR_7, VAR_1->output_configs->items[VAR_5]);
   FUNC_4(VAR_7, VAR_3);
   FUNC_0(VAR_3);
   VAR_3 = VAR_7;
  }
  FUNC_1(VAR_1->output_configs, VAR_3);
 } else {

  FUNC_8(VAR_0, "Adding output * config");
  FUNC_1(VAR_1->output_configs, VAR_3);
 }

 FUNC_8(VAR_0, "Config stored for output %s (enabled: %d) (%dx%d@%fHz "
  "position %d,%d scale %f subpixel %s transform %d) (bg %s %s) (dpms %d)",
  VAR_3->name, VAR_3->enabled, VAR_3->width, VAR_3->height, VAR_3->refresh_rate,
  VAR_3->x, VAR_3->y, VAR_3->scale, FUNC_9(VAR_3->subpixel),
  VAR_3->transform, VAR_3->background, VAR_3->background_option, VAR_3->dpms_state);

 return VAR_3;
}

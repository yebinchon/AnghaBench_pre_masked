
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_output {TYPE_3__* wlr_output; } ;
struct output_config {char* name; int dpms_state; int background_option; int background; int transform; int scale; int y; int x; int refresh_rate; int height; int width; int enabled; } ;
struct TYPE_7__ {scalar_t__ reloading; TYPE_1__* output_configs; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {struct output_config** items; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct output_config*,TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct output_config*) ;
 int FUNC_3 (TYPE_1__*,struct output_config*) ;
 int FUNC_4 (TYPE_1__*,int ,char const*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (struct output_config*,struct output_config*) ;
 struct output_config* FUNC_7 (char*) ;
 int VAR_2 ;
 int FUNC_8 (char*,size_t,char*,char*,char const*) ;
 void* FUNC_9 (char const*) ;
 int FUNC_10 (int ,char*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct output_config *FUNC_11(char *VAR_3,
  struct sway_output *VAR_4) {
 const char *VAR_5 = VAR_4->wlr_output->name;

 struct output_config *VAR_6 = ((void*)0);
 struct output_config *VAR_7 = ((void*)0);
 struct output_config *VAR_8 = ((void*)0);

 size_t VAR_9 = FUNC_8(((void*)0), 0, "%s on %s", VAR_3, VAR_5) + 1;
 char *VAR_10 = FUNC_5(VAR_9);
 FUNC_8(VAR_10, VAR_9, "%s on %s", VAR_3, VAR_5);
 int VAR_11 = FUNC_4(VAR_1->output_configs, VAR_2, VAR_10);
 if (VAR_11 >= 0) {
  VAR_6 = VAR_1->output_configs->items[VAR_11];
 } else {
  VAR_11 = FUNC_4(VAR_1->output_configs, VAR_2, VAR_5);
  if (VAR_11 >= 0) {
   VAR_7 = VAR_1->output_configs->items[VAR_11];
  }

  VAR_11 = FUNC_4(VAR_1->output_configs, VAR_2, VAR_3);
  if (VAR_11 >= 0) {
   VAR_8 = VAR_1->output_configs->items[VAR_11];
  }
 }

 struct output_config *VAR_12 = FUNC_7("temp");
 if (VAR_1->reloading) {
  FUNC_0(VAR_12, VAR_4->wlr_output);
 }
 if (VAR_6) {

  FUNC_1(VAR_12->name);
  VAR_12->name = FUNC_9(VAR_10);
  FUNC_6(VAR_12, VAR_6);
 } else if (VAR_7 && VAR_8) {




  struct output_config *VAR_13 = FUNC_7(VAR_10);
  FUNC_6(VAR_13, VAR_7);
  FUNC_6(VAR_13, VAR_8);
  FUNC_3(VAR_1->output_configs, VAR_13);

  FUNC_1(VAR_12->name);
  VAR_12->name = FUNC_9(VAR_10);
  FUNC_6(VAR_12, VAR_13);

  FUNC_10(VAR_0, "Generated output config \"%s\" (enabled: %d)"
   " (%dx%d@%fHz position %d,%d scale %f transform %d) (bg %s %s)"
   " (dpms %d)", VAR_12->name, VAR_12->enabled, VAR_12->width,
   VAR_12->height, VAR_12->refresh_rate, VAR_12->x, VAR_12->y,
   VAR_12->scale, VAR_12->transform, VAR_12->background,
   VAR_12->background_option, VAR_12->dpms_state);
 } else if (VAR_7) {

  FUNC_1(VAR_12->name);
  VAR_12->name = FUNC_9(VAR_5);
  FUNC_6(VAR_12, VAR_7);
 } else if (VAR_8) {

  FUNC_1(VAR_12->name);
  VAR_12->name = FUNC_9(VAR_3);
  FUNC_6(VAR_12, VAR_8);
 } else {
  VAR_11 = FUNC_4(VAR_1->output_configs, VAR_2, "*");
  if (VAR_11 >= 0) {

   FUNC_1(VAR_12->name);
   VAR_12->name = FUNC_9("*");
   FUNC_6(VAR_12, VAR_1->output_configs->items[VAR_11]);
  } else if (!VAR_1->reloading) {



   FUNC_2(VAR_12);
   VAR_12 = ((void*)0);
  }
 }

 FUNC_1(VAR_10);
 return VAR_12;
}

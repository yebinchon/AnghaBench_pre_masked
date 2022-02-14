
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_config {char* identifier; int * xkb_file; int xkb_file_is_set; } ;
struct TYPE_5__ {struct input_config** items; } ;
typedef TYPE_1__ list_t ;
struct TYPE_6__ {TYPE_1__* input_configs; TYPE_1__* input_type_configs; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct input_config*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,struct input_config*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (struct input_config*,struct input_config*) ;
 int FUNC_4 (struct input_config*) ;
 int FUNC_5 (struct input_config*) ;
 struct input_config* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (struct input_config*,char**) ;
 int FUNC_12 (struct input_config*,char**) ;
 int FUNC_13 (struct input_config*,struct input_config*,char**) ;

struct input_config *FUNC_14(struct input_config *VAR_3,
  char **VAR_4) {
 bool VAR_5 = FUNC_7(VAR_3->identifier, "*") == 0;
 if (VAR_5 && VAR_4 && !FUNC_12(VAR_3, VAR_4)) {
  return ((void*)0);
 }

 bool VAR_6 = FUNC_9(VAR_3->identifier, "type:", FUNC_8("type:")) == 0;
 if (VAR_6 && VAR_4 && !FUNC_11(VAR_3, VAR_4)) {
  return ((void*)0);
 }

 list_t *VAR_7 = VAR_6 ? VAR_1->input_type_configs
  : VAR_1->input_configs;

 struct input_config *VAR_8 = ((void*)0);
 bool VAR_9 = 0;

 int VAR_10 = FUNC_2(VAR_7, VAR_2, VAR_3->identifier);
 if (VAR_10 >= 0) {
  VAR_8 = VAR_7->items[VAR_10];
 }

 VAR_10 = FUNC_2(VAR_1->input_configs, VAR_2, "*");
 if (!VAR_8 && VAR_10 >= 0) {
  VAR_8 = FUNC_6(VAR_3->identifier);
  FUNC_3(VAR_8, VAR_1->input_configs->items[VAR_10]);
  VAR_9 = 1;
 }

 if (VAR_4 && !FUNC_13(VAR_8, VAR_3, VAR_4)) {
  if (VAR_9) {
   FUNC_0(VAR_8);
  }
  return ((void*)0);
 }

 if (VAR_5) {
  FUNC_5(VAR_3);
 }

 if (VAR_6) {
  FUNC_4(VAR_3);
 }

 if (VAR_8) {
  FUNC_3(VAR_8, VAR_3);
  FUNC_0(VAR_3);
  VAR_3 = VAR_8;
 }

 VAR_3->xkb_file_is_set = VAR_3->xkb_file != ((void*)0);

 if (!VAR_8 || VAR_9) {
  FUNC_1(VAR_7, VAR_3);
 }

 FUNC_10(VAR_0, "Config stored for input %s", VAR_3->identifier);

 return VAR_3;
}

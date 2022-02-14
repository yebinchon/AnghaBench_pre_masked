
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_binding {int group; int flags; scalar_t__ type; scalar_t__ order; int command; TYPE_4__* keys; int modifiers; void* input; } ;
struct cmd_results {int dummy; } ;
struct TYPE_13__ {int length; char** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_15__ {TYPE_1__* current_mode; } ;
struct TYPE_14__ {scalar_t__ length; } ;
struct TYPE_12__ {TYPE_2__* mouse_bindings; TYPE_2__* keysym_bindings; TYPE_2__* keycode_bindings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct cmd_results* FUNC_0 (struct sway_binding*,TYPE_2__*,char const*,char*,int) ;
 int VAR_14 ;
 struct cmd_results* FUNC_1 (struct sway_binding*,TYPE_2__*,char const*,char*) ;
 void* FUNC_2 (int,int) ;
 struct cmd_results* FUNC_3 (int,char const*,int ,int) ;
 struct cmd_results* FUNC_4 (int ,char*,...) ;
 TYPE_9__* VAR_15 ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct sway_binding*) ;
 int FUNC_8 (char*) ;
 struct cmd_results* FUNC_9 (char*,int,int *,scalar_t__*) ;
 int FUNC_10 (char**,int) ;
 int VAR_16 ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 void* FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char**,int) ;
 int FUNC_21 (int ,char*,char*) ;
 int FUNC_22 (struct sway_binding*) ;

__attribute__((used)) static struct cmd_results *FUNC_23(int VAR_17, char **VAR_18,
  bool VAR_19, bool VAR_20) {
 const char *VAR_21;
 int VAR_22 = 2;
 if (VAR_20) {
  VAR_21 = VAR_19 ? "unbindcode" : "unbindsym";
  VAR_22--;
 } else {
  VAR_21 = VAR_19 ? "bindcode": "bindsym";
 }

 struct cmd_results *VAR_23 = ((void*)0);
 if ((VAR_23 = FUNC_3(VAR_17, VAR_21, VAR_11, VAR_22))) {
  return VAR_23;
 }

 struct sway_binding *VAR_24 = FUNC_2(1, sizeof(struct sway_binding));
 if (!VAR_24) {
  return FUNC_4(VAR_10, "Unable to allocate binding");
 }
 VAR_24->input = FUNC_17("*");
 VAR_24->keys = FUNC_5();
 VAR_24->group = VAR_13;
 VAR_24->modifiers = 0;
 VAR_24->flags = 0;
 VAR_24->type = VAR_19 ? VAR_3 : VAR_4;

 bool VAR_25 = 0;
 bool VAR_26 = 1;

 while (VAR_17 > 0) {
  if (FUNC_16("--release", VAR_18[0]) == 0) {
   VAR_24->flags |= VAR_8;
  } else if (FUNC_16("--locked", VAR_18[0]) == 0) {
   VAR_24->flags |= VAR_5;
  } else if (FUNC_16("--whole-window", VAR_18[0]) == 0) {
   VAR_24->flags |= VAR_0 | VAR_2 | VAR_9;
  } else if (FUNC_16("--border", VAR_18[0]) == 0) {
   VAR_24->flags |= VAR_0;
  } else if (FUNC_16("--to-code", VAR_18[0]) == 0) {
   if (!VAR_19) {
    VAR_24->flags |= VAR_1;
   }
  } else if (FUNC_16("--exclude-titlebar", VAR_18[0]) == 0) {
   VAR_25 = 1;
  } else if (FUNC_19("--input-device=", VAR_18[0],
     FUNC_18("--input-device=")) == 0) {
   FUNC_6(VAR_24->input);
   VAR_24->input = FUNC_17(VAR_18[0] + FUNC_18("--input-device="));
  } else if (FUNC_16("--no-warn", VAR_18[0]) == 0) {
   VAR_26 = 0;
  } else {
   break;
  }
  VAR_18++;
  VAR_17--;
 }
 if (VAR_24->flags & (VAR_0 | VAR_2 | VAR_9)
   || VAR_25) {
  VAR_24->type = VAR_24->type == VAR_3 ?
   VAR_6 : VAR_7;
 }

 if (VAR_17 < VAR_22) {
  FUNC_7(VAR_24);
  return FUNC_4(VAR_10,
   "Invalid %s command "
   "(expected at least %d non-option arguments, got %d)",
   VAR_21, VAR_22, VAR_17);
 }

 list_t *VAR_27 = FUNC_15(VAR_18[0], "+");
 for (int VAR_28 = 0; VAR_28 < VAR_27->length; ++VAR_28) {

  if (FUNC_19(VAR_27->items[VAR_28], "Group", FUNC_18("Group")) == 0) {
   if (VAR_24->group != VAR_13) {
    FUNC_7(VAR_24);
    FUNC_13(VAR_27);
    return FUNC_4(VAR_10,
      "Only one group can be specified");
   }
   char *VAR_29;
   int VAR_30 = FUNC_20(VAR_27->items[VAR_28] + FUNC_18("Group"), &VAR_29, 10);
   if (VAR_30 < 1 || VAR_30 > 4 || VAR_29[0] != '\0') {
    FUNC_7(VAR_24);
    FUNC_13(VAR_27);
    return FUNC_4(VAR_10, "Invalid group");
   }
   VAR_24->group = VAR_30 - 1;
   continue;
  } else if (FUNC_16(VAR_27->items[VAR_28], "Mode_switch") == 0) {

   if (VAR_24->group != VAR_13) {
    FUNC_7(VAR_24);
    FUNC_13(VAR_27);
    return FUNC_4(VAR_10,
      "Only one group can be specified");
   }
   VAR_24->group = 1;
  }


  uint32_t VAR_31;
  if ((VAR_31 = FUNC_8(VAR_27->items[VAR_28])) > 0) {
   VAR_24->modifiers |= VAR_31;
   continue;
  }


  uint32_t VAR_32 = 0;
  VAR_23 = FUNC_9(VAR_27->items[VAR_28], VAR_24->keys->length == 0,
         &VAR_32, &VAR_24->type);
  if (VAR_23) {
   FUNC_7(VAR_24);
   FUNC_12(VAR_27);
   return VAR_23;
  }

  uint32_t *VAR_33 = FUNC_2(1, sizeof(uint32_t));
  if (!VAR_33) {
   FUNC_7(VAR_24);
   FUNC_13(VAR_27);
   return FUNC_4(VAR_10,
     "Unable to allocate binding key");
  }
  *VAR_33 = VAR_32;
  FUNC_11(VAR_24->keys, VAR_33);
 }
 FUNC_13(VAR_27);



 if (VAR_25) {
  VAR_24->flags &= ~VAR_9;
 } else if (VAR_24->type == VAR_6
   || VAR_24->type == VAR_7) {
  VAR_24->flags |= VAR_9;
 }


 FUNC_14(VAR_24->keys, VAR_16);


 if (!FUNC_22(VAR_24)) {
  FUNC_21(VAR_12,
    "Unable to translate bindsym into bindcode: %s", VAR_18[0]);
 }

 list_t *VAR_34;
 if (VAR_24->type == VAR_3) {
  VAR_34 = VAR_15->current_mode->keycode_bindings;
 } else if (VAR_24->type == VAR_4) {
  VAR_34 = VAR_15->current_mode->keysym_bindings;
 } else {
  VAR_34 = VAR_15->current_mode->mouse_bindings;
 }

 if (VAR_20) {
  return FUNC_1(VAR_24, VAR_34, VAR_21, VAR_18[0]);
 }

 VAR_24->command = FUNC_10(VAR_18 + 1, VAR_17 - 1);
 VAR_24->order = VAR_14++;
 return FUNC_0(VAR_24, VAR_34, VAR_21, VAR_18[0], VAR_26);
}

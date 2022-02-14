
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_binding {char* command; scalar_t__ type; TYPE_1__* keys; int modifiers; } ;
typedef int json_object ;
struct TYPE_2__ {int length; scalar_t__* items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const**,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int) ;
 int * FUNC_7 () ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (int,char*,int) ;

void FUNC_15(struct sway_binding *VAR_6) {
 if (!FUNC_1(VAR_4)) {
  return;
 }
 FUNC_13(VAR_5, "Sending binding event");

 json_object *VAR_7 = FUNC_7();
 FUNC_9(VAR_7, "command", FUNC_8(VAR_6->command));

 const char *VAR_8[10];
 int VAR_9 = FUNC_0(VAR_8, VAR_6->modifiers);
 json_object *VAR_10 = FUNC_5();
 for (int VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
  FUNC_3(VAR_10, FUNC_8(VAR_8[VAR_11]));
 }
 FUNC_9(VAR_7, "event_state_mask", VAR_10);

 json_object *VAR_12 = FUNC_5();
 int VAR_13 = 0;
 json_object *VAR_14 = FUNC_5();
 json_object *VAR_15 = ((void*)0);

 if (VAR_6->type == VAR_0) {
  uint32_t VAR_16;
  for (int VAR_17 = 0; VAR_17 < VAR_6->keys->length; ++VAR_17) {
   VAR_16 = *(uint32_t *)VAR_6->keys->items[VAR_17];
   FUNC_3(VAR_12, FUNC_6(VAR_16));
   if (VAR_17 == 0) {
    VAR_13 = VAR_16;
   }
  }
 } else {
  uint32_t VAR_18;
  char VAR_19[64];
  for (int VAR_20 = 0; VAR_20 < VAR_6->keys->length; ++VAR_20) {
   VAR_18 = *(uint32_t *)VAR_6->keys->items[VAR_20];
   if (VAR_18 >= VAR_3 && VAR_18 <= VAR_3 + 8) {
    FUNC_12(VAR_19, 64, "button%u", VAR_18 - VAR_3 + 1);
   } else if (FUNC_14(VAR_18, VAR_19, 64) < 0) {
    continue;
   }

   json_object *VAR_21 = FUNC_8(VAR_19);
   if (VAR_20 == 0) {


    FUNC_3(VAR_14, FUNC_4(VAR_21));
    VAR_15 = VAR_21;
   } else {
    FUNC_3(VAR_14, VAR_21);
   }
  }
 }

 FUNC_9(VAR_7, "input_codes", VAR_12);
 FUNC_9(VAR_7, "input_code", FUNC_6(VAR_13));
 FUNC_9(VAR_7, "symbols", VAR_14);
 FUNC_9(VAR_7, "symbol", VAR_15);

 bool VAR_22 = VAR_6->type == VAR_1 ||
  VAR_6->type == VAR_2;
 FUNC_9(VAR_7, "input_type", VAR_22
   ? FUNC_8("mouse")
   : FUNC_8("keyboard"));

 json_object *VAR_23 = FUNC_7();
 FUNC_9(VAR_23, "change", FUNC_8("run"));
 FUNC_9(VAR_23, "binding", VAR_7);
 const char *VAR_24 = FUNC_11(VAR_23);
 FUNC_2(VAR_24, VAR_4);
 FUNC_10(VAR_23);
}

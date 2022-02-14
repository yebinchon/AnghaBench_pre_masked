
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {int layout; int output; } ;
struct sway_output {int dummy; } ;
struct sway_container {scalar_t__ fullscreen_mode; struct sway_workspace* workspace; struct sway_container* parent; } ;
struct TYPE_4__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sway_container* FUNC_0 (struct sway_container*) ;
 TYPE_1__* FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct sway_container*,int) ;
 scalar_t__ FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*,int ,int) ;
 int FUNC_5 (struct sway_container*,struct sway_workspace*) ;
 int FUNC_6 (struct sway_container*,struct sway_workspace*,int) ;
 int FUNC_7 (struct sway_container*) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_1__*,struct sway_container*) ;
 struct sway_workspace* FUNC_10 (struct sway_output*) ;
 struct sway_output* FUNC_11 (int ,int) ;
 int FUNC_12 (struct sway_workspace*,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct sway_workspace*,struct sway_container*,int) ;
 int FUNC_15 (struct sway_workspace*,struct sway_container*,int) ;

__attribute__((used)) static bool FUNC_16(struct sway_container *VAR_7,
  enum wlr_direction VAR_8) {

 if (VAR_7->fullscreen_mode == VAR_1) {
  struct sway_output *VAR_9 =
   FUNC_11(VAR_7->workspace->output, VAR_8);
  if (!VAR_9) {
   return 0;
  }
  struct sway_workspace *VAR_10 = FUNC_10(VAR_9);
  if (!FUNC_12(VAR_10, "Expected output to have a workspace")) {
   return 0;
  }
  FUNC_5(VAR_7, VAR_10);
  return 1;
 }
 if (VAR_7->fullscreen_mode == VAR_0) {
  return 0;
 }


 if (VAR_7->parent) {
  struct sway_container *VAR_11 =
   FUNC_0(VAR_7->parent);
  if (VAR_11 != VAR_7->parent) {
   return 1;
  }
 }




 struct sway_container *VAR_12 = VAR_7;
 int VAR_13 =
  VAR_8 == VAR_5 || VAR_8 == VAR_6 ? -1 : 1;

 while (VAR_12) {
  list_t *VAR_14 = FUNC_1(VAR_12);
  if (VAR_14) {
   enum sway_container_layout VAR_15 = FUNC_7(VAR_12);
   int VAR_16 = FUNC_9(VAR_14, VAR_12);
   int VAR_17 = VAR_16 + VAR_13;



   if (VAR_12->fullscreen_mode || FUNC_3(VAR_12)) {
    return 0;
   }

   if (FUNC_8(VAR_15, VAR_8)) {
    if (VAR_17 == -1 || VAR_17 == VAR_14->length) {
     if (VAR_12->parent == VAR_7->parent) {
      VAR_12 = VAR_12->parent;
      continue;
     } else {

      if (VAR_12->parent) {
       FUNC_2(VAR_12->parent, VAR_7,
         VAR_16 + (VAR_13 < 0 ? 0 : 1));
      } else {
       FUNC_14(VAR_12->workspace, VAR_7,
         VAR_16 + (VAR_13 < 0 ? 0 : 1));
      }
      return 1;
     }
    } else {

     FUNC_4(VAR_7,
       VAR_14->items[VAR_17], VAR_8);
     return 1;
    }
   }
  }

  VAR_12 = VAR_12->parent;
 }


 struct sway_workspace *VAR_18 = VAR_7->workspace;
 if (VAR_18) {
  if (!FUNC_8(VAR_18->layout, VAR_8)) {
   FUNC_15(VAR_18, VAR_7, VAR_8);
   return 1;
  } else if (VAR_18->layout == VAR_3 || VAR_18->layout == VAR_2) {
   FUNC_15(VAR_18, VAR_7, VAR_8);
   return 1;
  }


  struct sway_output *VAR_19 =
   FUNC_11(VAR_7->workspace->output, VAR_8);
  if (VAR_19) {
   struct sway_workspace *VAR_20 = FUNC_10(VAR_19);
   if (!FUNC_12(VAR_20, "Expected output to have a workspace")) {
    return 0;
   }
   FUNC_6(VAR_7, VAR_20, VAR_8);
   return 1;
  }
  FUNC_13(VAR_4, "Hit edge of output, nowhere else to go");
 }
 return 0;
}

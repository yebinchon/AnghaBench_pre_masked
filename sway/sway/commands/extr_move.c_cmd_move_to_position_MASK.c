
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sway_workspace {int x; int width; int y; int height; } ;
struct sway_seat {TYPE_2__* cursor; } ;
struct sway_container {int width; int height; struct sway_workspace* workspace; } ;
struct cmd_results {int dummy; } ;
struct TYPE_8__ {struct sway_seat* seat; struct sway_container* container; } ;
struct TYPE_10__ {TYPE_3__ handler_context; } ;
struct TYPE_9__ {int x; int width; int y; int height; } ;
struct TYPE_7__ {TYPE_1__* cursor; } ;
struct TYPE_6__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (struct sway_container*,double,double) ;
 int FUNC_2 (struct sway_container*) ;
 char* VAR_4 ;
 TYPE_4__* VAR_5 ;
 struct sway_workspace* FUNC_3 (struct sway_seat*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

__attribute__((used)) static struct cmd_results *FUNC_7(int VAR_6, char **VAR_7) {
 struct sway_container *VAR_8 = VAR_3->handler_context.container;
 if (!VAR_8 || !FUNC_2(VAR_8)) {
  return FUNC_0(VAR_0, "Only floating containers "
    "can be moved to an absolute position");
 }

 if (!VAR_6) {
  return FUNC_0(VAR_1, VAR_4);
 }

 bool VAR_9 = 0;
 if (FUNC_5(VAR_7[0], "absolute") == 0) {
  VAR_9 = 1;
  --VAR_6;
  ++VAR_7;
 }
 if (!VAR_6) {
  return FUNC_0(VAR_1, VAR_4);
 }
 if (FUNC_5(VAR_7[0], "position") == 0) {
  --VAR_6;
  ++VAR_7;
 }
 if (!VAR_6) {
  return FUNC_0(VAR_1, VAR_4);
 }
 if (FUNC_5(VAR_7[0], "cursor") == 0 || FUNC_5(VAR_7[0], "mouse") == 0 ||
   FUNC_5(VAR_7[0], "pointer") == 0) {
  if (VAR_9) {
   return FUNC_0(VAR_1, VAR_4);
  }
  struct sway_seat *VAR_10 = VAR_3->handler_context.seat;
  if (!VAR_10->cursor) {
   return FUNC_0(VAR_0, "No cursor device");
  }
  double VAR_11 = VAR_10->cursor->cursor->x - VAR_8->width / 2;
  double VAR_12 = VAR_10->cursor->cursor->y - VAR_8->height / 2;
  FUNC_1(VAR_8, VAR_11, VAR_12);
  return FUNC_0(VAR_2, ((void*)0));
 } else if (FUNC_5(VAR_7[0], "center") == 0) {
  double VAR_13, VAR_14;
  if (VAR_9) {
   VAR_13 = VAR_5->x + (VAR_5->width - VAR_8->width) / 2;
   VAR_14 = VAR_5->y + (VAR_5->height - VAR_8->height) / 2;
  } else {
   struct sway_workspace *VAR_15 = VAR_8->workspace;
   if (!VAR_15) {
    struct sway_seat *VAR_16 = VAR_3->handler_context.seat;
    VAR_15 = FUNC_3(VAR_16);
   }
   VAR_13 = VAR_15->x + (VAR_15->width - VAR_8->width) / 2;
   VAR_14 = VAR_15->y + (VAR_15->height - VAR_8->height) / 2;
  }
  FUNC_1(VAR_8, VAR_13, VAR_14);
  return FUNC_0(VAR_2, ((void*)0));
 }

 if (VAR_6 < 2) {
  return FUNC_0(VAR_0, VAR_4);
 }

 double VAR_17, VAR_18;
 char *VAR_19;
 VAR_17 = (double)FUNC_6(VAR_7[0], &VAR_19, 10);
 if (*VAR_19 != '\0' && FUNC_4(VAR_19, "px") != 0) {
  return FUNC_0(VAR_0, "Invalid position specified");
 }
 if (FUNC_5(VAR_7[1], "px") == 0) {
  --VAR_6;
  ++VAR_7;
 }

 if (VAR_6 > 3) {
  return FUNC_0(VAR_0, VAR_4);
 }

 VAR_18 = (double)FUNC_6(VAR_7[1], &VAR_19, 10);
 if ((*VAR_19 != '\0' && FUNC_4(VAR_19, "px") != 0) ||
   (VAR_6 == 3 && FUNC_5(VAR_7[2], "px") != 0)) {
  return FUNC_0(VAR_0, "Invalid position specified");
 }

 if (!VAR_9) {
  struct sway_workspace *VAR_20 = VAR_8->workspace;
  if (!VAR_20) {
   struct sway_seat *VAR_21 = VAR_3->handler_context.seat;
   VAR_20 = FUNC_3(VAR_21);
  }
  VAR_17 += VAR_20->x;
  VAR_18 += VAR_20->y;
 }
 FUNC_1(VAR_8, VAR_17, VAR_18);
 return FUNC_0(VAR_2, ((void*)0));
}

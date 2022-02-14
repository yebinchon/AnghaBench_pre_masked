
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {TYPE_2__* container; } ;
struct sway_seat {int dummy; } ;
struct sway_container {struct sway_view* view; } ;
struct criteria {int floating; int tiling; char urgent; int workspace; int window_type; int window_role; int instance; void* id; int class; int con_mark; void* con_id; int app_id; int shell; int title; } ;
typedef enum criteria_token { ____Placeholder_criteria_token } criteria_token ;
struct TYPE_3__ {void* id; } ;
struct TYPE_4__ {TYPE_1__ node; } ;
 scalar_t__ VAR_0 ;
 struct sway_seat* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 struct sway_container* FUNC_4 (struct sway_seat*) ;
 int FUNC_5 (scalar_t__,int,char const*,char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 void* FUNC_9 (char*,char**,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool FUNC_11(struct criteria *VAR_1, char *VAR_2, char *VAR_3) {
 enum criteria_token VAR_4 = FUNC_10(VAR_2);
 if (VAR_4 == 135) {
  const char *VAR_5 = "Token '%s' is not recognized";
  int VAR_6 = FUNC_8(VAR_5) + FUNC_8(VAR_2) - 1;
  VAR_0 = FUNC_1(VAR_6);
  FUNC_5(VAR_0, VAR_6, VAR_5, VAR_2);
  return 0;
 }


 if (!VAR_3 && VAR_4 != 138 && VAR_4 != 133) {
  const char *VAR_7 = "Token '%s' requires a value";
  int VAR_8 = FUNC_8(VAR_7) + FUNC_8(VAR_2) - 1;
  VAR_0 = FUNC_1(VAR_8);
  FUNC_5(VAR_0, VAR_8, VAR_7, VAR_2);
  return 0;
 }

 char *VAR_9 = ((void*)0);
 switch (VAR_4) {
 case 132:
  FUNC_3(&VAR_1->title, VAR_3);
  break;
 case 134:
  FUNC_3(&VAR_1->shell, VAR_3);
  break;
 case 142:
  FUNC_3(&VAR_1->app_id, VAR_3);
  break;
 case 140:
  if (FUNC_6(VAR_3, "__focused__") == 0) {
   struct sway_seat *VAR_10 = FUNC_0();
   struct sway_container *VAR_11 = FUNC_4(VAR_10);
   struct sway_view *VAR_12 = VAR_11 ? VAR_11->view : ((void*)0);
   VAR_1->con_id = VAR_12 ? VAR_12->container->node.id : 0;
  } else {
   VAR_1->con_id = FUNC_9(VAR_3, &VAR_9, 10);
   if (*VAR_9 != 0) {
    VAR_0 = FUNC_7("The value for 'con_id' should be '__focused__' or numeric");
   }
  }
  break;
 case 139:
  FUNC_3(&VAR_1->con_mark, VAR_3);
  break;
 case 138:
  VAR_1->floating = 1;
  break;
 case 133:
  VAR_1->tiling = 1;
  break;
 case 131:
  if (FUNC_6(VAR_3, "latest") == 0 ||
    FUNC_6(VAR_3, "newest") == 0 ||
    FUNC_6(VAR_3, "last") == 0 ||
    FUNC_6(VAR_3, "recent") == 0) {
   VAR_1->urgent = 'l';
  } else if (FUNC_6(VAR_3, "oldest") == 0 ||
    FUNC_6(VAR_3, "first") == 0) {
   VAR_1->urgent = 'o';
  } else {
   VAR_0 =
    FUNC_7("The value for 'urgent' must be 'first', 'last', "
      "'latest', 'newest', 'oldest' or 'recent'");
  }
  break;
 case 128:
  FUNC_3(&VAR_1->workspace, VAR_3);
  break;
 case 135:
  break;
 }

 if (VAR_0) {
  return 0;
 }

 return 1;
}

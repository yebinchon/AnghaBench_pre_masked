
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* outputs; } ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int,int,char**) ;
 struct cmd_results* FUNC_2 (int ,int,char**) ;
 struct cmd_results* FUNC_3 (int,char**) ;
 struct cmd_results* FUNC_4 () ;
 struct cmd_results* FUNC_5 (int,char**) ;
 struct cmd_results* FUNC_6 (int ,char*) ;
 char* VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_7 (char*,char*) ;

struct cmd_results *FUNC_8(int VAR_8, char **VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_8, "move", VAR_1, 1))) {
  return VAR_10;
 }
 if (!VAR_7->outputs->length) {
  return FUNC_6(VAR_0,
    "Can't run this command while there's no outputs connected.");
 }

 if (FUNC_7(VAR_9[0], "left") == 0) {
  return FUNC_2(VAR_3, --VAR_8, ++VAR_9);
 } else if (FUNC_7(VAR_9[0], "right") == 0) {
  return FUNC_2(VAR_4, --VAR_8, ++VAR_9);
 } else if (FUNC_7(VAR_9[0], "up") == 0) {
  return FUNC_2(VAR_5, --VAR_8, ++VAR_9);
 } else if (FUNC_7(VAR_9[0], "down") == 0) {
  return FUNC_2(VAR_2, --VAR_8, ++VAR_9);
 } else if (FUNC_7(VAR_9[0], "workspace") == 0 && VAR_8 >= 2
   && (FUNC_7(VAR_9[1], "to") == 0 ||
    FUNC_7(VAR_9[1], "output") == 0)) {
  VAR_8 -= 2; VAR_9 += 2;
  return FUNC_5(VAR_8, VAR_9);
 }

 bool VAR_11 = 0;
 if (FUNC_7(VAR_9[0], "--no-auto-back-and-forth") == 0) {
  VAR_11 = 1;
  --VAR_8; ++VAR_9;
 }

 if (FUNC_7(VAR_9[0], "window") == 0 ||
   FUNC_7(VAR_9[0], "container") == 0) {
  --VAR_8; ++VAR_9;
 }

 if (FUNC_7(VAR_9[0], "to") == 0) {
  --VAR_8; ++VAR_9;
 }

 if (!VAR_8) {
  return FUNC_6(VAR_0, VAR_6);
 }



 if (VAR_11 && FUNC_7(VAR_9[0], "workspace") != 0) {
  return FUNC_6(VAR_0, VAR_6);
 }

 if (FUNC_7(VAR_9[0], "workspace") == 0 ||
   FUNC_7(VAR_9[0], "output") == 0 ||
   FUNC_7(VAR_9[0], "mark") == 0) {
  return FUNC_1(VAR_11, VAR_8, VAR_9);
 } else if (FUNC_7(VAR_9[0], "scratchpad") == 0) {
  return FUNC_4();
 } else if (FUNC_7(VAR_9[0], "position") == 0 ||
   (VAR_8 > 1 && FUNC_7(VAR_9[0], "absolute") == 0 &&
   FUNC_7(VAR_9[1], "position") == 0)) {
  return FUNC_3(VAR_8, VAR_9);
 }
 return FUNC_6(VAR_0, VAR_6);
}

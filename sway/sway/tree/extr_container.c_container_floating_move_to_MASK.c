
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_container {struct sway_workspace* workspace; scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (struct sway_workspace*) ;
 int FUNC_1 (struct sway_container*) ;
 struct sway_output* FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*,scalar_t__,scalar_t__) ;
 struct sway_output* FUNC_4 (struct sway_container*) ;
 scalar_t__ FUNC_5 (struct sway_container*) ;
 struct sway_workspace* FUNC_6 (struct sway_output*) ;
 int FUNC_7 (struct sway_output*,char*) ;
 int FUNC_8 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_9 (struct sway_workspace*) ;

void FUNC_10(struct sway_container *VAR_0,
  double VAR_1, double VAR_2) {
 if (!FUNC_7(FUNC_4(VAR_0),
   "Expected a floating container")) {
  return;
 }
 FUNC_3(VAR_0, VAR_1 - VAR_0->x, VAR_2 - VAR_0->y);
 if (FUNC_5(VAR_0)) {
  return;
 }
 struct sway_workspace *VAR_3 = VAR_0->workspace;
 struct sway_output *VAR_4 = FUNC_2(VAR_0);
 if (!FUNC_7(VAR_4, "Unable to find any output")) {
  return;
 }
 struct sway_workspace *VAR_5 =
  FUNC_6(VAR_4);
 if (VAR_5 && VAR_3 != VAR_5) {
  FUNC_1(VAR_0);
  FUNC_8(VAR_5, VAR_0);
  FUNC_0(VAR_3);
  FUNC_0(VAR_5);
  FUNC_9(VAR_3);
  FUNC_9(VAR_5);
 }
}

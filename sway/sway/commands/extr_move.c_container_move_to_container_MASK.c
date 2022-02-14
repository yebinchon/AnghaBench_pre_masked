
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int dummy; } ;
struct sway_container {struct sway_workspace* workspace; scalar_t__ view; scalar_t__ height_fraction; scalar_t__ width_fraction; scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (struct sway_container*,struct sway_container*) ;
 int FUNC_1 (struct sway_container*,struct sway_container*,int) ;
 int FUNC_2 (struct sway_container*) ;
 scalar_t__ FUNC_3 (struct sway_container*,struct sway_container*) ;
 scalar_t__ FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*,struct sway_workspace*) ;
 int FUNC_6 (struct sway_container*,char*) ;
 int FUNC_7 (struct sway_workspace*) ;
 int FUNC_8 (struct sway_workspace*) ;

__attribute__((used)) static void FUNC_9(struct sway_container *VAR_0,
  struct sway_container *VAR_1) {
 if (VAR_0 == VAR_1
   || FUNC_3(VAR_0, VAR_1)
   || FUNC_3(VAR_1, VAR_0)) {
  return;
 }
 if (FUNC_4(VAR_0)) {
  FUNC_5(VAR_0, VAR_1->workspace);
  return;
 }
 struct sway_workspace *VAR_2 = VAR_0->workspace;

 FUNC_2(VAR_0);
 VAR_0->width = VAR_0->height = 0;
 VAR_0->width_fraction = VAR_0->height_fraction = 0;

 if (VAR_1->view) {
  FUNC_1(VAR_1, VAR_0, 1);
 } else {
  FUNC_0(VAR_1, VAR_0);
 }

 if (VAR_0->view) {
  FUNC_6(VAR_0, "move");
 }

 FUNC_8(VAR_1->workspace);


 FUNC_7(VAR_1->workspace);
 if (VAR_2 && VAR_2 != VAR_1->workspace) {
  FUNC_7(VAR_2);
 }
}

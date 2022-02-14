
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sway_seat*) ;
 struct sway_container* FUNC_2 (struct sway_seat*,struct sway_workspace*) ;
 struct sway_container* FUNC_3 (struct sway_seat*,struct sway_workspace*) ;
 int FUNC_4 (struct sway_seat*,struct sway_container*) ;

__attribute__((used)) static struct cmd_results *FUNC_5(struct sway_workspace *VAR_2,
  struct sway_seat *VAR_3, bool VAR_4) {
 struct sway_container *VAR_5 = ((void*)0);
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_3, VAR_2);
 } else {
  VAR_5 = FUNC_3(VAR_3, VAR_2);
 }
 if (VAR_5) {
  FUNC_4(VAR_3, VAR_5);
  FUNC_1(VAR_3);
 } else {
  return FUNC_0(VAR_0,
    "Failed to find a %s container in workspace",
    VAR_4 ? "floating" : "tiling");
 }
 return FUNC_0(VAR_1, ((void*)0));
}

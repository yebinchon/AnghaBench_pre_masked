
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int dummy; } ;
struct sway_seat {scalar_t__ prev_workspace_name; } ;


 int VAR_0 ;
 struct sway_seat* FUNC_0 () ;
 struct sway_workspace* FUNC_1 (int ,void*) ;
 struct sway_workspace* FUNC_2 (struct sway_seat*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 struct sway_workspace* FUNC_5 (struct sway_workspace*) ;
 struct sway_workspace* FUNC_6 (struct sway_workspace*,int) ;
 struct sway_workspace* FUNC_7 (struct sway_workspace*,int) ;
 struct sway_workspace* FUNC_8 (struct sway_workspace*) ;

struct sway_workspace *FUNC_9(const char *VAR_1) {
 struct sway_seat *VAR_2 = FUNC_0();
 struct sway_workspace *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 && FUNC_4(VAR_1, "prev") == 0) {
  return FUNC_8(VAR_3);
 } else if (VAR_3 && FUNC_4(VAR_1, "prev_on_output") == 0) {
  return FUNC_7(VAR_3, 0);
 } else if (VAR_3 && FUNC_4(VAR_1, "next") == 0) {
  return FUNC_5(VAR_3);
 } else if (VAR_3 && FUNC_4(VAR_1, "next_on_output") == 0) {
  return FUNC_6(VAR_3, 0);
 } else if (FUNC_4(VAR_1, "current") == 0) {
  return VAR_3;
 } else if (FUNC_3(VAR_1, "back_and_forth") == 0) {
  struct sway_seat *VAR_4 = FUNC_0();
  if (!VAR_4->prev_workspace_name) {
   return ((void*)0);
  }
  return FUNC_1(VAR_0,
    (void*)VAR_4->prev_workspace_name);
 } else {
  return FUNC_1(VAR_0, (void*)VAR_1);
 }
}

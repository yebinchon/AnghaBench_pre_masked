
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int hide_lone_tab; int hide_edge_borders_smart; void* hide_edge_borders; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 () ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char const*) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_3 (char*,char*) ;

struct cmd_results *FUNC_4(int VAR_10, char **VAR_11) {
 const char *VAR_12 = "Expected 'hide_edge_borders [--i3] "
  "none|vertical|horizontal|both|smart|smart_no_gaps";

 struct cmd_results *VAR_13 = ((void*)0);
 if ((VAR_13 = FUNC_1(VAR_10, "hide_edge_borders", VAR_4, 1))) {
  return VAR_13;
 }

 bool VAR_14 = 0;
 if (FUNC_3(*VAR_11, "--i3") == 0) {
  VAR_14 = 1;
  ++VAR_11;
  --VAR_10;
 }

 if (!VAR_10) {
  return FUNC_2(VAR_0, VAR_12);
 }

 if (FUNC_3(VAR_11[0], "none") == 0) {
  VAR_9->hide_edge_borders = VAR_7;
 } else if (FUNC_3(VAR_11[0], "vertical") == 0) {
  VAR_9->hide_edge_borders = VAR_8;
 } else if (FUNC_3(VAR_11[0], "horizontal") == 0) {
  VAR_9->hide_edge_borders = VAR_6;
 } else if (FUNC_3(VAR_11[0], "both") == 0) {
  VAR_9->hide_edge_borders = VAR_5;
 } else if (FUNC_3(VAR_11[0], "smart") == 0) {
  VAR_9->hide_edge_borders = VAR_7;
  VAR_9->hide_edge_borders_smart = VAR_3;
 } else if (FUNC_3(VAR_11[0], "smart_no_gaps") == 0) {
  VAR_9->hide_edge_borders = VAR_7;
  VAR_9->hide_edge_borders_smart = VAR_2;
 } else {
  return FUNC_2(VAR_0, VAR_12);
 }
 VAR_9->hide_lone_tab = VAR_14;

 FUNC_0();

 return FUNC_2(VAR_1, ((void*)0));
}

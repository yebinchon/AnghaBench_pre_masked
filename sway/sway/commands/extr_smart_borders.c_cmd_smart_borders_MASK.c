
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int hide_edge_borders_smart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,int *) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

struct cmd_results *FUNC_5(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_1(VAR_6, "smart_borders", VAR_4, 1))) {
  return VAR_8;
 }

 if (FUNC_4(VAR_7[0], "no_gaps") == 0) {
  VAR_5->hide_edge_borders_smart = VAR_1;
 } else {
  VAR_5->hide_edge_borders_smart = FUNC_3(VAR_7[0], 1) ?
   VAR_3 : VAR_2;
 }

 FUNC_0();

 return FUNC_2(VAR_0, ((void*)0));
}

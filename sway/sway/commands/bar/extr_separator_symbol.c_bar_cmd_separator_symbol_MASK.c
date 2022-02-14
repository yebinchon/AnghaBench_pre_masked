
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {int id; int separator_symbol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ,int ) ;

struct cmd_results *FUNC_5(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "separator_symbol", VAR_1, 1))) {
  return VAR_6;
 }
 FUNC_2(VAR_3->current_bar->separator_symbol);
 VAR_3->current_bar->separator_symbol = FUNC_3(VAR_5[0]);
 FUNC_4(VAR_2, "Settings separator_symbol '%s' for bar: %s",
   VAR_3->current_bar->separator_symbol, VAR_3->current_bar->id);
 return FUNC_1(VAR_0, ((void*)0));
}

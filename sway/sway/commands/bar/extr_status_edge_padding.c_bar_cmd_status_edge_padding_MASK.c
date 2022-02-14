
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {int status_edge_padding; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ,char*,int ,int) ;

struct cmd_results *FUNC_5(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "status_edge_padding", VAR_2, 1))) {
  return VAR_7;
 }
 char *VAR_8;
 int VAR_9 = FUNC_3(VAR_6[0], &VAR_8, 10);
 if (FUNC_2(VAR_8) || VAR_9 < 0) {
  return FUNC_1(VAR_0,
    "Padding must be a positive integer");
 }
 VAR_4->current_bar->status_edge_padding = VAR_9;
 FUNC_4(VAR_3, "Status edge padding on bar %s: %d",
   VAR_4->current_bar->id, VAR_4->current_bar->status_edge_padding);
 return FUNC_1(VAR_1, ((void*)0));
}

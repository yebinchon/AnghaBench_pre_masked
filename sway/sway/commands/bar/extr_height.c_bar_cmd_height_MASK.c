
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {int height; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*,...) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int ,char*,int,int ) ;

struct cmd_results *FUNC_4(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_1(VAR_5, "height", VAR_2, 1))) {
  return VAR_7;
 }
 int VAR_8 = FUNC_0(VAR_6[0]);
 if (VAR_8 < 0) {
  return FUNC_2(VAR_0,
    "Invalid height value: %s", VAR_6[0]);
 }
 VAR_4->current_bar->height = VAR_8;
 FUNC_3(VAR_3, "Setting bar height to %d on bar: %s",
   VAR_8, VAR_4->current_bar->id);
 return FUNC_2(VAR_1, ((void*)0));
}

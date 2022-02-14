
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct bar_config {char const* id; } ;
struct TYPE_4__ {TYPE_1__* bars; struct bar_config* current_bar; scalar_t__ reading; } ;
struct TYPE_3__ {int length; struct bar_config** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (struct bar_config*,char const*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*,...) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

struct cmd_results *FUNC_4(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_1(VAR_5, "mode", VAR_2, 1))) {
  return VAR_7;
 }
 if ((VAR_7 = FUNC_1(VAR_5, "mode", VAR_3, 2))) {
  return VAR_7;
 }
 if (VAR_4->reading && VAR_5 > 1) {
  return FUNC_2(VAR_0,
    "Unexpected value %s in config mode", VAR_6[1]);
 }

 if (VAR_4->current_bar && VAR_5 == 2 &&
   FUNC_3(VAR_4->current_bar->id, VAR_6[1]) != 0) {
  return FUNC_2(VAR_0, "Conflicting bar ids: %s and %s",
    VAR_4->current_bar->id, VAR_6[1]);
 }

 const char *VAR_8 = VAR_6[0];
 if (VAR_4->reading) {
  VAR_7 = FUNC_0(VAR_4->current_bar, VAR_8);
 } else {
  const char *VAR_9 = VAR_5 == 2 ? VAR_6[1] : ((void*)0);
  for (int VAR_10 = 0; VAR_10 < VAR_4->bars->length; ++VAR_10) {
   struct bar_config *VAR_11 = VAR_4->bars->items[VAR_10];
   if (VAR_9) {
    if (FUNC_3(VAR_9, VAR_11->id) == 0) {
     VAR_7 = FUNC_0(VAR_11, VAR_8);
     break;
    }
   } else if ((VAR_7 = FUNC_0(VAR_11, VAR_8))) {
    break;
   }
  }
 }
 return VAR_7 ? VAR_7 : FUNC_2(VAR_1, ((void*)0));
}

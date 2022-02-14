
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct cmd_results {int dummy; } ;
struct TYPE_7__ {int length; char** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_8__ {TYPE_1__* current_bar; } ;
struct TYPE_6__ {int modifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,char*) ;

struct cmd_results *FUNC_7(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "modifier", VAR_2, 1))) {
  return VAR_7;
 }

 uint32_t VAR_8 = 0;
 if (FUNC_5(VAR_6[0], "none") != 0) {
  list_t *VAR_9 = FUNC_4(VAR_6[0], "+");
  for (int VAR_10 = 0; VAR_10 < VAR_9->length; ++VAR_10) {
   uint32_t VAR_11;
   if ((VAR_11 = FUNC_2(VAR_9->items[VAR_10])) > 0) {
    VAR_8 |= VAR_11;
   } else if (FUNC_5(VAR_9->items[VAR_10], "none") == 0) {
    VAR_7 = FUNC_1(VAR_0,
      "none cannot be used along with other modifiers");
    FUNC_3(VAR_9);
    return VAR_7;
   } else {
    VAR_7 = FUNC_1(VAR_0,
     "Unknown modifier '%s'", (char *)VAR_9->items[VAR_10]);
    FUNC_3(VAR_9);
    return VAR_7;
   }
  }
  FUNC_3(VAR_9);
 }
 VAR_4->current_bar->modifier = VAR_8;
 FUNC_6(VAR_3,
   "Show/Hide the bar when pressing '%s' in hide mode.", VAR_6[0]);
 return FUNC_1(VAR_1, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_output {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {int title_align; } ;
struct TYPE_5__ {TYPE_1__* outputs; } ;
struct TYPE_4__ {int length; struct sway_output** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (struct sway_output*) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_3 (char*,char*) ;

struct cmd_results *FUNC_4(int VAR_8, char **VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_8, "title_align", VAR_5, 1))) {
  return VAR_10;
 }

 if (FUNC_3(VAR_9[0], "left") == 0) {
  VAR_6->title_align = VAR_1;
 } else if (FUNC_3(VAR_9[0], "center") == 0) {
  VAR_6->title_align = VAR_0;
 } else if (FUNC_3(VAR_9[0], "right") == 0) {
  VAR_6->title_align = VAR_2;
 } else {
  return FUNC_1(VAR_3,
    "Expected 'title_align left|center|right'");
 }

 for (int VAR_11 = 0; VAR_11 < VAR_7->outputs->length; ++VAR_11) {
  struct sway_output *VAR_12 = VAR_7->outputs->items[VAR_11];
  FUNC_2(VAR_12);
 }

 return FUNC_1(VAR_4, ((void*)0));
}

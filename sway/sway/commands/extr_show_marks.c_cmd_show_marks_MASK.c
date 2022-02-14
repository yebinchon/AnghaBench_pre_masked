
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_output {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {scalar_t__ show_marks; } ;
struct TYPE_5__ {TYPE_1__* outputs; } ;
struct TYPE_4__ {int length; struct sway_output** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (struct sway_output*) ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int ,int *) ;

struct cmd_results *FUNC_5(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "show_marks", VAR_1, 1))) {
  return VAR_7;
 }

 VAR_2->show_marks = FUNC_3(VAR_6[0], VAR_2->show_marks);

 if (VAR_2->show_marks) {
  FUNC_4(VAR_3, ((void*)0));
 }

 for (int VAR_8 = 0; VAR_8 < VAR_4->outputs->length; ++VAR_8) {
  struct sway_output *VAR_9 = VAR_4->outputs->items[VAR_8];
  FUNC_2(VAR_9);
 }

 return FUNC_1(VAR_0, ((void*)0));
}

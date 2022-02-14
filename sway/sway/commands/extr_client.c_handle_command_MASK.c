
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_output {int dummy; } ;
struct cmd_results {int dummy; } ;
struct border_colors {int child_border; int indicator; int text; int background; int border; } ;
struct TYPE_6__ {scalar_t__ active; } ;
struct TYPE_5__ {TYPE_1__* outputs; } ;
struct TYPE_4__ {int length; struct sway_output** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (struct sway_output*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static struct cmd_results *FUNC_5(int VAR_6, char **VAR_7,
  struct border_colors *VAR_8, char *VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_2, 5))) {
  return VAR_10;
 }

 if (!FUNC_3(VAR_7[0], VAR_8->border)) {
  return FUNC_1(VAR_0,
    "Unable to parse border color '%s'", VAR_7[0]);
 }

 if (!FUNC_3(VAR_7[1], VAR_8->background)) {
  return FUNC_1(VAR_0,
    "Unable to parse background color '%s'", VAR_7[1]);
 }

 if (!FUNC_3(VAR_7[2], VAR_8->text)) {
  return FUNC_1(VAR_0,
    "Unable to parse text color '%s'", VAR_7[2]);
 }

 if (!FUNC_3(VAR_7[3], VAR_8->indicator)) {
  return FUNC_1(VAR_0,
    "Unable to parse indicator color '%s'", VAR_7[3]);
 }

 if (!FUNC_3(VAR_7[4], VAR_8->child_border)) {
  return FUNC_1(VAR_0,
    "Unable to parse child border color '%s'", VAR_7[4]);
 }

 if (VAR_3->active) {
  FUNC_4(VAR_4, ((void*)0));

  for (int VAR_11 = 0; VAR_11 < VAR_5->outputs->length; ++VAR_11) {
   struct sway_output *VAR_12 = VAR_5->outputs->items[VAR_11];
   FUNC_2(VAR_12);
  }
 }

 return FUNC_1(VAR_1, ((void*)0));
}

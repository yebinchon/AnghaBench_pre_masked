
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* output_priority; } ;
struct sway_output {int dummy; } ;
typedef int identifier ;
struct TYPE_3__ {char** items; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 int FUNC_2 (char*,int,struct sway_output*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct sway_workspace*,struct sway_output*) ;

void FUNC_5(struct sway_workspace *VAR_0,
  struct sway_output *VAR_1, struct sway_output *VAR_2) {
 int VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3 < 0) {
  return;
 }

 int VAR_4 = FUNC_4(VAR_0, VAR_2);
 if (VAR_4 < 0) {
  char VAR_5[128];
  FUNC_2(VAR_5, sizeof(VAR_5), VAR_2);
  FUNC_1(VAR_0->output_priority, VAR_3, FUNC_3(VAR_5));
 } else if (VAR_4 > VAR_3) {
  char *VAR_6 = VAR_0->output_priority->items[VAR_4];
  FUNC_0(VAR_0->output_priority, VAR_4);
  FUNC_1(VAR_0->output_priority, VAR_3, VAR_6);
 }
}

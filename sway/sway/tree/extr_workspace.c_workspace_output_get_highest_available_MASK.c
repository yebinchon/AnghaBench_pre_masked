
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {TYPE_2__* output_priority; } ;
struct sway_output {TYPE_1__* wlr_output; } ;
typedef int exclude_id ;
struct TYPE_4__ {int length; char** items; } ;
struct TYPE_3__ {char* name; } ;


 struct sway_output* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,struct sway_output*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

struct sway_output *FUNC_3(
  struct sway_workspace *VAR_0, struct sway_output *VAR_1) {
 char VAR_2[128] = {'\0'};
 if (VAR_1) {
  FUNC_1(VAR_2, sizeof(VAR_2), VAR_1);
 }

 for (int VAR_3 = 0; VAR_3 < VAR_0->output_priority->length; VAR_3++) {
  char *VAR_4 = VAR_0->output_priority->items[VAR_3];
  if (VAR_1 && (FUNC_2(VAR_4, VAR_1->wlr_output->name) == 0
     || FUNC_2(VAR_4, VAR_2) == 0)) {
   continue;
  }

  struct sway_output *VAR_5 = FUNC_0(VAR_4);
  if (VAR_5) {
   return VAR_5;
  }
 }

 return ((void*)0);
}

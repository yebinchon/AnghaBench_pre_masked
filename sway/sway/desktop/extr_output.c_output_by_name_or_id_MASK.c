
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_output {TYPE_1__* wlr_output; } ;
typedef int identifier ;
struct TYPE_6__ {TYPE_2__* outputs; } ;
struct TYPE_5__ {int length; struct sway_output** items; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (char*,int,struct sway_output*) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_1 (char*,char const*) ;

struct sway_output *FUNC_2(const char *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->outputs->length; ++VAR_2) {
  struct sway_output *VAR_3 = VAR_0->outputs->items[VAR_2];
  char VAR_4[128];
  FUNC_0(VAR_4, sizeof(VAR_4), VAR_3);
  if (FUNC_1(VAR_4, VAR_1) == 0
    || FUNC_1(VAR_3->wlr_output->name, VAR_1) == 0) {
   return VAR_3;
  }
 }
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct output_config {int dummy; } ;
struct TYPE_4__ {TYPE_1__* output_configs; } ;
struct TYPE_3__ {struct output_config** items; } ;


 int FUNC_0 (struct output_config*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 struct output_config* FUNC_3 (int ) ;

void FUNC_4(void) {
 struct output_config *VAR_2 = ((void*)0);
 int VAR_3 = FUNC_1(VAR_0->output_configs, VAR_1, "*");
 if (VAR_3 >= 0) {
  VAR_2 = VAR_0->output_configs->items[VAR_3];
 } else {
  VAR_2 = FUNC_3(FUNC_2("*"));
 }
 FUNC_0(VAR_2);
}

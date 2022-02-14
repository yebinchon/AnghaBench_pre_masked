
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sections; } ;
typedef TYPE_1__ config_ini_state_t ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* name; struct TYPE_7__* value; struct TYPE_7__* settings; } ;
typedef TYPE_2__ config_ini_setting_t ;
typedef TYPE_2__ config_ini_section_t ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(config_ini_state_t *VAR_0)
{
 config_ini_section_t *VAR_1 = VAR_0->sections;

 while (VAR_1 != ((void*)0)) {
  config_ini_setting_t *VAR_2 = VAR_1->settings;
  config_ini_section_t *VAR_3 = VAR_1;

  while (VAR_2 != ((void*)0)) {
   config_ini_setting_t *VAR_4 = VAR_2;
   FUNC_0(VAR_2->name);
   FUNC_0(VAR_2->value);
   VAR_2 = VAR_2->next;
   FUNC_0(VAR_4);
  }

  FUNC_0(VAR_1->name);
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_3);
 }
}

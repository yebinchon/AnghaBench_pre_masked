
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int options_t ;
typedef int location_provider_t ;
typedef int gamma_method_t ;
typedef int config_ini_state_t ;
struct TYPE_4__ {struct TYPE_4__* next; int value; int name; } ;
typedef TYPE_1__ config_ini_setting_t ;
struct TYPE_5__ {TYPE_1__* settings; } ;
typedef TYPE_2__ config_ini_section_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int const*,int const*) ;

void
FUNC_3(
 options_t *VAR_1, config_ini_state_t *VAR_2,
 const gamma_method_t *VAR_3,
 const location_provider_t *VAR_4)
{

 config_ini_section_t *VAR_5 = FUNC_0(
  VAR_2, "redshift");
 if (VAR_5 == ((void*)0)) return;

 config_ini_setting_t *VAR_6 = VAR_5->settings;
 while (VAR_6 != ((void*)0)) {
  int VAR_7 = FUNC_2(
   VAR_6->name, VAR_6->value, VAR_1,
   VAR_3, VAR_4);
  if (VAR_7 < 0) FUNC_1(VAR_0);

  VAR_6 = VAR_6->next;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int show_refs; int activate_refs; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum view_type { ____Placeholder_view_type } view_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(obs_source_t *VAR_2, obs_source_t *VAR_3)
{
 if (!FUNC_0(VAR_2, "obs_source_remove_active_child"))
  return;
 if (!FUNC_0(VAR_3, "obs_source_remove_active_child"))
  return;

 for (int VAR_4 = 0; VAR_4 < VAR_2->show_refs; VAR_4++) {
  enum view_type VAR_5;
  VAR_5 = (VAR_4 < VAR_2->activate_refs) ? VAR_1 : VAR_0;
  FUNC_1(VAR_3, VAR_5);
 }
}

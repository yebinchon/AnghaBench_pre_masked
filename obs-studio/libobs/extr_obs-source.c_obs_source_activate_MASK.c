
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int activate_refs; int show_refs; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum view_type { ____Placeholder_view_type } view_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

void FUNC_3(obs_source_t *VAR_3, enum view_type VAR_4)
{
 if (!FUNC_1(VAR_3, "obs_source_activate"))
  return;

 FUNC_2(&VAR_3->show_refs);
 FUNC_0(VAR_3, VAR_2, ((void*)0));

 if (VAR_4 == VAR_0) {
  FUNC_2(&VAR_3->activate_refs);
  FUNC_0(VAR_3, VAR_1, ((void*)0));
 }
}

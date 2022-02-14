
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ st_progress_command; int st_progress_command_target; } ;
typedef TYPE_1__ PgBackendStatus ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__ volatile*) ;
 int FUNC_1 (TYPE_1__ volatile*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_2(void)
{
 volatile PgBackendStatus *VAR_4 = VAR_1;

 if (!VAR_4 || !VAR_3)
  return;

 if (VAR_4->st_progress_command == VAR_2)
  return;

 FUNC_0(VAR_4);
 VAR_4->st_progress_command = VAR_2;
 VAR_4->st_progress_command_target = VAR_0;
 FUNC_1(VAR_4);
}

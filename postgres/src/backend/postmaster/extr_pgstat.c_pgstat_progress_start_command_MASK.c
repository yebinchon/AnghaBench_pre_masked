
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_progress_param; int st_progress_command_target; int st_progress_command; } ;
typedef int ProgressCommandType ;
typedef TYPE_1__ PgBackendStatus ;
typedef int Oid ;


 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__ volatile*) ;
 int FUNC_2 (TYPE_1__ volatile*) ;
 int VAR_1 ;

void
FUNC_3(ProgressCommandType VAR_2, Oid VAR_3)
{
 volatile PgBackendStatus *VAR_4 = VAR_0;

 if (!VAR_4 || !VAR_1)
  return;

 FUNC_1(VAR_4);
 VAR_4->st_progress_command = VAR_2;
 VAR_4->st_progress_command_target = VAR_3;
 FUNC_0(&VAR_4->st_progress_param, 0, sizeof(VAR_4->st_progress_param));
 FUNC_2(VAR_4);
}

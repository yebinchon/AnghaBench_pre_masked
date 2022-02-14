
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_5__ {int * st_progress_param; } ;
typedef TYPE_1__ PgBackendStatus ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__ volatile*) ;
 int FUNC_2 (TYPE_1__ volatile*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(int VAR_3, int64 VAR_4)
{
 volatile PgBackendStatus *VAR_5 = VAR_0;

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_1);

 if (!VAR_5 || !VAR_2)
  return;

 FUNC_1(VAR_5);
 VAR_5->st_progress_param[VAR_3] = VAR_4;
 FUNC_2(VAR_5);
}

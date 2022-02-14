
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
 int const VAR_1 ;
 int VAR_2 ;

void
FUNC_3(int VAR_3, const int *VAR_4,
           const int64 *VAR_5)
{
 volatile PgBackendStatus *VAR_6 = VAR_0;
 int VAR_7;

 if (!VAR_6 || !VAR_2 || VAR_3 == 0)
  return;

 FUNC_1(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
 {
  FUNC_0(VAR_4[VAR_7] >= 0 && VAR_4[VAR_7] < VAR_1);

  VAR_6->st_progress_param[VAR_4[VAR_7]] = VAR_5[VAR_7];
 }

 FUNC_2(VAR_6);
}

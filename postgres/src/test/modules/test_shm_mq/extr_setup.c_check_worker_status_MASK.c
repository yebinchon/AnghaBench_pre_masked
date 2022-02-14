
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nworkers; int * handle; } ;
typedef TYPE_1__ worker_state ;
typedef int pid_t ;
typedef scalar_t__ BgwHandleStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool
FUNC_1(worker_state *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->nworkers; ++VAR_3)
 {
  BgwHandleStatus VAR_4;
  pid_t VAR_5;

  VAR_4 = FUNC_0(VAR_2->handle[VAR_3], &VAR_5);
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
   return 0;
 }


 return 1;
}

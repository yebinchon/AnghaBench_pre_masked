
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nworkers_launched; TYPE_1__* worker; } ;
struct TYPE_4__ {int * bgwhandle; } ;
typedef TYPE_2__ ParallelContext ;
typedef scalar_t__ BgwHandleStatus ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(ParallelContext *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->nworkers_launched; ++VAR_4)
 {
  BgwHandleStatus VAR_5;

  if (VAR_3->worker == ((void*)0) || VAR_3->worker[VAR_4].bgwhandle == ((void*)0))
   continue;

  VAR_5 = FUNC_0(VAR_3->worker[VAR_4].bgwhandle);







  if (VAR_5 == VAR_0)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("postmaster exited during a parallel transaction")));


  FUNC_4(VAR_3->worker[VAR_4].bgwhandle);
  VAR_3->worker[VAR_4].bgwhandle = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nworkers_launched; struct TYPE_5__* function_name; struct TYPE_5__* library_name; struct TYPE_5__* worker; struct TYPE_5__* private_memory; int * seg; int * error_mqh; int bgwhandle; int node; } ;
typedef TYPE_1__ ParallelContext ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(ParallelContext *VAR_0)
{
 int VAR_1;







 FUNC_4(&VAR_0->node);


 if (VAR_0->worker != ((void*)0))
 {
  for (VAR_1 = 0; VAR_1 < VAR_0->nworkers_launched; ++VAR_1)
  {
   if (VAR_0->worker[VAR_1].error_mqh != ((void*)0))
   {
    FUNC_2(VAR_0->worker[VAR_1].bgwhandle);

    FUNC_7(VAR_0->worker[VAR_1].error_mqh);
    VAR_0->worker[VAR_1].error_mqh = ((void*)0);
   }
  }
 }






 if (VAR_0->seg != ((void*)0))
 {
  FUNC_5(VAR_0->seg);
  VAR_0->seg = ((void*)0);
 }





 if (VAR_0->private_memory != ((void*)0))
 {
  FUNC_6(VAR_0->private_memory);
  VAR_0->private_memory = ((void*)0);
 }






 FUNC_0();
 FUNC_3(VAR_0);
 FUNC_1();


 if (VAR_0->worker != ((void*)0))
 {
  FUNC_6(VAR_0->worker);
  VAR_0->worker = ((void*)0);
 }


 FUNC_6(VAR_0->library_name);
 FUNC_6(VAR_0->function_name);
 FUNC_6(VAR_0);
}

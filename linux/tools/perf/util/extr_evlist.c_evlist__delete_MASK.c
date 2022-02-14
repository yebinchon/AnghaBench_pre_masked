
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * threads; int * cpus; } ;
struct evlist {TYPE_1__ core; } ;


 int FUNC_0 (struct evlist*) ;
 int FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evlist*) ;
 int FUNC_3 (struct evlist*) ;
 int FUNC_4 (struct evlist*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct evlist *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_5(VAR_0->core.cpus);
 FUNC_6(VAR_0->core.threads);
 VAR_0->core.cpus = ((void*)0);
 VAR_0->core.threads = ((void*)0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0);
}

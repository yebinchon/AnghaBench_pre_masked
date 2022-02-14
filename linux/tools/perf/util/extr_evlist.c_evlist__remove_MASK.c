
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int core; int * evlist; } ;
struct evlist {int core; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct evlist *VAR_0, struct evsel *VAR_1)
{
 VAR_1->evlist = ((void*)0);
 FUNC_0(&VAR_0->core, &VAR_1->core);
}

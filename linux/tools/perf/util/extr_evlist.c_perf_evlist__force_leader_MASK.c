
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int forced_leader; } ;
struct evlist {int nr_groups; } ;


 struct evsel* FUNC_0 (struct evlist*) ;
 int FUNC_1 (struct evlist*) ;

void FUNC_2(struct evlist *VAR_0)
{
 if (!VAR_0->nr_groups) {
  struct evsel *VAR_1 = FUNC_0(VAR_0);

  FUNC_1(VAR_0);
  VAR_1->forced_leader = 1;
 }
}

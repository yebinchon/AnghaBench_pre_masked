
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evsel {int dummy; } ;
struct TYPE_2__ {int cpus; } ;
struct evlist {TYPE_1__ core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct evlist*,struct evsel*,int) ;
 int FUNC_2 (struct evlist*,struct evsel*,int) ;

int FUNC_3(struct evlist *VAR_0,
      struct evsel *VAR_1, int VAR_2)
{
 bool VAR_3 = !FUNC_0(VAR_0->core.cpus);

 if (VAR_3)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_2(VAR_0, VAR_1, VAR_2);
}

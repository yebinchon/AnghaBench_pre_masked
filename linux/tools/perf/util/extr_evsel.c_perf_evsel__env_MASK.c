
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_env {int dummy; } ;
struct evsel {TYPE_1__* evlist; } ;
struct TYPE_2__ {struct perf_env* env; } ;


 struct perf_env VAR_0 ;

struct perf_env *FUNC_0(struct evsel *VAR_1)
{
 if (VAR_1 && VAR_1->evlist)
  return VAR_1->evlist->env;
 return &VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_stat_config {int dummy; } ;
struct TYPE_2__ {scalar_t__ system_wide; int threads; } ;
struct evsel {int counts; TYPE_1__ core; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct evsel*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct perf_stat_config*,struct evsel*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct perf_stat_config *VAR_0,
    struct evsel *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1->core.threads);
 int VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5;

 if (VAR_1->core.system_wide)
  VAR_2 = 1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5,
         FUNC_0(VAR_1->counts, VAR_4, VAR_5)))
    return -1;
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_stat_evsel {int* group_data; } ;
struct TYPE_3__ {int read_format; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; struct perf_stat_evsel* stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct evsel*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct evsel*) ;
 int FUNC_2 (struct evsel*,int,int,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int*,int) ;
 int* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct evsel *VAR_4, int VAR_5, int VAR_6)
{
 struct perf_stat_evsel *VAR_7 = VAR_4->stats;
 u64 VAR_8 = VAR_4->core.attr.read_format;
 int VAR_9 = FUNC_3(&VAR_4->core);
 u64 *VAR_10 = VAR_7->group_data;

 if (!(VAR_8 & VAR_2))
  return -VAR_0;

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 if (!VAR_10) {
  VAR_10 = FUNC_5(VAR_9);
  if (!VAR_10)
   return -VAR_1;

  VAR_7->group_data = VAR_10;
 }

 if (FUNC_0(VAR_4, VAR_5, VAR_6) < 0)
  return -VAR_0;

 if (FUNC_4(FUNC_0(VAR_4, VAR_5, VAR_6), VAR_10, VAR_9) <= 0)
  return -VAR_3;

 return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_10);
}

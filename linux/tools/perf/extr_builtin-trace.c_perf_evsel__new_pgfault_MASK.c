
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {int mmap_data; int sample_period; int config; int type; } ;
struct evsel {int handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event_attr*) ;
 struct evsel* FUNC_1 (struct perf_event_attr*) ;
 int VAR_1 ;

__attribute__((used)) static struct evsel *FUNC_2(u64 VAR_2)
{
 struct evsel *VAR_3;
 struct perf_event_attr VAR_4 = {
  .type = VAR_0,
  .mmap_data = 1,
 };

 VAR_4.config = VAR_2;
 VAR_4.sample_period = 1;

 FUNC_0(&VAR_4);

 VAR_3 = FUNC_1(&VAR_4);
 if (VAR_3)
  VAR_3->handler = VAR_1;

 return VAR_3;
}

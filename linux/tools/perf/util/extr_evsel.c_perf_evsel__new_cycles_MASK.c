
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int exclude_kernel; scalar_t__ precise_ip; int config; int type; } ;
struct evsel {int precise_max; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char*,char*,scalar_t__,char*) ;
 int FUNC_1 (struct perf_event_attr*) ;
 int FUNC_2 (struct evsel*) ;
 struct evsel* FUNC_3 (struct perf_event_attr*) ;
 int FUNC_4 () ;

struct evsel *FUNC_5(bool VAR_2)
{
 struct perf_event_attr VAR_3 = {
  .type = VAR_1,
  .config = VAR_0,
  .exclude_kernel = !FUNC_4(),
 };
 struct evsel *VAR_4;

 FUNC_1(&VAR_3);

 if (!VAR_2)
  goto new_event;





new_event:
 VAR_4 = FUNC_3(&VAR_3);
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_4->precise_max = 1;


 if (FUNC_0(&VAR_4->name, "cycles%s%s%.*s",
       (VAR_3.precise_ip || VAR_3.exclude_kernel) ? ":" : "",
       VAR_3.exclude_kernel ? "u" : "",
       VAR_3.precise_ip ? VAR_3.precise_ip + 1 : 0, "ppp") < 0)
  goto error_free;
out:
 return VAR_4;
error_free:
 FUNC_2(VAR_4);
 VAR_4 = ((void*)0);
 goto out;
}

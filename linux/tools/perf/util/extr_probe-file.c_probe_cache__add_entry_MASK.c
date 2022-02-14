
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int symbol; } ;
struct probe_trace_event {TYPE_1__ point; } ;
struct probe_cache_entry {int node; int tevlist; } ;
struct probe_cache {int entries; } ;
struct perf_probe_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 struct probe_cache_entry* FUNC_4 (struct probe_cache*,struct perf_probe_event*) ;
 int FUNC_5 (struct probe_cache_entry*) ;
 struct probe_cache_entry* FUNC_6 (struct perf_probe_event*) ;
 int FUNC_7 (int ,char*) ;
 char* FUNC_8 (struct probe_trace_event*) ;

int FUNC_9(struct probe_cache *VAR_2,
      struct perf_probe_event *VAR_3,
      struct probe_trace_event *VAR_4, int VAR_5)
{
 struct probe_cache_entry *VAR_6 = ((void*)0);
 char *VAR_7;
 int VAR_8, VAR_9 = 0;

 if (!VAR_2 || !VAR_3 || !VAR_4 || VAR_5 <= 0) {
  VAR_9 = -VAR_0;
  goto out_err;
 }


 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_2(&VAR_6->node);
  FUNC_5(VAR_6);
 }

 VAR_9 = -VAR_1;
 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6)
  goto out_err;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (!VAR_4[VAR_8].point.symbol)
   continue;

  VAR_7 = FUNC_8(&VAR_4[VAR_8]);
  if (!VAR_7)
   goto out_err;
  FUNC_7(VAR_6->tevlist, VAR_7);
  FUNC_0(VAR_7);
 }
 FUNC_1(&VAR_6->node, &VAR_2->entries);
 FUNC_3("Added probe cache: %d\n", VAR_5);
 return 0;

out_err:
 FUNC_3("Failed to add probe caches\n");
 FUNC_5(VAR_6);
 return VAR_9;
}

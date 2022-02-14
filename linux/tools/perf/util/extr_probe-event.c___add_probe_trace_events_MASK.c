
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct TYPE_3__ {int symbol; } ;
struct probe_trace_event {TYPE_1__ point; scalar_t__ uprobes; } ;
struct probe_cache {int dummy; } ;
struct perf_probe_event {int nsi; int target; scalar_t__ uprobes; } ;
struct nscookie {int dummy; } ;
struct TYPE_4__ {scalar_t__ cache; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct strlist**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct nscookie*) ;
 int FUNC_3 (struct nscookie*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct probe_cache*,struct perf_probe_event*,struct probe_trace_event*,int) ;
 scalar_t__ FUNC_6 (struct probe_cache*) ;
 int FUNC_7 (struct probe_cache*) ;
 struct probe_cache* FUNC_8 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_9 (int,struct probe_trace_event*) ;
 int FUNC_10 (struct probe_trace_event*,struct perf_probe_event*,struct strlist*,int) ;
 int FUNC_11 (struct strlist*) ;
 int FUNC_12 (struct probe_trace_event*) ;

__attribute__((used)) static int FUNC_13(struct perf_probe_event *VAR_2,
         struct probe_trace_event *VAR_3,
         int VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7[2] = {-1, -1}, VAR_8, VAR_9;
 struct probe_trace_event *VAR_10 = ((void*)0);
 struct probe_cache *VAR_11 = ((void*)0);
 struct strlist *VAR_12[2] = {((void*)0), ((void*)0)};
 struct nscookie VAR_13;

 VAR_8 = VAR_2->uprobes ? 1 : 0;
 VAR_7[VAR_8] = FUNC_0(VAR_8, &VAR_12[VAR_8]);
 if (VAR_7[VAR_8] < 0)
  return VAR_7[VAR_8];

 VAR_9 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_10 = &VAR_3[VAR_6];
  VAR_8 = VAR_10->uprobes ? 1 : 0;
  if (VAR_7[VAR_8] == -1) {
   VAR_7[VAR_8] = FUNC_0(VAR_8,
        &VAR_12[VAR_8]);
   if (VAR_7[VAR_8] < 0)
    goto close_out;
  }

  if (!VAR_10->point.symbol && !VAR_2->uprobes)
   continue;


  VAR_9 = FUNC_10(VAR_10, VAR_2, VAR_12[VAR_8],
        VAR_5);
  if (VAR_9 < 0)
   break;

  FUNC_2(VAR_2->nsi, &VAR_13);
  VAR_9 = FUNC_9(VAR_7[VAR_8], VAR_10);
  FUNC_3(&VAR_13);
  if (VAR_9 < 0)
   break;







  VAR_5 = 1;
 }
 if (VAR_9 == -VAR_0 && VAR_2->uprobes)
  FUNC_12(VAR_10);
 if (VAR_9 == 0 && VAR_1.cache) {
  VAR_11 = FUNC_8(VAR_2->target, VAR_2->nsi);
  if (!VAR_11 ||
      FUNC_5(VAR_11, VAR_2, VAR_3, VAR_4) < 0 ||
      FUNC_6(VAR_11) < 0)
   FUNC_4("Failed to add event to probe cache\n");
  FUNC_7(VAR_11);
 }

close_out:
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  FUNC_11(VAR_12[VAR_8]);
  if (VAR_7[VAR_8] >= 0)
   FUNC_1(VAR_7[VAR_8]);
 }
 return VAR_9;
}
